#include "widgettochoosevectors.h"


#include <QDebug>
WidgetToChooseVectors::WidgetToChooseVectors(vector<Vector*> vec)
{
    this->setFixedSize(500, 50 * vec.size());
    for(int i = 0; i < static_cast<int>(vec.size()); i++){
        QString str = QString::number(vec[i]->x1) + " " + QString::number(vec[i]->x2) + " " + QString::number(vec[i]->x3);
        MyButton* button = new MyButton(vec[i], str, 0, 50 * i, this);

        QObject::connect(button, SIGNAL(addToQue()), this, SLOT(realerNrealer()));
        QObject::connect(this, SIGNAL(changeSignal(MyButton*)), this, SLOT(checker(MyButton*)));
        buttons.push_back(button);
    }

    this->show();
}

void WidgetToChooseVectors::realerNrealer()
{

    auto some = dynamic_cast<MyButton*>(sender());
    if(que.first == nullptr){
        que.first = some;
    }

    else if(que.second == nullptr){
        que.second = some;
    }

    else if(some == que.first || some == que.second){
        some->vec->wasChoosen = false;
        if(some == que.first){
            que.first->setStyleSheet("background-color: white");
            que.first = nullptr;
        }

        if(some == que.second){
            que.second->setStyleSheet("background-color: white");
            que.second = nullptr;
        }
    }

    else{
        for(auto& elem : buttons){
            elem->setStyleSheet("background-color: white");
            elem->vec->wasChoosen = false;
        }
        que.second = que.first;
        que.first = some;
        que.second->setStyleSheet("background-color: blue");
        que.first->setStyleSheet("background-color: blue");
    }

    emit changeSignal(some);
}

void WidgetToChooseVectors::checker(MyButton* btn)
{
    btn->vec->wasChoosen = true;
}

