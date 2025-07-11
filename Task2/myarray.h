#ifndef MYARRAY_H
#define MYARRAY_H

#include <QString>
#include <QTextEdit>
#include <QVector>

class myArray
{
public:
    myArray();
    void fillFromLine(const QString &line);

    // Задачи
    void task1(QTextEdit *textEdit);
    void task2(QTextEdit *textEdit);
    void task3(QTextEdit *textEdit);
    void task4(QTextEdit *textEdit);

    // Методы для тестирования
    int getElementAt(int index) const;
    int getSize() const;
    QVector<int> getArray() const;
    QVector<int> getSecondArray() const; // для тестирования задачи 4

private:
    QVector<int> m_array;
    QVector<int> m_secondArray; // для задачи 4

    // Вспомогательные методы
    bool isPerfectNumber(int number) const;
    QVector<int> findLocalMinima() const;
    QVector<int> findLocalMaxima() const;
    QVector<int> expandSeries() const;
    QVector<int> getPerfectNumbers() const;
    QVector<int> findIntersection() const;
};

#endif // MYARRAY_H
