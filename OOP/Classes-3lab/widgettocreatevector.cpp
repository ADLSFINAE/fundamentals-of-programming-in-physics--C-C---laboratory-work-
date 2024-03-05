#include "widgettocreatevector.h"

WidgetToCreateVector::WidgetToCreateVector(QWidget *parent)
    :QWidget(parent)
{
    this->setFixedSize(360, 150);

    labelXstart = new QLineEdit(this);
    labelXstart->setFixedSize(100, 20);
    labelXstart->move(20, 0);
    labelXstart->setText("0");

    QLabel* x0info = new QLabel("x0: ", this);
    x0info->setFixedSize(20, 20);
    x0info->move(0, 0);
    x0info->show();

    labelYstart = new QLineEdit(this);
    labelYstart->setFixedSize(100, 20);
    labelYstart->move(140, 0);
    labelYstart->setText("0");

    QLabel* y0info = new QLabel("y0: ", this);
    y0info->setFixedSize(20, 20);
    y0info->move(120, 0);
    y0info->show();

    labelZstart = new QLineEdit(this);
    labelZstart->setFixedSize(100, 20);
    labelZstart->move(260, 0);
    labelZstart->setText("0");

    QLabel* z0info = new QLabel("z0: ", this);
    z0info->setFixedSize(20, 20);
    z0info->move(240, 0);
    z0info->show();

    labelXend = new QLineEdit(this);
    labelXend->setFixedSize(100, 20);
    labelXend->move(20, 20);
    labelXend->setText("0");

    QLabel* x1info = new QLabel("x1: ", this);
    x1info->setFixedSize(20, 20);
    x1info->move(0, 20);
    x1info->show();

    labelYend = new QLineEdit(this);
    labelYend->setFixedSize(100, 20);
    labelYend->move(140, 20);
    labelYend->setText("0");

    QLabel* y1info = new QLabel("y1: ", this);
    y1info->setFixedSize(20, 20);
    y1info->move(120, 20);
    y1info->show();

    labelZend = new QLineEdit(this);
    labelZend->setFixedSize(100, 20);
    labelZend->move(260, 20);
    labelZend->setText("0");

    QLabel* z1info = new QLabel("z1: ", this);
    z1info->setFixedSize(20, 20);
    z1info->move(240, 20);
    z1info->show();

    alternativeMethod = new QLineEdit(this);
    alternativeMethod->setFixedSize(270, 20);
    alternativeMethod->move(90, 60);
    alternativeMethod->setText("0");

    QLabel* alternativeMethodInfo = new QLabel("AlternativeMethod ", this);
    alternativeMethodInfo->setFixedSize(140, 20);
    alternativeMethodInfo->move(0, 60);
    alternativeMethodInfo->show();

    stepK = new QLineEdit(this);
    stepK->setFixedSize(270, 20);
    stepK->move(90, 80);
    stepK->setText("0");

    QLabel* stepKMethodInfo = new QLabel("stepK: ", this);
    stepKMethodInfo->setFixedSize(140, 20);
    stepKMethodInfo->move(0, 80);
    stepKMethodInfo->show();

    buttonFor1Method = new QPushButton("1 METHOD", this);
    buttonFor1Method->setFixedSize(120, 20);
    buttonFor1Method->move(0, 130);

    QObject::connect(buttonFor1Method, SIGNAL(clicked()), this, SLOT(close()));

    buttonFor2Method = new QPushButton("2 METHOD", this);
    buttonFor2Method->setFixedSize(120, 20);
    buttonFor2Method->move(120, 130);

    QObject::connect(buttonFor2Method, SIGNAL(clicked()), this, SLOT(close()));

    buttonFor3Method = new QPushButton("3 METHOD", this);
    buttonFor3Method->setFixedSize(120, 20);
    buttonFor3Method->move(240, 130);

    QObject::connect(buttonFor3Method, SIGNAL(clicked()), this, SLOT(close()));
}
