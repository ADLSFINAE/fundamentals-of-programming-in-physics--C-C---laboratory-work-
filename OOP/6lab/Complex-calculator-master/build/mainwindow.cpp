#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <string>
#include "calculator.h"

std::string expression = "";
bool ans_mode = 1;
std::string my_ans = "";
std::string my_anss = "";

int parentheses_num = 0;         


std::string my_to_string(std::string t);

calculator mycalculator;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton_1,SIGNAL(clicked()),this,SLOT(ClickChangeButton()));
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(ClickChangeButton()));
    connect(ui->pushButton_3,SIGNAL(clicked()),this,SLOT(ClickChangeButton()));
    connect(ui->pushButton_4,SIGNAL(clicked()),this,SLOT(ClickChangeButton()));
    connect(ui->pushButton_5,SIGNAL(clicked()),this,SLOT(ClickChangeButton()));
    connect(ui->pushButton_6,SIGNAL(clicked()),this,SLOT(ClickChangeButton()));
    connect(ui->pushButton_7,SIGNAL(clicked()),this,SLOT(ClickChangeButton()));
    connect(ui->pushButton_8,SIGNAL(clicked()),this,SLOT(ClickChangeButton()));
    connect(ui->pushButton_9,SIGNAL(clicked()),this,SLOT(ClickChangeButton()));
    connect(ui->pushButton_0,SIGNAL(clicked()),this,SLOT(ClickChangeButton()));

    connect(ui->pushButton_angle,SIGNAL(clicked()),this,SLOT(ClickChangeButton()));
    connect(ui->pushButton_j,SIGNAL(clicked()),this,SLOT(ClickChangeButton()));
    connect(ui->pushButton_add,SIGNAL(clicked()),this,SLOT(ClickChangeButton()));
    connect(ui->pushButton_sub,SIGNAL(clicked()),this,SLOT(ClickChangeButton()));
    connect(ui->pushButton_multi,SIGNAL(clicked()),this,SLOT(ClickChangeButton()));
    connect(ui->pushButton_div,SIGNAL(clicked()),this,SLOT(ClickChangeButton()));

    connect(ui->pushButton_change,SIGNAL(clicked()),this,SLOT(ClickChangeAnsButton()));

    connect(ui->pushButton_ac,SIGNAL(clicked()),this,SLOT(ClickACButton()));
    connect(ui->pushButton_delete,SIGNAL(clicked()),this,SLOT(ClickDeleteButton()));
    connect(ui->pushButton_output,SIGNAL(clicked()),this,SLOT(ClickGetAnsButton()));

    connect(ui->pushButton_dot,SIGNAL(clicked()),this,SLOT(ClickChangeButton()));
    connect(ui->pushButton_e,SIGNAL(clicked()),this,SLOT(ClickChangeButton()));
    connect(ui->pushButton_left,SIGNAL(clicked()),this,SLOT(ClickChangeButton()));
    connect(ui->pushButton_pai,SIGNAL(clicked()),this,SLOT(ClickChangeButton()));
    connect(ui->pushButton_right,SIGNAL(clicked()),this,SLOT(ClickChangeButton()));


    //connect(ui->pushButton_about,SIGNAL(clicked()),this,SLOT(ClickAboutButton()));

    setWindowFlags(windowFlags()& ~Qt::WindowMaximizeButtonHint);
    setFixedSize(this->width(), this->height());

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::ClickAboutButton()
{
    QString dlgTitle = "about";
    QString strInfo = "1.There are two ways to express complex numbers.\n 1.1 Cartesian coordinates: a+jb (a and b are real number, j is imaginary number symbol)\n 1.2 Polar coordinates: a<b (a is amplitude, b is phase(unit: °) )\n 2.This program was developed by Wang Congbiao.";
    QMessageBox::about(this, dlgTitle, strInfo);
}

