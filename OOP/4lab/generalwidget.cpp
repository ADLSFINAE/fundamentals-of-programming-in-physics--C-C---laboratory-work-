#include "generalwidget.h"
#include <QDebug>
GeneralWidget::GeneralWidget(QWidget *parent)
    :QWidget(parent)
{
    this->setFixedSize(1000, 800);
    createVector = new QPushButton("Create Vector", this);
    createVector->setFixedSize(200, 50);
    createVector->move(800, 0);

    QObject::connect(createVector, SIGNAL(clicked()), this, SLOT(createWidget()));

    choseAndOperation = new QPushButton("Chose and operation", this);
    choseAndOperation->setFixedSize(200, 50);
    choseAndOperation->move(800, 50);

    QObject::connect(choseAndOperation, SIGNAL(clicked()), this, SLOT(createWidget2()));

    tableOfVectors = new QPushButton("Choose 2 vectors", this);
    tableOfVectors->setFixedSize(200, 50);
    tableOfVectors->move(800, 100);

    QObject::connect(tableOfVectors, SIGNAL(clicked()), this, SLOT(createWidget3()));

    createVectorArr = new QPushButton("Choose 2 vectors", this);
    createVectorArr->setFixedSize(200, 50);
    createVectorArr->move(800, 150);

    QObject::connect(createVectorArr, SIGNAL(clicked()), this, SLOT(createWidget4()));

    view->setParent(this);
    view->show();
}

void GeneralWidget::createWidget()
{
    WidgetToCreateVector* wdgt = new WidgetToCreateVector;
    wdgt->show();

    QObject::connect(wdgt, SIGNAL(sendInfo1(QString)), this->scene->board, SLOT(createNewVector(QString)));
    QObject::connect(wdgt, SIGNAL(sendInfo2(QString)), this->scene->board, SLOT(createNewVector(QString)));
    QObject::connect(wdgt, SIGNAL(sendInfo3(QString)), this->scene->board, SLOT(createNewVector(QString)));
}

void GeneralWidget::createWidget2()
{
    WidgetToChooseOperations* wdgt = new WidgetToChooseOperations;

    QObject::connect(wdgt->button1, SIGNAL(clicked()), this->scene->board, SLOT(vectorPlus()));
    QObject::connect(wdgt->button2, SIGNAL(clicked()), this->scene->board, SLOT(vectorMinus()));
    QObject::connect(wdgt->button3, SIGNAL(clicked()), this->scene->board, SLOT(vectorScal()));
    QObject::connect(wdgt, SIGNAL(signalK(int)), this->scene->board, SLOT(vectorK(int)));
}

void GeneralWidget::createWidget3()
{
    for(auto& elem : this->scene->board->vecArr){
        elem->wasChoosen = false;
    }
    WidgetToChooseVectors* wdgt = new WidgetToChooseVectors(this->scene->board->vecArr);


}

void GeneralWidget::createWidget4()
{
    MyVectors* wdgt = new MyVectors(this->scene->board->vecArr);
}

void GeneralWidget::getString(QString string)
{
    this->string = string;
    qDebug()<<"was called and send: "<<string;
}
