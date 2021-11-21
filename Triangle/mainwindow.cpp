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


void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::about(this,"Algorithm","1. please enter 3 numbers (non-zero double number)\n"
                                        "2. find the biggest side (assign as side 3) \n"
                                        "3. we compare if side 1 + side 2 > side 3, this is a triangle\n"
                                        "4. print the result.");

}

void MainWindow::on_pushButton_clicked()
{
    x =ui->xx->value();
    y =ui->yy->value();
    z =ui->zz->value();


   side3 = max(x,y,z);
   process();
   display();

}

double MainWindow::max(double x, double y, double z)
{
    double maxx;
    if (x>=y)
    {
            maxx = x;
            side1 = y;
            side2 = z;

    }
    else
    {
            maxx = y;
            side1 = x;
            side2 = z;

    }
    if (maxx<z)
    {
            maxx = z;
            side1 = x;
            side2 = y;
    }
    return maxx;


}

void MainWindow::process()
{
    triangleFlag = false;
      if (side1 + side2 > side3)
          triangleFlag = true;
      else
          triangleFlag = false;
}
void MainWindow::display()
{
    ui->textBrowser->setText("Is this a triangle?");
    if (triangleFlag == true)
        ui->textBrowser->append("yes, this is a triangle.");
    else
        ui->textBrowser->append("no, this is not a triangle.");

}
