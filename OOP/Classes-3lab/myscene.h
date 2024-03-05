#ifndef MYSCENE_H
#define MYSCENE_H
#include <QGraphicsScene>
#include <QObject>
#include <QPushButton>

class MyScene : public QGraphicsScene
{
    Q_OBJECT
public:
    MyScene(QGraphicsScene* parent = 0);
private:
    QPushButton* button{nullptr};
};

#endif // MYSCENE_H
