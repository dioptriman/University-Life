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
    //array in row 1
    a[1][1] = ui->spinBox->value()*1.0;
    a[1][2] = ui->spinBox_4->value()*1.0;
    a[1][3] = ui->spinBox_7->value()*1.0;
    a[1][4] = ui->spinBox_10->value()*1.0;

    //array in row 2
    a[2][1] = ui->spinBox_2->value()*1.0;
    a[2][2] = ui->spinBox_5->value()*1.0;
    a[2][3] = ui->spinBox_8->value()*1.0;
    a[2][4] = ui->spinBox_11->value()*1.0;

    //array in row 3
    a[3][1] = ui->spinBox_3->value()*1.0;
    a[3][2] = ui->spinBox_6->value()*1.0;
    a[3][3] = ui->spinBox_9->value()*1.0;
    a[3][4] = ui->spinBox_3->value()*1.0;

    Calculate();


}

float MainWindow::Calculate(){
    for(i=1; i<=n; i++) {
         if((a[i][i]*1.0) == 0.0){
             ui->textBrowser->setText("Math Error");
         }

         for(j=1;j<=n;j++){
             if(i != j){
                 b = (a[j][i]*1.0)/(a[i][i]*1.0);
                 for(k = 1; k<=n+1;k++){
                     a[j][k] = (a[j][k]*1.0) - b * (a[j][k]*1.0);
                 }
             }
         }
      }

    for(i=1; i<=n; i++){
        x[i] = a[i][n+1]/a[i][i];
        ui->textBrowser->append(QString::number(i)+"="+QString::number(x[i]));
    }

    return 0;
}
