#include "myvectors.h"
#include "qtextedit.h"

MyVectors::MyVectors(vector<Vector *> vec)
{
    this->setFixedSize(400, 40 + (40 * vec.size()));
    clear = new QPushButton("Clear", this);
    clear->setFixedSize(100, 20);
    clear->move(0, 0);

    copy = new QPushButton("Copy", this);
    copy->setFixedSize(100, 20);
    copy->move(100, 0);

    create = new QPushButton("Create", this);
    create->setFixedSize(100, 20);
    create->move(200, 0);

    vecArr = vec;

    for(int i = 0; i < static_cast<int>(vec.size()); i++){
        vecMap[QString::number(i)] = vec[i];
        MyTextEdit* txtEditIDE = new MyTextEdit(i, i);
        txtEditIDE->setFixedSize(100, 20);
        txtEditIDE->move(0, 40 + (40 * i));
        txtEditIDE->setParent(this);

        vecTextIDE.push_back(txtEditIDE);

        MyTextEdit* txtEditVAL = new MyTextEdit(vec[i]->genX, vec[i]->genY, i);
        txtEditVAL->setFixedSize(100, 20);
        txtEditVAL->move(100, 40 + (40 * i));
        txtEditVAL->setParent(this);

        vecTextVAL.push_back(txtEditVAL);

        QPushButton* changeIDE = new QPushButton("Change IDE", this);
        changeIDE->setFixedSize(100, 20);
        changeIDE->move(200, 40 + (40 * i));
        changeIDE->show();

        QObject::connect(changeIDE, SIGNAL(clicked()), this, SLOT(changeIdentificator()));

        QPushButton* changeVAL = new QPushButton("Change VAL", this);
        changeVAL->setFixedSize(100, 20);
        changeVAL->move(300, 40 + (40 * i));
        changeVAL->show();

        QObject::connect(changeVAL, SIGNAL(clicked()), this, SLOT(changeValue()));
    }
    this->show();
}

#include <QDebug>
void MyVectors::changeIdentificator()
{
    auto button = dynamic_cast<QPushButton*>(sender());
    for(auto& elem : vecTextIDE){
        if(elem->pos().y() == button->pos().y()){
            pair<QString, Vector*> para;
            para.second = vecMap[elem->string];
            para.first = elem->toPlainText();
            vecMap.erase(elem->string);
            vecMap[para.first] = para.second;
            elem->string = para.first;
            qDebug()<<elem->string;
            qDebug()<<elem->toPlainText();
            break;
        }
    }
}

void MyVectors::changeValue()
{

}
