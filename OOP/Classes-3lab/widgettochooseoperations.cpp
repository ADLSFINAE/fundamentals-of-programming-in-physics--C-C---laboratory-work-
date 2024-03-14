#include "widgettochooseoperations.h"
#include "qlineedit.h"

WidgetToChooseOperations::WidgetToChooseOperations(QWidget *parent)
    :QWidget(parent)
{
    this->setFixedSize(100, 250);

    button1->setFixedSize(100, 50);
    button1->move(0, 0);

    button2->setFixedSize(100, 50);
    button2->move(0, 50);

    button3->setFixedSize(100, 50);
    button3->move(0, 100);

    button4->setFixedSize(100, 50);
    button4->move(0, 150);
    QObject::connect(button4, SIGNAL(clicked()), this, SLOT(slotToSignalK()));

    lineEdit = new QLineEdit(this);
    lineEdit->setFixedSize(100, 50);
    lineEdit->move(0, 200);

    this->show();
}
#include <QString>
void WidgetToChooseOperations::slotToSignalK()
{
    QString str = lineEdit->text();
    int k = str.toInt();
    emit signalK(k);
}