void MainWindow::ClickChangeButton()
{
    QObject* obj = sender();
    QPushButton* button = dynamic_cast<QPushButton*>(obj);

    std::string last_op = ""; 

    std::string t = my_to_string(button->objectName().toStdString());

    if(expression == "")
    {
        if(t[0] == '+' || t[0] == '*' || t[0] == '/' || t[0] == '.' || t[0] == ')' || t[0] == '<')
        {
            return;
        }
    }
    else
    {
        last_op = expression[expression.length() - 1];
    }

    if(last_op[0] >= '0' && last_op[0] <= '9')
    {
        if(t[0] == '(' || t[0] == 'j' || t == "2.718281828459" || t == "3.1415926535898")
        {
            return;
        }
    }
    else if(last_op[0] == '.')
    {
        if(t[0] < '0' || t[0] > '9')
        {
            return;
        }
    }
    else if(last_op[0] == 'j')
    {
        if(t[0] == '-')
        {
            
        }
        else if(t[0] < '0' || t[0] > '9')
        {
            return;
        }

    }
    else if(last_op[0] == '(')
    {
        if(t[0] == '<' || t[0] == '+' || t[0] == '*' || t[0] == '/')
        {
            return;
        }
    }
    else if(last_op[0] == ')')
    {
        if(t[0] == '+' || t[0] == '-' || t[0] == '*' || t[0] == '/' || t[0] == ')')
        {
            
        }
        else
        {
            return;
        }
    }
    else if(last_op[0] == '<')
    {
        if(t[0] >= '0' && t[0] <= '9' || t[0] == '-')
        {
            
        }
        else
        {
            return;
        }
    }
    else if(last_op[0] == '+' || last_op[0] == '*' || last_op[0] == '/')
    {
        if(t[0] == '+' || t[0] == '*' || t[0] == '/' || t[0] == '.' || t[0] == ')' || t[0] == '<')
        {
            return;
        }
    }
    else if(last_op[0] == '-')
    {
        if(t[0] == '+' || t[0] == '-' || t[0] == '*' || t[0] == '/' || t[0] == '.' || t[0] == ')' || t[0] == '<')
        {
            return;
        }
    }

    if(t[0] == ')')
    {
        if(parentheses_num <= 0) t = "";
        else    parentheses_num--;
    }
    else if(t[0] == '(')
    {
        if(last_op == "j" || last_op == "<")
        {
            t = "";
        }
        else
        {
             parentheses_num++;
        }

    }

    if(t[0] == '.')
    {
        int i;
        for(i = expression.length() - 1; i > 0 && expression[i] >= '0' && expression[i] <= '9'; i--);
        if(expression[i] == '.')
        {
            return;
        }
    }

    expression = expression + t;
    ui->textBrowser_input->setText(QString::fromStdString(expression));
}

void MainWindow::ClickChangeAnsButton()
{
    ans_mode = !ans_mode;

    if(ans_mode)
    {
        ui->label_output->setText(QString::fromStdString(my_ans));
    }
    else
    {
        ui->label_output->setText(QString::fromStdString(my_anss));
    }
}

void MainWindow::ClickDeleteButton()
{
    expression = expression.substr(0, expression.length()-1);
    ui->textBrowser_input->setText(QString::fromStdString(expression));
}

void MainWindow::ClickACButton()
{
    parentheses_num = 0;

    expression = "";
    ui->textBrowser_input->setText(QString::fromStdString(expression));
}

void MainWindow::ClickGetAnsButton()
{
    if(parentheses_num != 0)
    {
        ui->label_output->setText(QString::fromStdString("Unclosed parentheses "));
        return;
    }

    mycalculator.clear();
    mycalculator.set(expression);
    mycalculator.calculate();
    my_ans = mycalculator.ans_string(0);
    my_anss = mycalculator.ans_string(1);

    if(my_ans == "-nan(ind)+j-nan(ind)")
    {
        my_ans = "Grammatical errors ";
        my_anss = "Grammatical errors ";
    }

    if(ans_mode)
    {
        ui->label_output->setText(QString::fromStdString(my_ans));
    }
    else
    {
        ui->label_output->setText(QString::fromStdString(my_anss));
    }

    ui->textBrowser_history->append(QString::fromStdString(expression));
    ui->textBrowser_history->append( "=  " + QString::fromStdString(my_ans));
}

std::string my_to_string(std::string t)
{
    std::string tans = "";
    if(t == "pushButton_add")    tans = '+';
    else if(t == "pushButton_sub")   tans = '-';
    else if(t == "pushButton_multi")   tans = '*';
    else if(t == "pushButton_div")   tans = '/';
    else if(t == "pushButton_dot")   tans = '.';
    else if(t == "pushButton_e")   tans = "2.718281828459";
    else if(t == "pushButton_left")   tans = '(';
    else if(t == "pushButton_pai")   tans = "3.1415926535898";
    else if(t == "pushButton_right")   tans = ')';
    else if(t == "pushButton_angle")    tans = "<";
    else    tans = t[11];
    return tans;
}


