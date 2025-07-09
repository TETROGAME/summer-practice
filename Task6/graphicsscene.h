#ifndef GRAPHICSSCENE_H
#define GRAPHICSSCENE_H

#include <QGraphicsScene>
#include <QVector>
#include <QGraphicsItem>
#include "shape.h"

class GraphicsScene : public QGraphicsScene
{
    Q_OBJECT

public:
    GraphicsScene(QObject *parent = nullptr);
    ~GraphicsScene();

    void setCurrentShapeType(ShapeType type) { currentShapeType = type; }
    void setCurrentOutlineColor(const QColor& color) { currentOutlineColor = color; }
    void setCurrentFillColor(const QColor& color) { currentFillColor = color; }
    void setCurrentFillStyle(FillStyle style) { currentFillStyle = style; }

    const QVector<Shape*>& getShapes() const { return shapes; }
    void clearShapes();
    void addShape(Shape* shape);

    bool undoLastShape();

    bool saveToFile(const QString& fileName);
    bool loadFromFile(const QString& fileName);

protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *event) override;
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event) override;
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event) override;
    void drawForeground(QPainter *painter, const QRectF &rect) override;

private:
    ShapeType currentShapeType;
    QColor currentOutlineColor;
    QColor currentFillColor;
    FillStyle currentFillStyle;

    bool drawing;
    QPointF startPoint;
    QPointF endPoint;
    QRectF tempRect;

    QVector<Shape*> shapes;

    void updateTempRect(const QPointF& pos);
};

#endif
