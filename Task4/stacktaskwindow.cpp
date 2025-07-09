#include "stacktaskwindow.h"
#include "ui_stacktaskwindow.h"

StackTaskWindow::StackTaskWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::StackTaskWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Задачи на стек");
}

StackTaskWindow::~StackTaskWindow()
{
    delete ui;
}

void StackTaskWindow::on_inputManualPushButton_clicked()
{
    QString line = ui->inputManualLineEdit->text();
    line.remove('\n');
    line.remove('\r');
    changeThirds(line, ui->outputManualPlainTextEdit);
}


void StackTaskWindow::on_inputFilePushButton_clicked()
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


void StackTaskWindow::on_fileClearOutputPushButton_clicked()
{
    ui->outputFilePlainTextEdit->clear();
}


void StackTaskWindow::on_manualClearOutputPushButton_clicked()
{
    ui->outputManualPlainTextEdit->clear();
}


void StackTaskWindow::on_inputPolishManualPushButton_clicked()
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


void StackTaskWindow::on_inputPolishFilePushButton_clicked()
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

void saveFinalNumbersToBin(QPlainTextEdit* edit, const QString& filename)
{
    // Ищем последнюю НЕпустую строку
    QStringList lines = edit->toPlainText().split('\n', Qt::SkipEmptyParts);
    if (lines.isEmpty())
        return;

    QString lastLine = lines.last().trimmed();
    // Ищем все целые числа (можно отрицательные)
    QRegularExpression re("(-?\\d+)");
    QRegularExpressionMatchIterator i = re.globalMatch(lastLine);

    QList<int> numbers;
    while (i.hasNext()) {
        QRegularExpressionMatch match = i.next();
        numbers << match.captured(1).toInt();
    }

    if (numbers.isEmpty()) {
        QMessageBox::warning(nullptr, "Ошибка", "Не найдено числовых результатов для сохранения.");
        return;
    }

    QFile file(filename);
    if (file.open(QIODevice::WriteOnly)) {
        QDataStream out(&file);
        for (int n : numbers)
            out << n;
        file.close();
        QMessageBox::information(nullptr, "Успех", QString("Числа записаны в %1").arg(filename));
    } else {
        QMessageBox::warning(nullptr, "Ошибка", QString("Не удалось открыть файл %1 для записи.").arg(filename));
    }
}

void StackTaskWindow::on_clearOutputPolishManualPushButton_clicked()
{
    ui->outputPolishManualPlainTextEdit->clear();
}


void StackTaskWindow::on_clearOutputPolishFilePushButton_clicked()
{
    ui->outputPolishFilePlainTextEdit->clear();
}


