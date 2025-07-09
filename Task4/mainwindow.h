#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "stacktaskwindow.h"
#include "listtaskwindow.h"
#include "queuetaskwindow.h"
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
    void on_stackPushButton_clicked();

    void on_listPushButton_clicked();

    void on_queuePushButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
