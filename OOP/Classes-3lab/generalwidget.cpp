#include "generalwidget.h"
#include <QDebug>
GeneralWidget::GeneralWidget(QWidget *parent)
    :QWidget(parent)
{
    this->setFixedSize(1000, 800);
    createVector = new QPushButton("Create Vector", this);
    createVector->setFixedSize(200, 50);
    createVector->move(800, 0);

    choseAndOperation = new QPushButton("Chose and operation", this);
    choseAndOperation->setFixedSize(200, 50);
    choseAndOperation->move(800, 50);

    QObject::connect(createVector, SIGNAL(clicked()), this, SLOT(createWidget()));
    view->setParent(this);
    view->show();
}

void GeneralWidget::createWidget()
{
    WidgetToCreateVector* wdgt = new WidgetToCreateVector;
    wdgt->show();

    QObject::connect(wdgt, SIGNAL(sendInfo1(QString)), this->scene->board, SLOT(createNewVector(QString)));
    //QObject::connect(wdgt->buttonFor1Method, SIGNAL(clicked()), this->scene->board, SLOT(slot()));
}

void GeneralWidget::getString(QString string)
{
    this->string = string;
    qDebug()<<"was called and send: "<<string;
}
