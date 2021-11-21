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


void MainWindow::on_pushButton_clicked()
{
    //int calc= 0;
    double p = 0;
    int a;
    int pi_counter=0;
    int limit = ui->spinBox->value();
    double pi_real = 3.14159;
    //bool found = false;
    for(a = 1; a<=limit; a++)
        {
            double term = 4.0/(a*2-1);
            if(a%2)
            {
                p += term;
            }
            else
            {
                p-= term;
            }

            ui->textBrowser->append(QString::number(p)+'\t'+QString::number(a));
            if (p > 3.141 && p <= pi_real)
            {
               pi_counter ++;
               break;
            }

            if(pi_counter == 1)
            {
                ui->textBrowser->append(QString::number(a));
            }
        }
    if (pi_counter == 1)
    {
        ui->textBrowser->append("Number of pi those satisfying the requirement :" + QString::number(pi_counter) + '\n' + "The result is : "+QString::number(a));
    }



    //ui->textBrowser->append(QString::number(p));
}



void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::about(this, "Algorithm", "1. Declare the value that needed<br>"
                                          "2. Loops the term"
                                          "3. If the calculation = 0 we are using pi = pi + 4/the terms value<br>"
                                          "4. Else use the pi = pi - 4/the terms value <br>"
                                          "5. Passes the result<br>"
                                          "6. this code using monte carlo equation");
}
