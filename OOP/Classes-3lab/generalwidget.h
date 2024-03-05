#ifndef GENERALWIDGET_H
#define GENERALWIDGET_H
#include <QWidget>
#include <QPushButton>
#include "widgettocreatevector.h"

class GeneralWidget : public QWidget
{
    Q_OBJECT
public:
    GeneralWidget(QWidget* parent = 0);
private:
    QPushButton* createVector{nullptr};
    QPushButton* choseAndOperation{nullptr};
    QString string;
public slots:
    void createWidget();
    void getString(QString string);
};

#endif // GENERALWIDGET_H
