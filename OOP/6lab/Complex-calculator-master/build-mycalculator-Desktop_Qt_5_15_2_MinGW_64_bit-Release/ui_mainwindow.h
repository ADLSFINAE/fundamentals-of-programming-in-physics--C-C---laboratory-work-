/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label_history;
    QTextBrowser *textBrowser_history;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_change;
    QPushButton *pushButton_left;
    QPushButton *pushButton_right;
    QPushButton *pushButton_e;
    QPushButton *pushButton_pai;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_1;
    QPushButton *pushButton_4;
    QPushButton *pushButton_7;
    QPushButton *pushButton_j;
    QPushButton *pushButton_angle;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_8;
    QPushButton *pushButton_0;
    QPushButton *pushButton_ac;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_6;
    QPushButton *pushButton_9;
    QPushButton *pushButton_dot;
    QPushButton *pushButton_delete;
    QVBoxLayout *verticalLayout_5;
    QPushButton *pushButton_add;
    QPushButton *pushButton_sub;
    QPushButton *pushButton_multi;
    QPushButton *pushButton_div;
    QPushButton *pushButton_output;
    QLabel *label_output;
    QTextBrowser *textBrowser_input;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1031, 745);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label_history = new QLabel(centralWidget);
        label_history->setObjectName(QString::fromUtf8("label_history"));
        label_history->setGeometry(QRect(720, 10, 141, 31));
        label_history->setTextFormat(Qt::PlainText);
        label_history->setScaledContents(false);
        label_history->setWordWrap(false);
        textBrowser_history = new QTextBrowser(centralWidget);
        textBrowser_history->setObjectName(QString::fromUtf8("textBrowser_history"));
        textBrowser_history->setGeometry(QRect(720, 50, 301, 661));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 140, 705, 577));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton_change = new QPushButton(horizontalLayoutWidget);
        pushButton_change->setObjectName(QString::fromUtf8("pushButton_change"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/change.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_change->setIcon(icon);
        pushButton_change->setIconSize(QSize(100, 100));

        verticalLayout->addWidget(pushButton_change);

        pushButton_left = new QPushButton(horizontalLayoutWidget);
        pushButton_left->setObjectName(QString::fromUtf8("pushButton_left"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/(.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_left->setIcon(icon1);
        pushButton_left->setIconSize(QSize(100, 100));

        verticalLayout->addWidget(pushButton_left);

        pushButton_right = new QPushButton(horizontalLayoutWidget);
        pushButton_right->setObjectName(QString::fromUtf8("pushButton_right"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/).png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_right->setIcon(icon2);
        pushButton_right->setIconSize(QSize(100, 100));

        verticalLayout->addWidget(pushButton_right);

        pushButton_e = new QPushButton(horizontalLayoutWidget);
        pushButton_e->setObjectName(QString::fromUtf8("pushButton_e"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/e.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_e->setIcon(icon3);
        pushButton_e->setIconSize(QSize(100, 100));

        verticalLayout->addWidget(pushButton_e);

        pushButton_pai = new QPushButton(horizontalLayoutWidget);
        pushButton_pai->setObjectName(QString::fromUtf8("pushButton_pai"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/pai.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_pai->setIcon(icon4);
        pushButton_pai->setIconSize(QSize(100, 100));

        verticalLayout->addWidget(pushButton_pai);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pushButton_1 = new QPushButton(horizontalLayoutWidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/1.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_1->setIcon(icon5);
        pushButton_1->setIconSize(QSize(100, 100));
        pushButton_1->setAutoRepeatInterval(10);

        verticalLayout_2->addWidget(pushButton_1);

        pushButton_4 = new QPushButton(horizontalLayoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/4.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon6);
        pushButton_4->setIconSize(QSize(100, 100));

        verticalLayout_2->addWidget(pushButton_4);

        pushButton_7 = new QPushButton(horizontalLayoutWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/7.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon7);
        pushButton_7->setIconSize(QSize(100, 100));

        verticalLayout_2->addWidget(pushButton_7);

        pushButton_j = new QPushButton(horizontalLayoutWidget);
        pushButton_j->setObjectName(QString::fromUtf8("pushButton_j"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/j.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_j->setIcon(icon8);
        pushButton_j->setIconSize(QSize(100, 100));

        verticalLayout_2->addWidget(pushButton_j);

        pushButton_angle = new QPushButton(horizontalLayoutWidget);
        pushButton_angle->setObjectName(QString::fromUtf8("pushButton_angle"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icons/jiao.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_angle->setIcon(icon9);
        pushButton_angle->setIconSize(QSize(100, 100));

        verticalLayout_2->addWidget(pushButton_angle);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        pushButton_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icons/2.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon10);
        pushButton_2->setIconSize(QSize(100, 100));

        verticalLayout_3->addWidget(pushButton_2);

        pushButton_5 = new QPushButton(horizontalLayoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/icons/5.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon11);
        pushButton_5->setIconSize(QSize(100, 100));

        verticalLayout_3->addWidget(pushButton_5);

        pushButton_8 = new QPushButton(horizontalLayoutWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/icons/8.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_8->setIcon(icon12);
        pushButton_8->setIconSize(QSize(100, 100));

        verticalLayout_3->addWidget(pushButton_8);

        pushButton_0 = new QPushButton(horizontalLayoutWidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/icons/0.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_0->setIcon(icon13);
        pushButton_0->setIconSize(QSize(100, 100));

        verticalLayout_3->addWidget(pushButton_0);

        pushButton_ac = new QPushButton(horizontalLayoutWidget);
        pushButton_ac->setObjectName(QString::fromUtf8("pushButton_ac"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/icons/ac.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_ac->setIcon(icon14);
        pushButton_ac->setIconSize(QSize(100, 100));

        verticalLayout_3->addWidget(pushButton_ac);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        pushButton_3 = new QPushButton(horizontalLayoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/icons/3.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon15);
        pushButton_3->setIconSize(QSize(100, 100));

        verticalLayout_4->addWidget(pushButton_3);

        pushButton_6 = new QPushButton(horizontalLayoutWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/icons/6.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon16);
        pushButton_6->setIconSize(QSize(100, 100));

        verticalLayout_4->addWidget(pushButton_6);

        pushButton_9 = new QPushButton(horizontalLayoutWidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/icons/9.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_9->setIcon(icon17);
        pushButton_9->setIconSize(QSize(100, 100));

        verticalLayout_4->addWidget(pushButton_9);

        pushButton_dot = new QPushButton(horizontalLayoutWidget);
        pushButton_dot->setObjectName(QString::fromUtf8("pushButton_dot"));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/icons/..png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_dot->setIcon(icon18);
        pushButton_dot->setIconSize(QSize(100, 100));

        verticalLayout_4->addWidget(pushButton_dot);

        pushButton_delete = new QPushButton(horizontalLayoutWidget);
        pushButton_delete->setObjectName(QString::fromUtf8("pushButton_delete"));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/icons/\345\210\240\351\231\244.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_delete->setIcon(icon19);
        pushButton_delete->setIconSize(QSize(100, 100));

        verticalLayout_4->addWidget(pushButton_delete);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        pushButton_add = new QPushButton(horizontalLayoutWidget);
        pushButton_add->setObjectName(QString::fromUtf8("pushButton_add"));
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/icons/jia.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_add->setIcon(icon20);
        pushButton_add->setIconSize(QSize(100, 100));

        verticalLayout_5->addWidget(pushButton_add);

        pushButton_sub = new QPushButton(horizontalLayoutWidget);
        pushButton_sub->setObjectName(QString::fromUtf8("pushButton_sub"));
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/icons/jian.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_sub->setIcon(icon21);
        pushButton_sub->setIconSize(QSize(100, 100));

        verticalLayout_5->addWidget(pushButton_sub);

        pushButton_multi = new QPushButton(horizontalLayoutWidget);
        pushButton_multi->setObjectName(QString::fromUtf8("pushButton_multi"));
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/icons/cheng.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_multi->setIcon(icon22);
        pushButton_multi->setIconSize(QSize(100, 100));

        verticalLayout_5->addWidget(pushButton_multi);

        pushButton_div = new QPushButton(horizontalLayoutWidget);
        pushButton_div->setObjectName(QString::fromUtf8("pushButton_div"));
        QIcon icon23;
        icon23.addFile(QString::fromUtf8(":/icons/chu.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_div->setIcon(icon23);
        pushButton_div->setIconSize(QSize(100, 100));

        verticalLayout_5->addWidget(pushButton_div);

        pushButton_output = new QPushButton(horizontalLayoutWidget);
        pushButton_output->setObjectName(QString::fromUtf8("pushButton_output"));
        QIcon icon24;
        icon24.addFile(QString::fromUtf8(":/icons/=.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_output->setIcon(icon24);
        pushButton_output->setIconSize(QSize(100, 100));

        verticalLayout_5->addWidget(pushButton_output);


        horizontalLayout->addLayout(verticalLayout_5);

        label_output = new QLabel(centralWidget);
        label_output->setObjectName(QString::fromUtf8("label_output"));
        label_output->setGeometry(QRect(390, 100, 311, 31));
        textBrowser_input = new QTextBrowser(centralWidget);
        textBrowser_input->setObjectName(QString::fromUtf8("textBrowser_input"));
        textBrowser_input->setGeometry(QRect(20, 10, 681, 91));
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_history->setText(QCoreApplication::translate("MainWindow", "history", nullptr));
        pushButton_change->setText(QString());
        pushButton_left->setText(QString());
        pushButton_right->setText(QString());
        pushButton_e->setText(QString());
        pushButton_pai->setText(QString());
        pushButton_4->setText(QString());
        pushButton_7->setText(QString());
        pushButton_j->setText(QString());
        pushButton_angle->setText(QString());
        pushButton_2->setText(QString());
        pushButton_5->setText(QString());
        pushButton_8->setText(QString());
        pushButton_0->setText(QString());
        pushButton_ac->setText(QString());
        pushButton_3->setText(QString());
        pushButton_6->setText(QString());
        pushButton_9->setText(QString());
        pushButton_dot->setText(QString());
        pushButton_delete->setText(QString());
        pushButton_add->setText(QString());
        pushButton_sub->setText(QString());
        pushButton_multi->setText(QString());
        pushButton_div->setText(QString());
        pushButton_output->setText(QString());
        label_output->setText(QCoreApplication::translate("MainWindow", "Here's the answer.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
