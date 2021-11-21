#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QComboBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Add items in all comboboxes
        ui->comboBox_1->addItem(createIcon("#000000"),"Black");
        ui->comboBox_1->addItem(createIcon("#844200"),"Brown");
        ui->comboBox_1->addItem(createIcon("#FF0000"),"Red");
        ui->comboBox_1->addItem(createIcon("#FF7F00"),"Orange");
        ui->comboBox_1->addItem(createIcon("#FFFF00"),"Yellow");
        ui->comboBox_1->addItem(createIcon("#00FF00"),"Green");
        ui->comboBox_1->addItem(createIcon("#0000FF"),"Blue");
        ui->comboBox_1->addItem(createIcon("#AA55FF"), "Violet");
        ui->comboBox_1->addItem(createIcon("#808080"), "Grey");
        ui->comboBox_1->addItem(createIcon("#FFFFFF"), "White");


        // Add items in all comboboxes
        ui->comboBox_2->addItem(createIcon("#000000"),"Black"); // index = 0
        ui->comboBox_2->addItem(createIcon("#844200"),"Brown");
        ui->comboBox_2->addItem(createIcon("#FF0000"),"Red");
        ui->comboBox_2->addItem(createIcon("#FF7F00"),"Orange");
        ui->comboBox_2->addItem(createIcon("#FFFF00"),"Yellow");
        ui->comboBox_2->addItem(createIcon("#00FF00"),"Green");
        ui->comboBox_2->addItem(createIcon("#0000FF"),"Blue");
        ui->comboBox_2->addItem(createIcon("#AA55FF"), "Violet");
        ui->comboBox_2->addItem(createIcon("#808080"), "Grey");
        ui->comboBox_2->addItem(createIcon("#FFFFFF"), "White");

        // Add items in all comboboxes
        ui->comboBox_3->addItem(createIcon("#000000"),"Black");
        ui->comboBox_3->addItem(createIcon("#844200"),"Brown");
        ui->comboBox_3->addItem(createIcon("#FF0000"),"Red");
        ui->comboBox_3->addItem(createIcon("#FF7F00"),"Orange");
        ui->comboBox_3->addItem(createIcon("#FFFF00"),"Yellow");
        ui->comboBox_3->addItem(createIcon("#00FF00"),"Green");
        ui->comboBox_3->addItem(createIcon("#0000FF"),"Blue");
        ui->comboBox_3->addItem(createIcon("#AA55FF"), "Violet");
        ui->comboBox_3->addItem(createIcon("#808080"), "Grey");
        ui->comboBox_3->addItem(createIcon("#FFFFFF"), "White");
        ui->comboBox_3->addItem(createIcon("#DCDA00"), "Gold");
        ui->comboBox_3->addItem(createIcon("#DBDBDB"), "Silver");



        ui->comboBox_4->addItem(createIcon("#844200"),"Brown");
        ui->comboBox_4->addItem(createIcon("#FF0000"),"Red");
        ui->comboBox_4->addItem(createIcon("#00FF00"),"Green");
        ui->comboBox_4->addItem(createIcon("#0000FF"),"Blue");
        ui->comboBox_4->addItem(createIcon("#AA55FF"), "Violet");
        ui->comboBox_4->addItem(createIcon("#808080"), "Grey");
        ui->comboBox_4->addItem(createIcon("#DCDA00"), "Gold");
        ui->comboBox_4->addItem(createIcon("#DBDBDB"), "Silver");
        ui->comboBox_4->addItem("No Color");

        QObject::connect(ui->comboBox_1,SIGNAL(currentIndexChanged(int)),this,SLOT(process()));
        QObject::connect(ui->comboBox_2,SIGNAL(currentIndexChanged(int)),this,SLOT(process()));
        QObject::connect(ui->comboBox_3,SIGNAL(currentIndexChanged(int)),this,SLOT(process()));
        QObject::connect(ui->comboBox_4,SIGNAL(currentIndexChanged(int)),this,SLOT(process()));



}


//=========================================================================
// Used for drawing color in ComboBoxes
QIcon MainWindow::createIcon(QString colorName)
{
    QPixmap iconPixmap(32,32);
    iconPixmap.fill(QColor(colorName));
    QIcon itemIcon(iconPixmap);
    return itemIcon;
}

void MainWindow::process()
{
    QString color1;
    QString color2;
    float resVal;
    color1.setNum(ui->comboBox_1->currentIndex());
    color2.setNum(ui->comboBox_2->currentIndex());
    color1 += color2;
    resVal = color1.toInt();
    color2 = "";
    switch (ui->comboBox_3->currentIndex()) {
     case 0:
        resVal *= pow(10, ui->comboBox_3->currentIndex());
        break;
    case 1:
        resVal *= pow(10, ui->comboBox_3->currentIndex());
        break;
    case 2:
        resVal *= pow(10, ui->comboBox_3->currentIndex());
        break;
    case 3:
        color2 = "k";
        break;
    case 4:
        color2 = "k";
        resVal *= pow(10, 1);
        break;
    case 5:
        color2 = "k";
        resVal *= pow(10,2);
        break;
    default:
        color2 = "error";
        break;
    }
    ui->label_2->setText("Value " + QString::number(resVal) + color2 + QString::fromUtf8("Ω"));




}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_comboBox_5_currentIndexChanged(int index)
{
    ui->comboBox_1->setCurrentIndex(index);
}
