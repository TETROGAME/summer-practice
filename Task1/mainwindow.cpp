#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mynumber.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->statusBar->showMessage("Тимошенко Никита Михайловч 1 курс 5 группа");
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_pushButtonTask1_clicked() {
    MyNumber num(ui->lineEditA->text().toInt(),
                 ui->lineEditB->text().toInt());
    ui->textEditOutput->setPlainText(num.task1());
}

void MainWindow::on_pushButtonTask2_clicked() {
    MyNumber num(ui->lineEditA->text().toInt(),
                 ui->lineEditB->text().toInt());
    ui->textEditOutput->setPlainText(num.task2());
}

void MainWindow::on_pushButtonTask3_clicked() {
    MyNumber num(ui->lineEditA->text().toInt(),
                 ui->lineEditB->text().toInt());
    ui->textEditOutput->setPlainText(num.task3());
}

void MainWindow::on_pushButtonTask4_clicked() {
    MyNumber num(ui->lineEditA->text().toInt(),
                 ui->lineEditB->text().toInt());
    ui->textEditOutput->setPlainText(num.task4());
}

void MainWindow::on_pushButtonInfo_clicked() {
    const QString infoText =
        "Задача 1: Определить, между какими степенями двойки находится каждое из чисел a и b.\n"
        "Задача 2: Найти наибольший общий делитель (НОД) чисел a и b.\n"
        "Задача 3: Разложить разность a^2 - b^2 на два простых множителя p1 и p2, если возможно.\n"
        "Задача 4: В каждом из чисел a и b продублировать все вхождения наибольшей цифры.";
    QMessageBox::information(this, "Информация по задачам", infoText);
}
