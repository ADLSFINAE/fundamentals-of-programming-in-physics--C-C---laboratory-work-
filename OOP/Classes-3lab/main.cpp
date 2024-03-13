#include <QApplication>
#include "generalwidget.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GeneralWidget* widget = new GeneralWidget;
    widget->show();
    return a.exec();
}
