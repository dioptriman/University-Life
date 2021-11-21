#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cmath>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::about(this, "Algorithm","1. first input an integer\n"
                                         "2. the inputted integer then processed using the factorial equation\n"
                                         "3. display the result in text browser\n"
                                         "4. take the same integer\n"
                                         "5. loop the integer to make it factorial\n"
                                         "6. use loop to make factorial of integer until the least value to make it as a e constant\n"
                                         "7. Display the value");
}
void MainWindow::on_pushButton_clicked()
{
    number = ui ->spinBox->value();
    counter = number;
    factorial2=process2(number);
    process();
    display();
}

int MainWindow::process2(int newValue)
{
    int temp=1;
    int tempfact = newValue;
    while(tempfact > 0)
    {
        temp *= tempfact;
        tempfact --;
    }
    return temp;
}

int MainWindow::process()
{
    while(counter > 1)
    {
        variable = number;
        factorial = 1;
        while(number > 1)
        {
            factorial *= number;
            number--;
        }
        constant = (1/factorial) + constant;
        counter --;
        variable--;
        number = variable;
    }
    euler = constant + 1 +(1/1.f);
    return euler;
}
void MainWindow::display()
{
    ui->textBrowser->append("Factorial Result :" + QString::number(factorial2));
    ui->textBrowser->append("Euler Result :" + QString::number(euler));
}
