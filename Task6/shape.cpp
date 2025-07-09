#include "shape.h"
#include <QPainterPath>

Shape::Shape(const QRect& boundingRect, const QColor& outlineColor,
             FillStyle fillStyle, const QColor& fillColor)
    : m_boundingRect(boundingRect),
    m_outlineColor(outlineColor),
    m_fillStyle(fillStyle),
    m_fillColor(fillColor)
{
}

void Shape::save(QDataStream& stream) const
{
    stream << m_boundingRect;
    stream << m_outlineColor;
    stream << m_fillStyle;
    stream << m_fillColor;
}

void Shape::load(QDataStream& stream)
{
    stream >> m_boundingRect;
    stream >> m_outlineColor;
    stream >> m_fillStyle;
    stream >> m_fillColor;
}

Shape* Shape::createShape(ShapeType type, const QRect& rect,
                          const QColor& outlineColor,
                          FillStyle fillStyle,
                          const QColor& fillColor)
{
    switch (type) {
    case ShapeType::Rectangle:
        return new Rectangle(rect, outlineColor, fillStyle, fillColor);
    case ShapeType::Ellipse:
        return new Ellipse(rect, outlineColor, fillStyle, fillColor);
    case ShapeType::Diamond:
        return new Diamond(rect, outlineColor, fillStyle, fillColor);
    default:
        return nullptr;
    }
}

Rectangle::Rectangle(const QRect& boundingRect, const QColor& outlineColor,
                     FillStyle fillStyle, const QColor& fillColor)
    : Shape(boundingRect, outlineColor, fillStyle, fillColor)
{
}

void Rectangle::draw(QPainter& painter) const
{
    painter.save();

    switch (m_fillStyle) {
    case FillStyle::NoFill:
        painter.setPen(m_outlineColor);
        painter.setBrush(Qt::NoBrush);
        break;

    case FillStyle::Filled:
        painter.setPen(Qt::NoPen);
        painter.setBrush(m_fillColor);
        break;

    case FillStyle::Outline:
        painter.setPen(m_outlineColor);
        painter.setBrush(m_fillColor);
        break;
    }

    painter.drawRect(m_boundingRect);
    painter.restore();
}

Ellipse::Ellipse(const QRect& boundingRect, const QColor& outlineColor,
                 FillStyle fillStyle, const QColor& fillColor)
    : Shape(boundingRect, outlineColor, fillStyle, fillColor)
{
}

void Ellipse::draw(QPainter& painter) const
{
    painter.save();

    switch (m_fillStyle) {
    case FillStyle::NoFill:
        painter.setPen(m_outlineColor);
        painter.setBrush(Qt::NoBrush);
        break;

    case FillStyle::Filled:
        painter.setPen(Qt::NoPen);
        painter.setBrush(m_fillColor);
        break;

    case FillStyle::Outline:
        painter.setPen(m_outlineColor);
        painter.setBrush(m_fillColor);
        break;
    }

    painter.drawEllipse(m_boundingRect);
    painter.restore();
}

Diamond::Diamond(const QRect& boundingRect, const QColor& outlineColor,
                 FillStyle fillStyle, const QColor& fillColor)
    : Shape(boundingRect, outlineColor, fillStyle, fillColor)
{
}

void Diamond::draw(QPainter& painter) const
{
    painter.save();

    switch (m_fillStyle) {
    case FillStyle::NoFill:
        painter.setPen(m_outlineColor);
        painter.setBrush(Qt::NoBrush);
        break;

    case FillStyle::Filled:
        painter.setPen(Qt::NoPen);
        painter.setBrush(m_fillColor);
        break;

    case FillStyle::Outline:
        painter.setPen(m_outlineColor);
        painter.setBrush(m_fillColor);
        break;
    }

    QPainterPath path;
    QPoint center = m_boundingRect.center();
    path.moveTo(center.x(), m_boundingRect.top());
    path.lineTo(m_boundingRect.right(), center.y());
    path.lineTo(center.x(), m_boundingRect.bottom());
    path.lineTo(m_boundingRect.left(), center.y());
    path.closeSubpath();

    painter.drawPath(path);
    painter.restore();
}

QDataStream& operator<<(QDataStream& stream, const ShapeType& type)
{
    stream << static_cast<qint32>(type);
    return stream;
}

QDataStream& operator>>(QDataStream& stream, ShapeType& type)
{
    qint32 value;
    stream >> value;
    type = static_cast<ShapeType>(value);
    return stream;
}

QDataStream& operator<<(QDataStream& stream, const FillStyle& style)
{
    stream << static_cast<qint32>(style);
    return stream;
}

QDataStream& operator>>(QDataStream& stream, FillStyle& style)
{
    qint32 value;
    stream >> value;
    style = static_cast<FillStyle>(value);
    return stream;
}
