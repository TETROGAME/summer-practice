#include "listtaskwindow.h"
#include "ui_listtaskwindow.h"

ListTaskWindow::ListTaskWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ListTaskWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Задачи на список");
}

ListTaskWindow::~ListTaskWindow()
{
    delete ui;
}

void ListTaskWindow::on_inputJosephusManualPushButton_clicked()
{
    QString line = ui->inputManualJosephusLineEdit->text();
    Josephus(ui->josephusManualSpinBox->value(), ui->outputJosephusManualPlainTextEdit, line);
}


void ListTaskWindow::on_clearJosephusManualPushButton_clicked()
{
    ui->outputJosephusManualPlainTextEdit->clear();
}


void ListTaskWindow::on_inputJosephusFilePushButton_clicked()
{
    const QString inputFilename = ui->inputFileJosephusLineEdit->text();
    QFile inputFile(inputFilename);
    if(!inputFile.open(QIODevice::ReadOnly)){
        QMessageBox::warning(this, "Ошибка!", QString("Не удалось открыть файл \"%1\"").arg(inputFilename));
        return;
    }
    int step = ui->josephusFileSpinBox->value();
    while(!inputFile.atEnd()){
        QString line = inputFile.readLine();
        Josephus(step, ui->outputJosephusFilePlainTextEdit, line);
    }
}


void ListTaskWindow::on_clearJosephusFilePushButton_clicked()
{
    ui->outputJosephusFilePlainTextEdit->clear();
}


void ListTaskWindow::on_inputSwapManualPushButton_clicked()
{
    QString line = ui->inputSwapManualLineEdit->text();
    swapThirds(line, ui->outputSwapManualPlainTextEdit);
}


void ListTaskWindow::on_cleanSwapManualPushButton_clicked()
{
    ui->outputSwapManualPlainTextEdit->clear();
}


void ListTaskWindow::on_inputSwapFilePushButton_clicked()
{
    const QString inputFilename = ui->inputSwapFileLineEdit->text();
    QFile inputFile(inputFilename);
    if(!inputFile.open(QIODevice::ReadOnly)){
        QMessageBox::warning(this, "Ошибка!", QString("Не удалось открыть файл \"%1\"").arg(inputFilename));
        return;
    }
    int i = 1;
    while(!inputFile.atEnd()){
        QString line = inputFile.readLine();
        line.remove("\r\n");
        ui->outputSwapFilePlainTextEdit->appendPlainText(QString("Строка номер: %1").arg(i));
        ui->inputSwapFilePlainTextEdit->appendPlainText(line);
        swapThirds(line, ui->outputSwapFilePlainTextEdit);
        ++i;
    }
}

