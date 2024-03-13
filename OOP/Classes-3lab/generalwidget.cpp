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

    tableOfVectors = new QPushButton("Choose 2 vectors", this);
    tableOfVectors->setFixedSize(200, 50);
    tableOfVectors->move(800, 100);

    QObject::connect(tableOfVectors, SIGNAL(clicked()), this, SLOT(createWidget3()));

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

void GeneralWidget::createWidget3()
{
    WidgetToChooseVectors* wdgt = new WidgetToChooseVectors(this->scene->board->vecArr);

}

void GeneralWidget::getString(QString string)
{
    this->string = string;
    qDebug()<<"was called and send: "<<string;
}
