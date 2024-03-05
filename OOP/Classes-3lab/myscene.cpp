#include "myscene.h"
#include <QLineF>
#include <QGraphicsLineItem>
#include "myboard.h"
MyScene::MyScene(QGraphicsScene *parent) :
    QGraphicsScene(parent)
{
    this->setSceneRect(0, 0, 800, 800);
    MyBoard* board = new MyBoard(this);
    this->addItem(board);
}
