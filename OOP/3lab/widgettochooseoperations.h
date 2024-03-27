#ifndef WIDGETTOCHOOSEOPERATIONS_H
#define WIDGETTOCHOOSEOPERATIONS_H
#include "qlineedit.h"
#include <QWidget>
#include <QPushButton>

class WidgetToChooseOperations : public QWidget
{
    Q_OBJECT
public:
    WidgetToChooseOperations(QWidget* parent = 0);
    QPushButton* button1 = new QPushButton("+", this);
    QPushButton* button2 = new QPushButton("-", this);
    QPushButton* button3 = new QPushButton("*", this);
    QPushButton* button4 = new QPushButton("k", this);
    QLineEdit* lineEdit;
public slots:
    void slotToSignalK();
signals:
    void signalK(int k);
};

#endif // WIDGETTOCHOOSEOPERATIONS_H
