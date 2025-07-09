#include "queuetaskwindow.h"
#include "ui_queuetaskwindow.h"

QueueTaskWindow::QueueTaskWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::QueueTaskWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Задачи на очередь");
}

QueueTaskWindow::~QueueTaskWindow()
{
    delete ui;
}

void QueueTaskWindow::on_inputPushButton_clicked()
{
    int n = ui->n_spinBox->value();
    int m = ui->m_spinBox->value();
    int k = ui->k_spinBox->value();
    int X = ui->X_spinBox->value();
    int t = ui->t_spinBox->value();
    int uc1 = ui->uc1_spinBox->value();
    int pc1 = ui->pc1_spinBox->value();
    int uc2 = ui->uc2_spinBox->value();
    int pc2 = ui->pc2_spinBox->value();
    findCustomersNumber(n, m, k, X, t, uc1, pc1, uc2, pc2, ui->outputPlainTextEdit);
}


void QueueTaskWindow::on_inputFilePushButton_clicked()
{
    const QString inputFilename = ui->inputFileLineEdit->text();
    QFile inputFile(inputFilename);
    if(!inputFile.open(QIODevice::ReadOnly)){
        QMessageBox::warning(this, "Ошибка!", QString("Не удалось открыть файл \"%1\"").arg(inputFilename));
        return;
    }
    ui->outputPlainTextEdit->clear();

    while(!inputFile.atEnd()){
        QString line = inputFile.readLine().simplified();
        if(line.isEmpty()) continue;

        QStringList parts = line.split(' ', Qt::SkipEmptyParts);
        if(parts.size() < 9) {
            ui->outputFilePlainTextEdit->appendPlainText("Ошибка: недостаточно параметров в строке: " + line);
            continue;
        }

        bool ok = true;
        int n   = parts[0].toInt(&ok); if(!ok) continue;
        int m   = parts[1].toInt(&ok); if(!ok) continue;
        int k   = parts[2].toInt(&ok); if(!ok) continue;
        int X   = parts[3].toInt(&ok); if(!ok) continue;
        int t   = parts[4].toInt(&ok); if(!ok) continue;
        int uc1 = parts[5].toInt(&ok); if(!ok) continue;
        int pc1 = parts[6].toInt(&ok); if(!ok) continue;
        int uc2 = parts[7].toInt(&ok); if(!ok) continue;
        int pc2 = parts[8].toInt(&ok); if(!ok) continue;

        findCustomersNumber(n, m, k, X, t, uc1, pc1, uc2, pc2, ui->outputFilePlainTextEdit);
    }
}


void QueueTaskWindow::on_clearFilePushButton_clicked()
{
    ui->outputFilePlainTextEdit->clear();
}


void QueueTaskWindow::on_clearPushButton_clicked()
{
    ui->outputPlainTextEdit->clear();
}

