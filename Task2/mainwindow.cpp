#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->statusbar->showMessage("Тимошенко Никита Михайлович 1 курс 5 группа");
    this->setWindowTitle("Класс массив с числами");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_inputArrayPushButton_clicked()
{
    array.fillFromLine(ui->arrayLineEdit->text());
}


void MainWindow::on_task1PushButton_clicked()
{
    array.task1(ui->arrayTextEdit);
}


void MainWindow::on_task2PushButton_clicked()
{
    array.task2(ui->arrayTextEdit);
}


void MainWindow::on_task3PushButton_clicked()
{
    array.task3(ui->arrayTextEdit);
}


void MainWindow::on_task4PushButton_clicked()
{
    array.task4(ui->arrayTextEdit);
}

