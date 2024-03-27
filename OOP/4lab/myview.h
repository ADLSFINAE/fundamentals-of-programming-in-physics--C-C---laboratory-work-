#ifndef MYVIEW_H
#define MYVIEW_H
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QObject>

class MyView : public QGraphicsView
{
    Q_OBJECT
public:
    MyView(QGraphicsScene* scene, QGraphicsView* parent = 0);
};

#endif // MYVIEW_H
