#include "mynumber.h"

bool MyNumber::isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= std::sqrt(n); ++i)
        if (n % i == 0) return false;
    return true;
}

int MyNumber::nod(int x, int y) {
    if (x == y) return x;
    if (x == 0) return y;
    if (y == 0) return x;
    if ((x % 2 == 0) && (y % 2 == 0))
        return 2 * nod(x/2, y/2);
    else if (x % 2 == 0)
        return nod(x/2, y);
    else if (y % 2 == 0)
        return nod(x, y/2);
    else if (x > y)
        return nod(x - y, y);
    else
        return nod(x, y - x);
}

QString MyNumber::task1() const {
    auto calcRange = [](int x) {
        if (x < 1) {
            return qMakePair(0, 0);
        }
        int exp = 0;
        int pow2 = 1;
        while (pow2 < x) {
            pow2 *= 2;
            ++exp;
        }
        int low = (exp > 0 ? exp - 1 : 0);
        return qMakePair(low, exp);
    };

    QPair ra = calcRange(a);
    QPair rb = calcRange(b);

    QString res;
    res += QString("Число a находится между 2^%1 и 2^%2\n")
               .arg(ra.first).arg(ra.second);
    res += QString("Число b находится между 2^%1 и 2^%2")
               .arg(rb.first).arg(rb.second);
    return res;
}

QString MyNumber::task2() const {
    return QString("НОД(a, b) = %1").arg(nod(a, b));
}

QString MyNumber::task3() const {
    int diff = a*a - b*b;
    if (diff < 2)
        return "Нет решения: разность слишком мала";
    for (int p1 = 2; p1 <= std::sqrt(diff); ++p1) {
        if (diff % p1 == 0) {
            int p2 = diff / p1;
            if (isPrime(p1) && isPrime(p2))
                return QString("%1^2 - %2^2 = %3 * %4")
                    .arg(a).arg(b).arg(p1).arg(p2);
        }
    }
    return "Невозможно найти два простых числа p1 и p2";
}

QString MyNumber::task4() const {
    auto dupMax = [](int x){
        int temp = x, mx = 0;
        while (temp > 0) {
            mx = std::max(mx, temp % 10);
            temp /= 10;
        }
        int result = 0, mul = 1;
        while (x > 0) {
            int d = x % 10;
            x /= 10;
            if (d == mx) {
                result += d * mul;
                mul *= 10;
            }
            result += d * mul;
            mul *= 10;
        }
        return result;
    };
    return QString("Изменённое число a: %1\nИзменённое число b: %2")
        .arg(dupMax(a)).arg(dupMax(b));
}
