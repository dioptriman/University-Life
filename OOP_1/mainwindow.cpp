#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "resistor.h"
#include "QMessageBox"
#include <QDebug>

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
    r1.setValue(ui->r1->value());
    r2.setValue(ui->r2->value());
    temp = r1.series(r2.getValue());
    temp2 = r1.parallel(r2.getValue());
    display();
}

void MainWindow::display()
{
    ui->textBrowser->append("Series : " + QString::number(temp));
    ui->textBrowser->append("Parallel : " + QString::number(temp2));
}

void MainWindow::display2()
{
    ui->textBrowser->append("Rt : " + QString::number(Rt));
    ui->textBrowser->append("Vload : " + QString::number(Vload));
}

void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::about(this, "Algorithm", "First, We defined how to calculate the resistor,\nNext, we do the calculation for the resistor and vor the voltage\nLast, we show our result.");
}

void MainWindow::on_pushButton_3_clicked()
{
    r1.setValue(ui->r1->value());
    r2.setValue(ui->r2->value());
    r3.setValue(ui->r3->value());
    r4.setValue(ui->r4->value());
    r5.setValue(ui->r5->value());
    r6.setValue(ui->r6->value());
    r7.setValue(ui->r7->value());
    res2 = r2.parallel(r3.getValue());
    res1 = r1.series(r7.getValue());
    res6 = r6.series(res1);
    res5 = r5.getValue();
    res4 = r4.getValue();
    Rt = 1.0/((1.0/res6) + (1.0/res2));
    Vt = ui->vt->value();
    Vload = (res5/(Rt + res4 + res5))*Vt;
    display2();
    //qDebug()<<res2<<Vload;
}
