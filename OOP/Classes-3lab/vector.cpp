#include "vector.h"
#include "qdebug.h"
#include "qpen.h"

Vector::Vector(int x1, int y1, int x2, int y2, int x3, int y3, QGraphicsRectItem* item)
{

    this->setParentItem(item);
    std::vector<QGraphicsLineItem*> vec;
    QGraphicsLineItem* z1va1 = new QGraphicsLineItem(x1, y1, x1, 0, item);
    QGraphicsLineItem* z1va2 = new QGraphicsLineItem(x1, y1, x1, 800, item);
    QGraphicsLineItem* y1va1 = new QGraphicsLineItem(x1, y1, 0, y1, item);
    QGraphicsLineItem* y1va2 = new QGraphicsLineItem(x1, y1, 800, y1, item);
    QGraphicsLineItem* x1va1 = new QGraphicsLineItem(x1, y1, y1, x1, item);


    QGraphicsLineItem* x2va1 = new QGraphicsLineItem(x2, y2, y2, x2, item);
    QGraphicsLineItem* z2va1 = new QGraphicsLineItem(x2, y2, x2, 0, item);
    QGraphicsLineItem* z2va2 = new QGraphicsLineItem(x2, y2, x2, 800, item);

    QGraphicsLineItem* x3va1 = new QGraphicsLineItem(x3, y3, y3, x3, item);
    QGraphicsLineItem* y3va1 = new QGraphicsLineItem(x3, y3, 0, y3, item);
    QGraphicsLineItem* y3va2 = new QGraphicsLineItem(x3, y3, 800, y3, item);

    QGraphicsLineItem* another = new QGraphicsLineItem(600, 100, 100, 600, item);
    QGraphicsLineItem* another1 = new QGraphicsLineItem(500, 200, 500, 600, item);
    QGraphicsLineItem* another2 = new QGraphicsLineItem(300, 200, 500, 200, item);
    QGraphicsLineItem* another3 = new QGraphicsLineItem(400, 400, 600, 400, item);
    QGraphicsLineItem* another4 = new QGraphicsLineItem(400, 400, 400, 100, item);

    QList<QGraphicsItem*> list;

    for(auto& elem : z1va1->collidingItems()){
            qDebug()<<elem->pos();
    }

    vec.push_back(z1va1);
    vec.push_back(x1va1);
    vec.push_back(z1va2);
    vec.push_back(y1va1);
    vec.push_back(y1va2);
    vec.push_back(x2va1);
    vec.push_back(z2va1);
    vec.push_back(z2va2);
    vec.push_back(x3va1);
    vec.push_back(y3va1);
    vec.push_back(y3va2);
    vec.push_back(another);
    vec.push_back(another1);
    vec.push_back(another2);
    vec.push_back(another3);
    vec.push_back(another4);

    QPen pen;
    pen.setWidth(8);
    for(auto& elem : vec){
        elem->setPen(pen);
    }
}


