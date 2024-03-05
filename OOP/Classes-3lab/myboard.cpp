#include "myboard.h"

MyBoard::MyBoard(QGraphicsScene *scene, QGraphicsRectItem *parent)
    :QGraphicsRectItem(parent), scene(scene)
{
    this->buildingDecartSystem();
}

void MyBoard::buildingDecartSystem()
{
    genX = new Vector(200, 400, 600, 400, this);
    genY = new Vector(400, 200, 400, 600, this);
    genZ = new Vector(600, 200, 200, 600, this);
}
