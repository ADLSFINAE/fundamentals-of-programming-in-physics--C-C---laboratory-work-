#include "myscene.h"
#include <QLineF>
#include <QGraphicsLineItem>
MyScene::MyScene(QGraphicsScene *parent) :
    QGraphicsScene(parent)
{
    this->setSceneRect(0, 0, 800, 800);
    board = new MyBoard(this);
    this->addItem(board);
}
