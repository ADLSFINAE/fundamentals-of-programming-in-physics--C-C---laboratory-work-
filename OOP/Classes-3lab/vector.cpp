#include "vector.h"

Vector::Vector(int x1, int y1, int z1, int x2, int y2, int z2, QGraphicsRectItem* item)
{
    this->setLine(x1, y1, x2, y2);
    this->setParentItem(item);

}


