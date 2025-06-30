#include "myarray.h"

int isPerfect(int n) {
    if (n == 0) {
        return false;
    }
    int sum = 0;

    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum == n;
}

myArray::myArray(){
    arr = {0};
}

myArray::myArray(QVector<int> arr){
    this->arr = arr;
}

myArray::~myArray(){}

int myArray::locMax() const{
    int locmax = 0;
    for (int i = 1; i < arr.size() - 1; i++) {
        if (arr[i] > arr[i + 1] && arr[i] > arr[i - 1]) {
            locmax++;
        }
    }
    return locmax;
}

int myArray::locMin() const{
    int locmin = 0;
    for (int i = 1; i < arr.size() - 1; i++) {
        if (arr[i] < arr[i + 1] && arr[i] < arr[i - 1]) {
            locmin++;
        }
    }
    return locmin;
}

void myArray::task1(QTextEdit *out) const {
    out->append("Задание 1:");
    out->append(QString("Количество локальных минимумов: %1").arg(locMin()));
    out->append(QString("Количество локальных максимумов: %1").arg(locMax()));
    out->append("");
}

void myArray::task2(QTextEdit *out) const {
    out->append("Задание 2:");
    QVector<int> result;
    int i = 0;
    while (i < arr.size()) {
        int count = 1;
        while (i + count < arr.size() && arr[i + count] == arr[i])
            ++count;

        for (int j = 0; j < count + 1; ++j)
            result.push_back(arr[i]);

        i += count;
    }

    QStringList elems;
    for (int el : result)
        elems << QString::number(el);

    out->append("Развернутый массив: " + elems.join(' '));
    out->append("");
}

void myArray::task3(QTextEdit *out) const {
    out->append("Задание 3:");
    QVector<int> result;
    for (int v : arr)
        if (isPerfect(v))
            result.push_back(v);

    QStringList elems;
    for (int el : result)
        elems << QString::number(el);

    out->append("Массив совершенных чисел: " + elems.join(' '));
    out->append("");
}

void myArray::task4(QTextEdit *out) const {
    out->append("Задание 4:");
    QVector<int> arr2;
    arr2.reserve(arr.size());
    for (int i = 0; i < arr.size(); ++i)
        arr2.push_back(rand() % 10);

    QStringList elems2;
    for (int v : arr2)
        elems2 << QString::number(v);
    out->append("Второй массив: " + elems2.join(' '));

    QVector<int> intersection;
    for (int v1 : arr) {
        for (int v2 : arr2) {
            if (v1 == v2) {
                intersection.push_back(v1);
                break;
            }
        }
    }

    QStringList elemsI;
    for (int v : intersection)
        elemsI << QString::number(v);
    out->append("Пересечение двух данных массивов: " + elemsI.join(' '));
    out->append("");
}

void myArray::fillFromLine(const QString &line) {
    arr.clear();
    static const QRegularExpression re(R"([\s,;]+)");
    const QStringList tokens = line.split(re, Qt::SkipEmptyParts);

    for (const QString& token : tokens) {
        bool ok = false;
        int v = token.toInt(&ok);
        if (ok) {
            arr.append(v);
        } else {
            QMessageBox::warning(nullptr, "Ошибка!", QString("Ошибка преобразования %1 в целое число").arg(token));
            exit(1);
        }
    }
    QMessageBox::about(nullptr, "Успех!", "Массив успешно заполнен");
}
