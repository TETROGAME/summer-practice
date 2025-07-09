#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->statusbar->showMessage("Тимошенко Никита Михайлович 1 курс 5 группа");
    updateWindowTitle();

    ui->stackedWidget->setCurrentIndex(0);
    ui->actionStack->setChecked(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateWindowTitle()
{
    QString title = "Структуры данных - ";

    switch(ui->stackedWidget->currentIndex()) {
    case 0:
        title += "Стек";
        break;
    case 1:
        title += "Список";
        break;
    case 2:
        title += "Очередь";
        break;
    }

    this->setWindowTitle(title);
    ui->statusbar->showMessage("Тимошенко Никита Михайлович 1 курс 5 группа");
}

void MainWindow::on_actionStack_triggered()
{
    ui->stackedWidget->setCurrentIndex(0);
    ui->actionStack->setChecked(true);
    ui->actionList->setChecked(false);
    ui->actionQueue->setChecked(false);
    updateWindowTitle();
}

void MainWindow::on_actionList_triggered()
{
    ui->stackedWidget->setCurrentIndex(1);
    ui->actionStack->setChecked(false);
    ui->actionList->setChecked(true);
    ui->actionQueue->setChecked(false);
    updateWindowTitle();
}

void MainWindow::on_actionQueue_triggered()
{
    ui->stackedWidget->setCurrentIndex(2);
    ui->actionStack->setChecked(false);
    ui->actionList->setChecked(false);
    ui->actionQueue->setChecked(true);
    updateWindowTitle();
}

void MainWindow::on_actionExit_triggered()
{
    QApplication::quit();
}



void MainWindow::on_inputManualPushButton_clicked()
{
    QString line = ui->inputManualLineEdit->text();
    line.remove('\n');
    line.remove('\r');
    changeThirds(line, ui->outputManualPlainTextEdit);
}

void MainWindow::on_inputFilePushButton_clicked()
{
    ui->inputFileLineEdit->clear();
    const QString inputFilename = ui->filenameLineEdit->text();
    QFile inputFile(inputFilename);
    if(!inputFile.open(QIODevice::ReadOnly)){
        QMessageBox::warning(this, "Ошибка!", QString("Не удалось открыть файл \"%1\"").arg(inputFilename));
        return;
    }
    while(!inputFile.atEnd()){
        QString line = inputFile.readLine();
        line.remove('\n');
        line.remove('\r');
        ui->inputFileLineEdit->appendPlainText(line);
        changeThirds(line, ui->outputFilePlainTextEdit);
    }
}

void MainWindow::on_fileClearOutputPushButton_clicked()
{
    ui->outputFilePlainTextEdit->clear();
}

void MainWindow::on_manualClearOutputPushButton_clicked()
{
    ui->outputManualPlainTextEdit->clear();
}

void MainWindow::on_inputPolishManualPushButton_clicked()
{
    QString line = ui->inputPolishManualLineEdit->text();
    line.remove('\n');
    line.remove('\r');
    const QRegularExpression re("^[\\+\\-\\*/\\(\\)0-9]+$");
    if(re.match(line).hasMatch()) {
        ui->inputPolishManualLineEdit->setText(line);
        reversePolish(line, ui->outputPolishManualPlainTextEdit);
    } else {
        QMessageBox::warning(this, "Ошибка!", "Неверный формат ввода. Допускаются цифры от 0 до 9, знаки + - / * и круглые скобки");
        ui->inputPolishManualLineEdit->clear();
        return;
    }
}

void MainWindow::on_inputPolishFilePushButton_clicked()
{
    ui->inputPolishFileLineEdit->clear();
    const QString inputFilename = ui->inputFilenamePolishFileLineEdit->text();
    QFile inputFile(inputFilename);
    if(!inputFile.open(QIODevice::ReadOnly)){
        QMessageBox::warning(this, "Ошибка!", QString("Не удалось открыть файл \"%1\"").arg(inputFilename));
        return;
    }
    while(!inputFile.atEnd()){
        QString line = inputFile.readLine();
        line.remove('\n');
        line.remove('\r');
        const QRegularExpression re("^[\\+\\-\\*/\\(\\)0-9]+$");
        if(re.match(line).hasMatch()) {
            ui->inputPolishFileLineEdit->appendPlainText(line);
            reversePolish(line, ui->outputPolishFilePlainTextEdit);
        } else {
            QMessageBox::warning(this, "Ошибка!", "Неверный формат ввода. Допускаются цифры от 0 до 9, знаки + - / * и круглые скобки");
            return;
        }
    }
}

void MainWindow::on_clearOutputPolishManualPushButton_clicked()
{
    ui->outputPolishManualPlainTextEdit->clear();
}

void MainWindow::on_clearOutputPolishFilePushButton_clicked()
{
    ui->outputPolishFilePlainTextEdit->clear();
}

void MainWindow::on_inputJosephusManualPushButton_clicked()
{
    QString line = ui->inputManualJosephusLineEdit->text();
    Josephus(ui->josephusManualSpinBox->value(), ui->outputJosephusManualPlainTextEdit, line);
}

void MainWindow::on_clearJosephusManualPushButton_clicked()
{
    ui->outputJosephusManualPlainTextEdit->clear();
}

void MainWindow::on_inputJosephusFilePushButton_clicked()
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

void MainWindow::on_clearJosephusFilePushButton_clicked()
{
    ui->outputJosephusFilePlainTextEdit->clear();
}

void MainWindow::on_inputSwapManualPushButton_clicked()
{
    QString line = ui->inputSwapManualLineEdit->text();
    swapThirds(line, ui->outputSwapManualPlainTextEdit);
}

void MainWindow::on_cleanSwapManualPushButton_clicked()
{
    ui->outputSwapManualPlainTextEdit->clear();
}

void MainWindow::on_inputSwapFilePushButton_clicked()
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

void MainWindow::on_clearSwapFilePushButton_clicked()
{
    ui->outputSwapFilePlainTextEdit->clear();
    ui->inputSwapFilePlainTextEdit->clear();
}

void MainWindow::on_inputPushButton_clicked()
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

void MainWindow::on_inputFilePushButton_queue_clicked()
{
    const QString inputFilename = ui->inputFileLineEdit_queue->text();
    QFile inputFile(inputFilename);
    if(!inputFile.open(QIODevice::ReadOnly)){
        QMessageBox::warning(this, "Ошибка!", QString("Не удалось открыть файл \"%1\"").arg(inputFilename));
        return;
    }
    ui->outputFilePlainTextEdit_queue->clear();

    while(!inputFile.atEnd()){
        QString line = inputFile.readLine().simplified();
        if(line.isEmpty()) continue;

        QStringList parts = line.split(' ', Qt::SkipEmptyParts);
        if(parts.size() < 9) {
            ui->outputFilePlainTextEdit_queue->appendPlainText("Ошибка: недостаточно параметров в строке: " + line);
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

        findCustomersNumber(n, m, k, X, t, uc1, pc1, uc2, pc2, ui->outputFilePlainTextEdit_queue);
    }
}

void MainWindow::on_clearFilePushButton_clicked()
{
    ui->outputFilePlainTextEdit_queue->clear();
}

void MainWindow::on_clearPushButton_clicked()
{
    ui->outputPlainTextEdit->clear();
}
