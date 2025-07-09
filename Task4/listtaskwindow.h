#ifndef LISTTASKWINDOW_H
#define LISTTASKWINDOW_H

#include <QDialog>
#include <QMessageBox>
#include "Stack_Queue_List_header.h"

namespace Ui {
class ListTaskWindow;
}

class ListTaskWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ListTaskWindow(QWidget *parent = nullptr);
    ~ListTaskWindow();

private slots:
    void on_inputJosephusManualPushButton_clicked();

    void on_clearJosephusManualPushButton_clicked();

    void on_inputJosephusFilePushButton_clicked();

    void on_clearJosephusFilePushButton_clicked();

    void on_inputSwapManualPushButton_clicked();

    void on_cleanSwapManualPushButton_clicked();

    void on_inputSwapFilePushButton_clicked();

private:
    Ui::ListTaskWindow *ui;
};

#endif // LISTTASKWINDOW_H
