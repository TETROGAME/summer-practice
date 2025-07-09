#ifndef SHAPE_H
#define SHAPE_H

#include <QColor>
#include <QPainter>
#include <QDataStream>
#include <QRect>

enum class ShapeType {
    Rectangle,
    Ellipse,
    Diamond
};

enum class FillStyle {
    NoFill,
    Filled,
    Outline
};

class Shape {
public:
    Shape(const QRect& boundingRect = QRect(),
          const QColor& outlineColor = Qt::black,
          FillStyle fillStyle = FillStyle::NoFill,
          const QColor& fillColor = Qt::white);
    virtual ~Shape() = default;

    void setBoundingRect(const QRect& rect) { m_boundingRect = rect; }
    QRect boundingRect() const { return m_boundingRect; }

    void setOutlineColor(const QColor& color) { m_outlineColor = color; }
    QColor outlineColor() const { return m_outlineColor; }

    void setFillStyle(FillStyle style) { m_fillStyle = style; }
    FillStyle fillStyle() const { return m_fillStyle; }

    void setFillColor(const QColor& color) { m_fillColor = color; }
    QColor fillColor() const { return m_fillColor; }

    virtual void draw(QPainter& painter) const = 0;

    virtual ShapeType type() const = 0;

    virtual void save(QDataStream& stream) const;
    virtual void load(QDataStream& stream);

    static Shape* createShape(ShapeType type, const QRect& rect,
                              const QColor& outlineColor,
                              FillStyle fillStyle,
                              const QColor& fillColor);

protected:
    QRect m_boundingRect;
    QColor m_outlineColor;
    FillStyle m_fillStyle;
    QColor m_fillColor;
};

class Rectangle : public Shape {
public:
    Rectangle(const QRect& boundingRect = QRect(),
              const QColor& outlineColor = Qt::black,
              FillStyle fillStyle = FillStyle::NoFill,
              const QColor& fillColor = Qt::white);

    void draw(QPainter& painter) const override;
    ShapeType type() const override { return ShapeType::Rectangle; }
};

class Ellipse : public Shape {
public:
    Ellipse(const QRect& boundingRect = QRect(),
            const QColor& outlineColor = Qt::black,
            FillStyle fillStyle = FillStyle::NoFill,
            const QColor& fillColor = Qt::white);

    void draw(QPainter& painter) const override;
    ShapeType type() const override { return ShapeType::Ellipse; }
};

class Diamond : public Shape {
public:
    Diamond(const QRect& boundingRect = QRect(),
            const QColor& outlineColor = Qt::black,
            FillStyle fillStyle = FillStyle::NoFill,
            const QColor& fillColor = Qt::white);

    void draw(QPainter& painter) const override;
    ShapeType type() const override { return ShapeType::Diamond; }
};

QDataStream& operator<<(QDataStream& stream, const ShapeType& type);
QDataStream& operator>>(QDataStream& stream, ShapeType& type);
QDataStream& operator<<(QDataStream& stream, const FillStyle& style);
QDataStream& operator>>(QDataStream& stream, FillStyle& style);

#endif
