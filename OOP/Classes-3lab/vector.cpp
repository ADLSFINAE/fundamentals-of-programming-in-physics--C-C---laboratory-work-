#include "vector.h"
#include "qdebug.h"
#include "qpen.h"
Vector::Vector(int x1, int y1, int x2, int y2, int x3, int y3, QGraphicsRectItem* item)
    :x1(y1), x2(y2), x3(y3)
{

    this->setParentItem(item);

    QGraphicsLineItem* y1va1 = new QGraphicsLineItem(x1, y1, x1 + (x2 - 400), y1, item);
    QGraphicsLineItem* y1va2 = new QGraphicsLineItem(x1 + (x2 - 400), y1, x1 + (x2 - 400) ,y1 + y3 - 400, item);

    QGraphicsLineItem* jigolo = new QGraphicsLineItem(400, 400, x1 + (x2 - 400) ,y1 + y3 - 400, item);

    QPen pen;
    pen.setWidth(8);
    jigolo->setPen(pen);

    QGraphicsLineItem* z1va1 = new QGraphicsLineItem(x1, y1, x1, y1 + y3 - 400, item);
    QGraphicsLineItem* z1va2 = new QGraphicsLineItem(x1, y1 + y3 - 400, x1 + (x2 - 400),y1 + y3 - 400, item);

    QGraphicsLineItem* x2va1 = new QGraphicsLineItem(x2, y2, x1 + (x2 - 400), y1, item);
    QGraphicsLineItem* z2va1 = new QGraphicsLineItem(x2, y2, x2, y3, item);

    QGraphicsLineItem* x3va1 = new QGraphicsLineItem(x3, y3, x1, y1 + y3 - 400, item);
    QGraphicsLineItem* y3va1 = new QGraphicsLineItem(x3, y3, x2, y3, item);
}


