#include "myview.h"

MyView::MyView(QGraphicsScene *scene, QGraphicsView *parent)
    :QGraphicsView(parent)
{
    this->setScene(scene);
    this->setFixedSize(808, 808);
}
