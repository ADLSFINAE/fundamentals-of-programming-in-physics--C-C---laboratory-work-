#ifndef VECTOR_H
#define VECTOR_H
#include <QObject>
#include <QGraphicsLineItem>

class Vector : public QObject, public QGraphicsLineItem
{
    Q_OBJECT
public:
    Vector(int x1, int y1, int x2, int y2, int x3, int y3, QGraphicsRectItem* item);
    double getLong();
    int x1, x2, x3;
    int y1, y2, y3;
    bool wasChoosen = false;

    int genX;
    int genY;

    QGraphicsLineItem* jigolo{nullptr};
};

#endif // VECTOR_H
