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
}

void GeneralWidget::createWidget()
{
    WidgetToCreateVector* wdgt = new WidgetToCreateVector;
    wdgt->show();
}

void GeneralWidget::getString(QString string)
{
    this->string = string;
    qDebug()<<"was called and send: "<<string;
}
