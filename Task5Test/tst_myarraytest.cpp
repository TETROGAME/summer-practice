#include <QtTest>
#include "../Task2/myarray.h"

class MyArrayTest : public QObject
{
    Q_OBJECT

private slots:
    void initTestCase();
    void cleanupTestCase();

    void testFillFromLine();
    void testGetElementAt();
    void testGetSize();
    void testGetArray();

    void testTask1_LocalMinima();
    void testTask1_LocalMaxima();
    void testTask2_ExpandSeries();
    void testTask3_PerfectNumbers();
    void testTask4_Intersection();

    void testEmptyArray();
    void testSingleElementArray();
    void testNegativeNumbers();
};

void MyArrayTest::initTestCase()
{
}

void MyArrayTest::cleanupTestCase()
{
}

void MyArrayTest::testFillFromLine()
{
    myArray array;
    QString input = "1 2 3 4 5";
    array.fillFromLine(input);

    QCOMPARE(array.getSize(), 5);
    QCOMPARE(array.getElementAt(0), 1);
    QCOMPARE(array.getElementAt(1), 2);
    QCOMPARE(array.getElementAt(2), 3);
    QCOMPARE(array.getElementAt(3), 4);
    QCOMPARE(array.getElementAt(4), 5);

    input = "  10   20  30  ";
    array.fillFromLine(input);

    QCOMPARE(array.getSize(), 3);
    QCOMPARE(array.getElementAt(0), 10);
    QCOMPARE(array.getElementAt(1), 20);
    QCOMPARE(array.getElementAt(2), 30);

    input = "1 a 2 b 3";
    array.fillFromLine(input);

    QCOMPARE(array.getSize(), 3);
    QCOMPARE(array.getElementAt(0), 1);
    QCOMPARE(array.getElementAt(1), 2);
    QCOMPARE(array.getElementAt(2), 3);
}

void MyArrayTest::testGetElementAt()
{
    myArray array;
    QString input = "5 4 3 2 1";
    array.fillFromLine(input);

    QCOMPARE(array.getElementAt(0), 5);
    QCOMPARE(array.getElementAt(4), 1);

    QCOMPARE(array.getElementAt(-1), 0);
    QCOMPARE(array.getElementAt(5), 0);
}

void MyArrayTest::testGetSize()
{
    myArray array;

    QCOMPARE(array.getSize(), 0);

    array.fillFromLine("1 2 3");
    QCOMPARE(array.getSize(), 3);

    array.fillFromLine("10 20 30 40 50");
    QCOMPARE(array.getSize(), 5);
}

void MyArrayTest::testGetArray()
{
    myArray array;
    QString input = "1 2 3 4 5";
    array.fillFromLine(input);

    QVector<int> expected = {1, 2, 3, 4, 5};
    QCOMPARE(array.getArray(), expected);
}

void MyArrayTest::testTask1_LocalMinima()
{
    myArray array;
    array.fillFromLine("5 2 6 1 7 3");

    QTextEdit textEdit;
    array.task1(&textEdit);

    QString result = textEdit.toPlainText();
    QVERIFY(result.contains("Локальные минимумы (позиции): 1 3 5"));
}

void MyArrayTest::testTask1_LocalMaxima()
{
    myArray array;
    array.fillFromLine("5 8 2 9 1 6");

    QTextEdit textEdit;
    array.task1(&textEdit);

    QString result = textEdit.toPlainText();
    QVERIFY(result.contains("Локальные максимумы (позиции): 1 3 5"));
}

void MyArrayTest::testTask2_ExpandSeries()
{
    myArray array;

    array.fillFromLine("1 1 2 3 3 3 4");

    QTextEdit textEdit;
    array.task2(&textEdit);

    QString result = textEdit.toPlainText();
    QVERIFY(result.contains("Массив с расширенными сериями: 1 1 1 2 3 3 3 3 4"));
}

void MyArrayTest::testTask3_PerfectNumbers()
{
    myArray array;

    array.fillFromLine("5 6 10 28 15");

    QTextEdit textEdit;
    array.task3(&textEdit);

    QString result = textEdit.toPlainText();
    QVERIFY(result.contains("Массив с совершенными числами: 6 28"));
}

void MyArrayTest::testTask4_Intersection()
{
    myArray array;

    array.fillFromLine("1 2 3 4 5");

    QTextEdit textEdit;
    array.task4(&textEdit);

    QString result = textEdit.toPlainText();
    QVERIFY(result.contains("Пересечение массивов: 1 2 3 4 5"));
}

void MyArrayTest::testEmptyArray()
{
    myArray array;
    QTextEdit textEdit;

    array.task1(&textEdit);
    QVERIFY(textEdit.toPlainText().contains("Массив пуст"));

    array.task2(&textEdit);
    QVERIFY(textEdit.toPlainText().contains("Массив пуст"));

    array.task3(&textEdit);
    QVERIFY(textEdit.toPlainText().contains("Массив пуст"));

    array.task4(&textEdit);
    QVERIFY(textEdit.toPlainText().contains("Один из массивов пуст"));
}

void MyArrayTest::testSingleElementArray()
{
    myArray array;
    array.fillFromLine("42");

    QCOMPARE(array.getSize(), 1);
    QCOMPARE(array.getElementAt(0), 42);

    QTextEdit textEdit;

    array.task1(&textEdit);
    QString result = textEdit.toPlainText();
    QVERIFY(result.contains("Локальные минимумы (позиции):") && result.contains("Количество: 0"));
    QVERIFY(result.contains("Локальные максимумы (позиции):") && result.contains("Количество: 0"));
}

void MyArrayTest::testNegativeNumbers()
{
    myArray array;
    array.fillFromLine("-5 -3 -8 -1 -10");

    QCOMPARE(array.getSize(), 5);
    QCOMPARE(array.getElementAt(0), -5);
    QCOMPARE(array.getElementAt(2), -8);

    QTextEdit textEdit;

    array.task1(&textEdit);
    QString result = textEdit.toPlainText();
    QVERIFY(result.contains("Локальные минимумы (позиции): 2 4"));
    QVERIFY(result.contains("Локальные максимумы (позиции): 1 3"));
}

QTEST_MAIN(MyArrayTest)
#include "tst_myarraytest.moc"
