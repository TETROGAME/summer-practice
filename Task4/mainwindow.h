#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStackedWidget>
#include <QMessageBox>
#include "Stack_Queue_List_header.h"

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
    void on_actionStack_triggered();
    void on_actionList_triggered();
    void on_actionQueue_triggered();
    void on_actionExit_triggered();

    void on_inputManualPushButton_clicked();
    void on_inputFilePushButton_clicked();
    void on_fileClearOutputPushButton_clicked();
    void on_manualClearOutputPushButton_clicked();
    void on_inputPolishManualPushButton_clicked();
    void on_inputPolishFilePushButton_clicked();
    void on_clearOutputPolishManualPushButton_clicked();
    void on_clearOutputPolishFilePushButton_clicked();

    void on_inputJosephusManualPushButton_clicked();
    void on_clearJosephusManualPushButton_clicked();
    void on_inputJosephusFilePushButton_clicked();
    void on_clearJosephusFilePushButton_clicked();
    void on_inputSwapManualPushButton_clicked();
    void on_cleanSwapManualPushButton_clicked();
    void on_inputSwapFilePushButton_clicked();
    void on_clearSwapFilePushButton_clicked();

    void on_inputPushButton_clicked();
    void on_inputFilePushButton_queue_clicked();
    void on_clearFilePushButton_clicked();
    void on_clearPushButton_clicked();

private:
    Ui::MainWindow *ui;
    void updateWindowTitle();
};

#endif // MAINWINDOW_H
