#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->statusbar->showMessage("Тимошенко Никита Михайлович 1 курс 5 группа");

    this->setWindowTitle("Англо-белорусско-русский словарь");

    engrus_dictionary = new EngRus_translator;
    engbelrus_dictionary = new EngBelRus_translator;

    QStringList engrusHeaders = {"Английский", "Русский"};
    QStringList engbelrusHeaders = {"Английский", "Белорусский" , "Русский"};
    ui->engrusTableWidget->setColumnCount(2);
    ui->engbelrusTableWidget->setColumnCount(3);
    ui->engrusTableWidget->setHorizontalHeaderLabels(engrusHeaders);
    ui->engbelrusTableWidget->setHorizontalHeaderLabels(engbelrusHeaders);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_engrusFilePushButton_clicked()
{
    const QString engrusFilename = ui->engrusFileLineEdit->text();

    if(engrus_dictionary->readFromFile(engrusFilename)) {
        QMessageBox::about(this, "Успех!", QString("Информация из файла %1 успешно считана!").arg(engrusFilename));
        update_engrusTableWidget();
    }
}


void MainWindow::on_engbelrusFilePushButton_clicked()
{
    const QString engbelrusFilename = ui->engbelrusFileLineEdit->text();
    if(engbelrus_dictionary->readFromFile(engbelrusFilename)){
        QMessageBox::about(this, "Успех!", QString("Информация из файла %1 успешно считана!").arg(engbelrusFilename));
        update_engbelrusTableWidget();
    }

}

void MainWindow::update_engrusTableWidget()
{
    QVector<QStringList> engrusDatabase = engrus_dictionary->returnDoubleDatabase();
    ui->engrusTableWidget->setColumnCount(2);
    ui->engrusTableWidget->setRowCount(engrusDatabase.size());
    for (int i = 0; i < engrusDatabase.size(); ++i) {
        for (int j = 0; j < 2; ++j) {
            ui->engrusTableWidget->setItem(i, j, new QTableWidgetItem(engrusDatabase[i][j]));
        }
    }
}

void MainWindow::update_engbelrusTableWidget()
{
    QVector<QStringList> engbelrusDatabase = engbelrus_dictionary->returnTripleDatabase();

    ui->engrusTableWidget->setColumnCount(2);

    ui->engbelrusTableWidget->setColumnCount(3);
    ui->engbelrusTableWidget->setRowCount(engbelrusDatabase.size());


    for (int i = 0; i < engbelrusDatabase.size(); ++i) {
        for (int j = 0; j < 3; ++j) {
            ui->engbelrusTableWidget->setItem(i, j, new QTableWidgetItem(engbelrusDatabase[i][j]));
        }
    }
}

