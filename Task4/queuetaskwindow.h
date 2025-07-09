#ifndef QUEUETASKWINDOW_H
#define QUEUETASKWINDOW_H

#include <QDialog>
#include "Stack_Queue_List_header.h"

namespace Ui {
class QueueTaskWindow;
}

class QueueTaskWindow : public QDialog
{
    Q_OBJECT

public:
    explicit QueueTaskWindow(QWidget *parent = nullptr);
    ~QueueTaskWindow();

private slots:
    void on_inputPushButton_clicked();

    void on_inputFilePushButton_clicked();

    void on_clearFilePushButton_clicked();

    void on_clearPushButton_clicked();

private:
    Ui::QueueTaskWindow *ui;
};

#endif // QUEUETASKWINDOW_H
