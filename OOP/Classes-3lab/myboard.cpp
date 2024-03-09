#include "myboard.h"

MyBoard::MyBoard(QGraphicsScene *scene, QGraphicsRectItem *parent)
    :QGraphicsRectItem(parent), scene(scene)
{
    this->buildingDecartSystem();

}

void MyBoard::buildingDecartSystem()
{
    genX = new Vector(0, 800, 0, 800, 0, 0, this);
    genX->setPen(QPen(Qt::green));
    for(int i = 0; i < 16; i++){
        auto item = new QGraphicsEllipseItem(this);
        item->setRect((i * 50), (800 - (i * 50)), 5, 5);
        item->setPen(QPen(Qt::red));
        item->setBrush(QBrush(Qt::red));

        QString str;
        dotsCreator(str, i, (i * 50), (800 - (i * 50)));

        DotsOnX.push_back({item, str});
    }

    genY = new Vector(0, 400, 0, 800, 400, 0, this);
    genY->setPen(QPen(Qt::blue));
    for(int i = 0; i < 16; i++){
        auto item = new QGraphicsEllipseItem(this);
        item->setRect(i * 50, 400, 5, 5);
        item->setPen(QPen(Qt::red));
        item->setBrush(QBrush(Qt::red));

        QString str;
        dotsCreator(str, i, i * 50, 400);

        DotsOnY.push_back({item, str});

    }

    genZ = new Vector(400, 0, 0, 400, 800, 0, this);
    genZ->setPen(QPen(Qt::yellow));
    for(int i = 0; i < 16; i++){
        auto item = new QGraphicsEllipseItem(this);
        item->setRect(400, i * 50, 5, 5);
        item->setPen(QPen(Qt::red));
        item->setBrush(QBrush(Qt::red));

        QString str;
        dotsCreator(str, i, 400, i * 50);

        DotsOnZ.push_back({item, str});
    }
}

void MyBoard::createNewVector(QString string)
{

}

void MyBoard::dotsCreator(QString s, int i, int x, int y)
{
    if(i <= 8){
        s = QString::number(8 - i);
    }
    else if(i > 8){
        s = QString::number(-(i - 8));
    }
    else{
        s = QString::number(0);
    }

    auto text = new QGraphicsTextItem(s, this);
    text->setPos(x, y);
    text->setTextWidth(10);
}
