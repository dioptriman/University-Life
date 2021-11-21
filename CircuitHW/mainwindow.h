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

private slots:
    void on_pushButton_clicked();
    float Calculate();

private:
    Ui::MainWindow *ui;
    int i, j, k;
    int n = 3;
    float a[10][10], b, x[10];
};
#endif // MAINWINDOW_H
