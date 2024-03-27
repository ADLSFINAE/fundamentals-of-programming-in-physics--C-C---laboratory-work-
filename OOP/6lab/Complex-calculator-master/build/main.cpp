#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    QApplication::addLibraryPath("./plugins");

    QFont font  = a.font();
    font.setPointSize(18);
    a.setFont(font);


    return a.exec();
}
