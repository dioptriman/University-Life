#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"

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
    //Variable
    int sum;
    float avg;
    int product;
    int smallest;
    int largest;
    int int1, int2, int3;

    int1 = ui->spinBox->value();
    int2 = ui->spinBox_2->value();
    int3 = ui->spinBox_3->value();


    //Algorithm

    //sum
    sum = int1 + int2 + int3;

    // avg
    avg = sum/3;

    //product
    product = int1 * int2 * int3;

    //smallest
    if(int1 < int2 && int1 < int3)
    {
        smallest = int1;
    }

    else if(int2 < int1 && int2 < int3)
    {
        smallest = int2;
    }

    else if(int1 < int2 && int1 == int3)
    {
        smallest = int1;
    }

    else if(int2 < int3 && int1 == int2)
    {
        smallest = int1;
    }

    else if (int2 == int3 && int2 < int1)
    {
        smallest = int2;
    }

    else
    {
        smallest = int3;
    }


    //Largest
    //smallest
    if(int1 > int2 && int1 > int3)
    {
        largest = int1;
    }

    else if(int2 > int1 && int2 > int3)
    {
        largest = int2;
    }

    else if(int1 > int2 && int1 == int3)
    {
        largest = int1;
    }

    else if(int2 > int3 && int1 == int2)
    {
        largest = int1;
    }

    else if (int2 == int3 && int2 > int1)
    {
        largest = int2;
    }

    else
    {
        largest = int3;
    }


    //Displaying
     ui ->textBrowser->setText("The Result : ");
     ui -> textBrowser -> append("Sum : " + QString::number(sum));
     ui -> textBrowser -> append("Average : " + QString::number(avg));
     ui -> textBrowser -> append("Product : " + QString::number(product));
     ui -> textBrowser -> append("Smallest : " + QString::number(smallest));
     ui -> textBrowser -> append("Largest : " + QString::number(largest));
}

void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::about(this, "Algorithm", "Input : 3 differents number in the spinbox \nOutput : Sum of it, average of it, product of it, smallest, and the largest number\nAlgorithm : \n Sum = digit 1 + digit 2 + digit 3 \n Average = Sum of it/3 \n Product = digit 1 * digit 2 * digit 3 \n Smallest & Largest = Comparing the 3 numbers");
}
