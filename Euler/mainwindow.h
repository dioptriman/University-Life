#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    int process();
    int process2(int newValue);
    void display();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    float number, constant = 0, counter, variable=0, euler=0, factorial;
    int factorial2;

    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
