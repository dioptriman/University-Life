#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "QtMath"

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
    QMessageBox::about(this, "Algorithm", "BMI Calculator");
}

void MainWindow::on_pushButton_clicked()
{
    float Height;
    float Weight;

    Height = ui->Height->value();
    Weight = ui->Weight->value();

    float BMI = Weight/pow(Height, 2);

    ui->textBrowser->setText("Result");

    if(BMI < 18.5)
    {
        ui->textBrowser->append("Underweight");
    }

    else if (BMI >= 18.5 && BMI <= 24.9)
    {
        ui->textBrowser->append("Normal");
    }

    else if (BMI >= 25 && BMI <= 29.9)
    {
        ui->textBrowser->append("Overweight");
    }

    else
    {
        ui->textBrowser->append("Obese");
    }

}
