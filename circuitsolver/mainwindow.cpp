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

/*
    r1*i1   r2*(i1 - i2)    r3(i1 - i3) =   0

    r4*i2   r5*(i2 - i3)    r2(i2 - i1) =   0

    r3*(i3 - i1)    r5(i3 - i2)     Vs  =   0
*/

