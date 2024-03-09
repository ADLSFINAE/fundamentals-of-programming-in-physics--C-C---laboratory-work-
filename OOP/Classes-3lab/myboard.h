#ifndef MYBOARD_H
#define MYBOARD_H
#include <QGraphicsRectItem>
#include <QGraphicsScene>
#include <QObject>
#include <QPen>
#include <QBrush>
#include <vector>
#include <QGraphicsEllipseItem>
#include <QGraphicsTextItem>

#include "vector.h"
using namespace std;

class MyBoard : public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    MyBoard(QGraphicsScene* scene, QGraphicsRectItem* parent = 0);
    void buildingDecartSystem();
    void createNewVector(QString string);
    void dotsCreator(QString s, int i, int x, int y);

private:
    QGraphicsScene* scene{nullptr};

    std::vector<pair<QGraphicsEllipseItem*, QString>>DotsOnX;
    std::vector<pair<QGraphicsEllipseItem*, QString>>DotsOnY;
    std::vector<pair<QGraphicsEllipseItem*, QString>>DotsOnZ;

    Vector* genX{nullptr};
    Vector* genY{nullptr};
    Vector* genZ{nullptr};
    std::vector<Vector*> vecArr;
};

#endif // MYBOARD_H
