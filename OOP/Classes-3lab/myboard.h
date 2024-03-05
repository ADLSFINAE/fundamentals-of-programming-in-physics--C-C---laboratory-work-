#ifndef MYBOARD_H
#define MYBOARD_H
#include <QGraphicsRectItem>
#include <QGraphicsScene>
#include <QObject>
#include <QPen>
#include <QBrush>

#include "vector.h"

class MyBoard : public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    MyBoard(QGraphicsScene* scene, QGraphicsRectItem* parent = 0);
    void buildingDecartSystem();
private:
    QGraphicsScene* scene{nullptr};

    Vector* genX{nullptr};
    Vector* genY{nullptr};
    Vector* genZ{nullptr};
};

#endif // MYBOARD_H
