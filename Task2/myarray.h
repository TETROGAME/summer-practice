#ifndef MYARRAY_H
#define MYARRAY_H

#include <QCoreApplication>
#include <QRegularExpression>
#include <QVector>
#include <QDebug>
#include <QTextEdit>
#include <QMessageBox>

int isPerfect(int n);

class myArray {
private:
    QVector<int> arr;
public:
    myArray();
    myArray(QVector<int> arr);
    ~myArray();
    int locMax() const;
    int locMin() const;

    void task1(QTextEdit* out) const;

    void task2(QTextEdit* out) const;

    void task3(QTextEdit* out) const;

    void task4(QTextEdit* out) const;

    void fillFromLine(const QString& line);
};


#endif // MYARRAY_H
