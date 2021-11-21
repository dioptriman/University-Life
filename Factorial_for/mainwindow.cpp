#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "factorial.h"
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


void MainWindow::on_pushButton_clicked()
{
   num.setValue(ui->spinBox->value());
   sum = num.factorialfor();
   display();
}

void MainWindow::display()
{
    ui->textBrowser->append("Looping with for : " + QString::number(sum));
}



void MainWindow::on_pushButton_2_clicked()
{
    num.setValue(ui->spinBox->value());
    sum = num.factorialdo();
    display2();
}

void MainWindow::display2()
{
    ui->textBrowser->append("Looping with Do-While : " + QString::number(sum));
}

void MainWindow::on_pushButton_3_clicked()
{
    QMessageBox::about(this, "Algorithm", "1. We make a new class for calculating factorial<br>"
                                          "2. Make a function for looping with for loop and do-while loop<br>"
                                          "3. for value greater than zero, value will decrement by 1<br>"
                                          "4. the sum of the value will be multiplied by value<br>"
                                          "5. do sum multiplied by value and decrement it<br>"
                                          "6. while value is greater than zero<br>"
                                          "7. Then we call it on the main window after that we display the value<br>"
                                          "The main differences between for-loop and do-while-loop is for-loop is executed once the condition is checked(condition -> execute) and do-while-loop is executed before the condition is checked(execute -> condition)");
}
