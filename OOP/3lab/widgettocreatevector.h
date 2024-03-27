#ifndef WIDGETTOCREATEVECTOR_H
#define WIDGETTOCREATEVECTOR_H
#include <QWidget>
#include <QLineEdit>
#include <QLabel>
#include <QPushButton>
class WidgetToCreateVector : public QWidget
{
    Q_OBJECT
public:
    WidgetToCreateVector(QWidget* parent = 0);

    QPushButton* buttonFor1Method;
    QPushButton* buttonFor2Method;
    QPushButton* buttonFor3Method;

    QLineEdit* labelXend{nullptr};
    QLineEdit* labelYend{nullptr};
    QLineEdit* labelZend{nullptr};

    QLineEdit* alternativeMethod{nullptr};

    QLineEdit* stepK;

private:
    QLineEdit* labelXstart{nullptr};
    QLineEdit* labelYstart{nullptr};
    QLineEdit* labelZstart{nullptr};
signals:
    void sendInfo1(QString str);
    void sendInfo2(QString str);
    void sendInfo3(QString str);
public slots:
    void getInfo1();
    void getInfo2();
    void getInfo3();
};

#endif // WIDGETTOCREATEVECTOR_H
