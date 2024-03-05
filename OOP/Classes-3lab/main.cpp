#include <QApplication>
#include "myscene.h"
#include "myview.h"
#include "generalwidget.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GeneralWidget* widget = new GeneralWidget;
    MyScene* scene = new MyScene;
    MyView* view = new MyView(scene);
    view->setParent(widget);
    view->show();
    widget->show();
    return a.exec();
}
