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
private:
    QLineEdit* labelXstart{nullptr};
    QLineEdit* labelYstart{nullptr};
    QLineEdit* labelZstart{nullptr};

    QLineEdit* labelXend{nullptr};
    QLineEdit* labelYend{nullptr};
    QLineEdit* labelZend{nullptr};

    QLineEdit* alternativeMethod{nullptr};

    QLineEdit* stepK;

    QString string1;
    QString string2;
    QString string3;
signals:
    void sendInfo1(QString str);
    void sendInfo2(QString str);
    void sendInfo3(QString str);
};

#endif // WIDGETTOCREATEVECTOR_H
