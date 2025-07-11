#include "myarray.h"
#include <QStringList>

myArray::myArray()
{
    // Инициализация пустых массивов
}

void myArray::fillFromLine(const QString &line)
{
    m_array.clear();
    QStringList items = line.split(" ", Qt::SkipEmptyParts);

    for (const QString &item : items) {
        bool ok;
        int value = item.toInt(&ok);
        if (ok) {
            m_array.append(value);
        }
    }

    m_secondArray = m_array;
}

void myArray::task1(QTextEdit *textEdit)
{
    if (m_array.isEmpty()) {
        textEdit->setText("Массив пуст");
        return;
    }

    QVector<int> minima = findLocalMinima();
    QVector<int> maxima = findLocalMaxima();

    QString result = "Исходный массив: ";
    for (int value : m_array) {
        result += QString::number(value) + " ";
    }
    result += "\n\n";

    result += "Локальные минимумы (позиции): ";
    for (int idx : minima) {
        result += QString::number(idx) + " ";
    }
    result += "\nКоличество: " + QString::number(minima.size()) + "\n\n";

    result += "Локальные максимумы (позиции): ";
    for (int idx : maxima) {
        result += QString::number(idx) + " ";
    }
    result += "\nКоличество: " + QString::number(maxima.size());

    textEdit->setText(result);
}

void myArray::task2(QTextEdit *textEdit)
{
    if (m_array.isEmpty()) {
        textEdit->setText("Массив пуст");
        return;
    }

    QVector<int> expanded = expandSeries();

    QString result = "Исходный массив: ";
    for (int value : m_array) {
        result += QString::number(value) + " ";
    }
    result += "\n\n";

    result += "Массив с расширенными сериями: ";
    for (int value : expanded) {
        result += QString::number(value) + " ";
    }

    textEdit->setText(result);
}

void myArray::task3(QTextEdit *textEdit)
{
    if (m_array.isEmpty()) {
        textEdit->setText("Массив пуст");
        return;
    }

    QVector<int> perfectNumbers = getPerfectNumbers();

    QString result = "Исходный массив: ";
    for (int value : m_array) {
        result += QString::number(value) + " ";
    }
    result += "\n\n";

    result += "Массив с совершенными числами: ";
    if (perfectNumbers.isEmpty()) {
        result += "В исходном массиве нет совершенных чисел";
    } else {
        for (int value : perfectNumbers) {
            result += QString::number(value) + " ";
        }
    }

    textEdit->setText(result);
}

void myArray::task4(QTextEdit *textEdit)
{
    if (m_array.isEmpty() || m_secondArray.isEmpty()) {
        textEdit->setText("Один из массивов пуст");
        return;
    }

    QVector<int> intersection = findIntersection();

    QString result = "Массив 1: ";
    for (int value : m_array) {
        result += QString::number(value) + " ";
    }
    result += "\n\n";

    result += "Массив 2: ";
    for (int value : m_secondArray) {
        result += QString::number(value) + " ";
    }
    result += "\n\n";

    result += "Пересечение массивов: ";
    if (intersection.isEmpty()) {
        result += "Нет общих элементов";
    } else {
        for (int value : intersection) {
            result += QString::number(value) + " ";
        }
    }

    textEdit->setText(result);
}

// Методы для тестирования
int myArray::getElementAt(int index) const
{
    if (index >= 0 && index < m_array.size()) {
        return m_array[index];
    }
    return 0; // Возвращаем 0 для недопустимых индексов
}

int myArray::getSize() const
{
    return m_array.size();
}

QVector<int> myArray::getArray() const
{
    return m_array;
}

QVector<int> myArray::getSecondArray() const
{
    return m_secondArray;
}

// Вспомогательные методы
bool myArray::isPerfectNumber(int number) const
{
    if (number <= 1) return false;

    int sum = 1; // 1 всегда делитель
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            sum += i;
            if (i != number / i) { // избегаем дублирования для квадратных корней
                sum += number / i;
            }
        }
    }

    return sum == number;
}

QVector<int> myArray::findLocalMinima() const
{
    QVector<int> minima;

    if (m_array.size() <= 1) {
        return minima;
    }


    for (int i = 1; i < m_array.size() - 1; i++) {
        if (m_array[i] < m_array[i-1] && m_array[i] < m_array[i+1]) {
            minima.append(i);
        }
    }

    int lastIndex = m_array.size() - 1;
    if (lastIndex > 0 && m_array[lastIndex] < m_array[lastIndex - 1]) {
        minima.append(lastIndex);
    }

    return minima;
}

QVector<int> myArray::findLocalMaxima() const
{
    QVector<int> maxima;

    if (m_array.size() <= 1) {
        return maxima;
    }

    if (m_array[0] > m_array[1]) {
        maxima.append(0);
    }

    for (int i = 1; i < m_array.size() - 1; i++) {
        if (m_array[i] > m_array[i-1] && m_array[i] > m_array[i+1]) {
            maxima.append(i);
        }
    }

    int lastIndex = m_array.size() - 1;
    if (lastIndex > 0 && m_array[lastIndex] > m_array[lastIndex - 1]) {
        maxima.append(lastIndex);
    }

    return maxima;
}

QVector<int> myArray::expandSeries() const
{
    QVector<int> result;

    if (m_array.isEmpty()) {
        return result;
    }

    // Добавляем первый элемент
    result.append(m_array[0]);

    // Отслеживаем, являемся ли мы частью серии
    bool inSeries = false;

    for (int i = 1; i < m_array.size(); i++) {
        // Добавляем текущий элемент в результат
        result.append(m_array[i]);

        // Проверяем, являемся ли мы частью серии
        if (m_array[i] == m_array[i-1]) {
            // Начинаем серию или продолжаем
            if (!inSeries) {
                // Начало новой серии - добавляем еще один элемент
                result.append(m_array[i]);
                inSeries = true;
            }
        } else {
            inSeries = false;
        }
    }

    return result;
}

QVector<int> myArray::getPerfectNumbers() const
{
    QVector<int> result;

    for (int value : m_array) {
        if (isPerfectNumber(value)) {
            result.append(value);
        }
    }

    return result;
}

QVector<int> myArray::findIntersection() const
{
    QVector<int> result;

    for (int value : m_array) {
        if (m_secondArray.contains(value) && !result.contains(value)) {
            result.append(value);
        }
    }

    return result;
}
