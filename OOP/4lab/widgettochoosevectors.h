#ifndef WIDGETTOCHOOSEVECTORS_H
#define WIDGETTOCHOOSEVECTORS_H
#include <QWidget>
#include <vector>
#include <QPushButton>
#include "qdebug.h"
#include "vector.h"
#include <queue>
#include <QPen>
using namespace std;

struct MyButton : public QPushButton{
    Q_OBJECT
public:
    MyButton(Vector* vec, QString str, int posX, int posY, QWidget* parent){
        this->setFixedSize(500, 50);
        this->move(posX, posY);
        this->vec = vec;
        this->setText(str);
        this->setParent(parent);
        QObject::connect(this, SIGNAL(clicked()), this, SLOT(changeColor()));
    }
    Vector* vec{nullptr};
    int counter = 0;
public slots:
    void changeColor(){
        counter++;
        if(counter % 2 == 0){
            this->setStyleSheet("background-color: white;");
            qDebug()<<this->styleSheet();
            emit addToQue();
        }
        else{
            this->setStyleSheet("background-color: blue;");
            qDebug()<<this->styleSheet();
            emit addToQue();
        }
    }
signals:
    void addToQue();
};

class WidgetToChooseVectors : public QWidget
{
    Q_OBJECT
public:
    WidgetToChooseVectors(vector<Vector*> vec);
    vector<Vector*> vec;
    vector<MyButton*> buttons;
    pair<MyButton*, MyButton*> que;
public slots:
    void realerNrealer();
    void checker(MyButton* btn);
signals:
    void changeSignal(MyButton* btn);
};

#endif // WIDGETTOCHOOSEVECTORS_H
