#ifndef MYVECTORS_H
#define MYVECTORS_H
#include <QWidget>
#include "qdebug.h"
#include "qtextedit.h"
#include "vector.h"
#include <vector>
#include <map>
#include <QPushButton>
using namespace std;

struct MyTextEdit : public QTextEdit{
    MyTextEdit(int x, int i){
        QTextEdit* txtEditVAL = new QTextEdit(this);
        txtEditVAL->setText(QString::number(x));
        txtEditVAL->show();

        string = txtEditVAL->toPlainText();
        qDebug()<<string;
    };

    MyTextEdit(int x, int y, int i){
        QTextEdit* txtEditVAL = new QTextEdit(this);
        txtEditVAL->setText(QString::number(x) + "; " + QString::number(y));
        txtEditVAL->show();

        string = txtEditVAL->toPlainText();
        qDebug()<<string;
    };

    QString string;
};

class MyVectors : public QWidget
{
    Q_OBJECT
public:
    MyVectors(vector<Vector*> vec);

    QPushButton* clear{nullptr};
    QPushButton* copy{nullptr};
    QPushButton* create{nullptr};

    vector<Vector*> vecArr;
    map<QString, Vector*> vecMap;

    vector<MyTextEdit*> vecTextIDE;
    vector<QTextEdit*> vecTextVAL;

public slots:
    void changeIdentificator();
    void changeValue();
};

#endif // MYVECTORS_H
