#include "mainwindow.h"
#include "ui_mainwindow.h"

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
   //variabel digit
    int d1;
    int d2;
    int d3;
    int d4;
    int d5;

   //variable value
    int original;

    original = ui ->spinBox->value();

    d1 = original % 10;
    d2 = (original / 10) % 10;
    d3 = (original / 100) % 10;
    d4 = (original / 1000) % 10;
    d5 = (original / 10000) % 10;

    ui ->textBrowser->setText("Modulus Arithmetic");
    ui -> textBrowser -> append("digit 1 : " + QString::number(d1));
    ui -> textBrowser -> append("digit 2 : " + QString::number(d2));
    ui -> textBrowser -> append("digit 3 : " + QString::number(d3));
    ui -> textBrowser -> append("digit 4 : " + QString::number(d4));
    ui -> textBrowser -> append("digit 5 : " + QString::number(d5));


}
