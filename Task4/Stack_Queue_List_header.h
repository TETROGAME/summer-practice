#ifndef STACK_QUEUE_LIST_HEADER_H
#define STACK_QUEUE_LIST_HEADER_H
#include <QRegularExpression>
#include <QPlainTextEdit>
#include <QMessageBox>
#include <QString>
#include <QFile>
template <typename T> class Stack;
void changeThirds(const QString& line, QPlainTextEdit* target);
void convertLine(const QString& line);
void reversePolish(const QString& inputLine, QPlainTextEdit* target);

template <typename T> class Queue;
void findCustomersNumber(
    int n, int m, int k, int X, int t,
    int uc1, int pc1, int uc2, int pc2,
    QPlainTextEdit* target);

template <typename T> class List;
void Josephus(int m, QPlainTextEdit* target, QString& line);
void swapThirds(const QString& line, QPlainTextEdit* target);


#endif // STACK_QUEUE_LIST_HEADER_H
