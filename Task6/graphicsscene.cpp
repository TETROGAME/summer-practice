#include "graphicsscene.h"
#include <QGraphicsSceneMouseEvent>
#include <QPainter>
#include <QFile>
#include <QDataStream>
#include <QMessageBox>

GraphicsScene::GraphicsScene(QObject *parent)
    : QGraphicsScene(parent),
    currentShapeType(ShapeType::Rectangle),
    currentOutlineColor(Qt::black),
    currentFillColor(Qt::white),
    currentFillStyle(FillStyle::Outline),
    drawing(false)
{
    setSceneRect(0, 0, 10, 10);
}

GraphicsScene::~GraphicsScene()
{
    clearShapes();
}

void GraphicsScene::clearShapes()
{
    for (Shape* shape : shapes) {
        delete shape;
    }
    shapes.clear();
    update();
}

void GraphicsScene::addShape(Shape* shape)
{
    if (shape) {
        shapes.append(shape);
        update();
    }
}

bool GraphicsScene::undoLastShape()
{
    if (shapes.isEmpty()) {
        return false;
    }

    Shape* lastShape = shapes.last();
    shapes.removeLast();
    delete lastShape;

    update();
    return true;
}

void GraphicsScene::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        drawing = true;
        startPoint = event->scenePos();
        endPoint = event->scenePos();
        updateTempRect(endPoint);
        update();
    }
    QGraphicsScene::mousePressEvent(event);
}

void GraphicsScene::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    if (drawing) {
        endPoint = event->scenePos();
        updateTempRect(endPoint);
        update();
    }
    QGraphicsScene::mouseMoveEvent(event);
}

void GraphicsScene::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    if (event->button() == Qt::LeftButton && drawing) {
        endPoint = event->scenePos();
        updateTempRect(endPoint);

        if (tempRect.width() > 2 && tempRect.height() > 2) {
            QRect rect(tempRect.x(), tempRect.y(), tempRect.width(), tempRect.height());
            Shape* shape = Shape::createShape(
                currentShapeType,
                rect,
                currentOutlineColor,
                currentFillStyle,
                currentFillColor
                );
            if (shape) {
                shapes.push_back(shape);
            }
        }

        drawing = false;
        update();
    }
    QGraphicsScene::mouseReleaseEvent(event);
}

void GraphicsScene::updateTempRect(const QPointF& pos)
{
    tempRect = QRectF(
        qMin(startPoint.x(), pos.x()),
        qMin(startPoint.y(), pos.y()),
        qAbs(pos.x() - startPoint.x()),
        qAbs(pos.y() - startPoint.y())
        );
}

void GraphicsScene::drawForeground(QPainter *painter, const QRectF &rect)
{
    Q_UNUSED(rect);

    painter->setRenderHint(QPainter::Antialiasing);

    for (const Shape* shape : shapes) {
        shape->draw(*painter);
    }

    if (drawing) {
        painter->save();

        switch (currentFillStyle) {
        case FillStyle::NoFill:
            painter->setPen(currentOutlineColor);
            painter->setBrush(Qt::NoBrush);
            break;

        case FillStyle::Filled:
            painter->setPen(Qt::NoPen);
            painter->setBrush(currentFillColor);
            break;

        case FillStyle::Outline:
            painter->setPen(currentOutlineColor);
            painter->setBrush(currentFillColor);
            break;
        }

        switch (currentShapeType) {
        case ShapeType::Rectangle:
            painter->drawRect(tempRect);
            break;

        case ShapeType::Ellipse:
            painter->drawEllipse(tempRect);
            break;

        case ShapeType::Diamond:
        {
            QPainterPath path;
            QPointF center = tempRect.center();
            path.moveTo(center.x(), tempRect.top());
            path.lineTo(tempRect.right(), center.y());
            path.lineTo(center.x(), tempRect.bottom());
            path.lineTo(tempRect.left(), center.y());
            path.closeSubpath();
            painter->drawPath(path);
        }
        break;
        }

        painter->restore();
    }

    QGraphicsScene::drawForeground(painter, rect);
}

bool GraphicsScene::saveToFile(const QString& fileName)
{
    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly)) {
        return false;
    }

    QDataStream out(&file);

    out << static_cast<qint32>(shapes.size());

    for (const Shape* shape : shapes) {
        out << shape->type();
        shape->save(out);
    }

    file.close();
    return true;
}

bool GraphicsScene::loadFromFile(const QString& fileName)
{
    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly)) {
        return false;
    }

    QDataStream in(&file);
    in.setVersion(QDataStream::Qt_5_15);

    clearShapes();

    qint32 count;
    in >> count;

    for (int i = 0; i < count; ++i) {
        ShapeType shapeType;
        in >> shapeType;

        Shape* shape = Shape::createShape(
            shapeType,
            QRect(),
            Qt::black,
            FillStyle::NoFill,
            Qt::white
            );

        if (shape) {
            shape->load(in);
            shapes.push_back(shape);
        }
    }

    file.close();
    update();
    return true;
}
