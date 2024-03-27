#ifndef GENERALWIDGET_H
#define GENERALWIDGET_H
#include <QWidget>
#include <QPushButton>
#include "myview.h"
#include "myscene.h"
#include "widgettocreatevector.h"
#include "widgettochooseoperations.h"
#include "widgettochoosevectors.h"
#include "myvectors.h"

class GeneralWidget : public QWidget
{
    Q_OBJECT
public:
    GeneralWidget(QWidget* parent = 0);
    MyScene* scene = new MyScene;
    MyView* view = new MyView(scene);

private:
    QPushButton* createVector{nullptr};
    QPushButton* choseAndOperation{nullptr};
    QPushButton* tableOfVectors{nullptr};
    QPushButton* createVectorArr{nullptr};
    QString string;
public slots:
    void createWidget();
    void createWidget2();
    void createWidget3();
    void createWidget4();
    void getString(QString string);
};

#endif // GENERALWIDGET_H
