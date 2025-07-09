#ifndef STACKTASKWINDOW_H
#define STACKTASKWINDOW_H

#include <QDialog>
#include <QMessageBox>
#include "Stack_Queue_List_header.h"
namespace Ui {
class StackTaskWindow;
}

class StackTaskWindow : public QDialog
{
    Q_OBJECT

public:
    explicit StackTaskWindow(QWidget *parent = nullptr);
    ~StackTaskWindow();

private slots:
    void on_inputManualPushButton_clicked();

    void on_inputFilePushButton_clicked();

    void on_fileClearOutputPushButton_clicked();

    void on_manualClearOutputPushButton_clicked();

    void on_inputPolishManualPushButton_clicked();

    void on_inputPolishFilePushButton_clicked();

    void on_clearOutputPolishManualPushButton_clicked();

    void on_clearOutputPolishFilePushButton_clicked();


private:
    Ui::StackTaskWindow *ui;
};

#endif // STACKTASKWINDOW_H
