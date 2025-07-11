#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "myarray.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_inputArrayPushButton_clicked();

    void on_task1PushButton_clicked();

    void on_task2PushButton_clicked();

    void on_task3PushButton_clicked();

    void on_task4PushButton_clicked();

private:
    myArray array;
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
