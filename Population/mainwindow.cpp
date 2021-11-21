#include "mainwindow.h"
#include "ui_mainwindow.h"
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
    population= ui->doubleSpinBox->value();
    growth_percentage =ui->doubleSpinBox_2->value();
    population=process(population , growth_percentage);
}

int MainWindow::process(long int population, float growth)
{
    int growthThisYear;
    float result=population;
    int year = 1;
    ui->textBrowser->setText("year\t  population\t  growth");
    for(int i=year; i <= 75; i++)
    {
     growthThisYear= result*(growth/100.0);
     result=result+population*(growth/100.0);
     display(i+2021, result, growthThisYear);
    }
    return result;


}

void MainWindow::display(int year,long int population, float growth)
{
    ui->textBrowser->append(QString::number(year) + " \t "+ QString::number (population)+ "\t"+ QString::number(growth));


}


void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::about(this, "title", "1. Declare the value and set the input and the output<br>"
                                      "2. Use the loop and calculate the growth<br>"
                                      "3. Display the value");
}
