#include "myboard.h"
#include <QDebug>
MyBoard::MyBoard(QGraphicsScene *scene, QGraphicsRectItem *parent)
    :QGraphicsRectItem(parent), scene(scene)
{
    this->buildingDecartSystem();

    int x = 400;
    int y = 400;
    for(int i = 0; i < 400; i++){
        ConvertX[i] = {x--, y++};
    }

    x = 401;
    y = 401;

    for(int i = -1; i > - 400; i--){
        ConvertX[i] = {x++, y--};
    }

    int xOY = 400;
    for(int i = 0; i < 400; i++){
        ConvertY[i] = {xOY++, 400};
    }

    xOY = 400;
    for(int i = -1; i > -400; i--){
        ConvertY[i] = {xOY--, 400};
    }

    int yOZ = 400;
    for(int i = 0; i < 400; i++){
        ConvertZ[i] = {400, yOZ--};
    }

    yOZ = 400;
    for(int i = -1; i > -400; i--){
        ConvertZ[i] = {400, yOZ++};
    }

    qDebug()<<ConvertX[100].first<<ConvertX[100].second;
    qDebug()<<ConvertY[200].first<<ConvertY[200].second;
    qDebug()<<ConvertZ[300].first<<ConvertZ[300].second;
    Vector* vec = new Vector(ConvertX[100].first, ConvertX[100].second,
            ConvertY[-200].first, ConvertY[-200].second,
            ConvertZ[-300].first, ConvertZ[-300].second, this);

    //QGraphicsLineItem* item = new QGraphicsLineItem(400, 400, 500, 200, this);
    QPen pen;
    pen.setWidth(10);
    pen.setBrush(QBrush(Qt::red));
    //item->setPen(pen);

}

void MyBoard::buildingDecartSystem()
{
    genX = new QGraphicsLineItem(0, 800, 800, 0, this);
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

    genY = new QGraphicsLineItem(0, 400, 800, 400, this);
    genY->setPen(QPen(Qt::blue));
    for(int i = 0; i < 16; i++){
        auto item = new QGraphicsEllipseItem(this);
        item->setRect(i * 50, 400, 5, 5);
        item->setPen(QPen(Qt::red));
        item->setBrush(QBrush(Qt::red));
        QString str;
        if(i >= 8){
            str = QString::number(-(8 - i));
        }
        else if(i < 8){
            str = QString::number((i - 8));
        }
        else{
            str = QString::number(0);
        }

        auto text = new QGraphicsTextItem(str, this);
        text->setPos(i * 50, 400);
        text->setTextWidth(10);

        DotsOnY.push_back({item, str});

    }

    genZ = new QGraphicsLineItem(400, 0, 400, 800, this);
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
