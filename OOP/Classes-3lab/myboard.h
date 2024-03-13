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
#include <map>

#include "vector.h"
using namespace std;

class MyBoard : public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    MyBoard(QGraphicsScene* scene, QGraphicsRectItem* parent = 0);
    void buildingDecartSystem();
    void dotsCreator(QString s, int i, int x, int y);
    vector<int> stringParser(QString string);

    std::vector<Vector*> vecArr;
public slots:
    void createNewVector(QString string);
private:
    QGraphicsScene* scene{nullptr};

    std::vector<pair<QGraphicsEllipseItem*, QString>>DotsOnX;
    std::vector<pair<QGraphicsEllipseItem*, QString>>DotsOnY;
    std::vector<pair<QGraphicsEllipseItem*, QString>>DotsOnZ;

    QGraphicsLineItem* genX{nullptr};
    QGraphicsLineItem* genY{nullptr};
    QGraphicsLineItem* genZ{nullptr};

    std::map<int, pair<int, int>> ConvertX;
    std::map<int, pair<int, int>> ConvertY;
    std::map<int, pair<int, int>> ConvertZ;
};

#endif // MYBOARD_H
