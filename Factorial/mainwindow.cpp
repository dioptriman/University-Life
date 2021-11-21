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
    int n;
    int sum;
    n = ui->spinBox->value();
    sum = factorial(n);
    ui->textBrowser->append(QString::number(sum));
}

void MainWindow::on_pushButton_2_clicked()
{
    int n;
    float constante;
    n = ui->spinBox->value();
    for(int i=1; i<=n; i++)
    {
        constante = constante + 1.0/factorial(i);
    }
    ui->textBrowser->append(QString::number(float(constante+1)));
}

int MainWindow::factorial(int n)
{
    if(n > 1)
    {
        return n * factorial(n-1);
    }
    else
    {
        return 1;
    }
}
