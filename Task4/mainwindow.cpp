#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->statusbar->showMessage("Тимошенко Никита Михайлович 1 курс 5 группа");
    this->setWindowTitle("Задачи на стек, список, очередь");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_stackPushButton_clicked()
{
    StackTaskWindow* stackTaskWindow = new StackTaskWindow(this);
    stackTaskWindow->show();
}


void MainWindow::on_listPushButton_clicked()
{
    ListTaskWindow* listTaskWindow = new ListTaskWindow(this);
    listTaskWindow->show();
}


void MainWindow::on_queuePushButton_clicked()
{
    QueueTaskWindow* queueTaskWindow = new QueueTaskWindow(this);
    queueTaskWindow->show();
}

