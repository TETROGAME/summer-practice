#ifndef MYNUMBER_H
#define MYNUMBER_H

#include <QString>
#include <cmath>

class MyNumber {
public:
    MyNumber(int a = 0, int b = 0): a(a), b(b) {}
    void setA(int value) { a = value; }
    void setB(int value) { b = value; }

    QString task1() const;
    QString task2() const;
    QString task3() const;
    QString task4() const;

private:
    int a;
    int b;
    static bool isPrime(int n);
    static int nod(int x, int y);
};

#endif // MYNUMBER_H
