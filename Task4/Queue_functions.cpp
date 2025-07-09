#include "Stack_Queue_List_header.h"
#include <QTextStream>
#include <QMap>
#include <QFile>

template <typename T> class Queue {
private:
    class Node {
    public:
        Node* pNext;
        Node* pPrev;
        T data;
        Node(T data = T(), Node* pNext = nullptr, Node* pPrev = nullptr) {
            this->data = data;
            this->pNext = pNext;
            this->pPrev = pPrev;
        }
    };
    int queue_size;
    Node* front;
    Node* back;
public:
    Queue() : queue_size(0), front(nullptr), back(nullptr) {}
    ~Queue() { clear(); }

    T& peek_front() { return front->data; }
    T& peek_back() { return back->data; }

    void push_back(T data) {
        Node* newnode = new Node(data);
        if (back == nullptr) {
            front = back = newnode;
        } else {
            back->pPrev = newnode;
            newnode->pNext = back;
            back = newnode;
        }
        queue_size++;
    }

    void pop_back() {
        if (back == nullptr) return;
        Node* temp = back;
        back = back->pNext;
        if (back != nullptr)
            back->pPrev = nullptr;
        else
            front = nullptr;
        delete temp;
        queue_size--;
    }

    void push_front(T data) {
        Node* newnode = new Node(data);
        if (front == nullptr) {
            front = back = newnode;
        } else {
            front->pNext = newnode;
            newnode->pPrev = front;
            front = newnode;
        }
        queue_size++;
    }

    void pop_front() {
        if (front == nullptr) return;
        Node* temp = front;
        front = front->pPrev;
        if (front != nullptr)
            front->pNext = nullptr;
        else
            back = nullptr;
        delete temp;
        queue_size--;
    }

    void clear() {
        while (back != nullptr) {
            pop_back();
        }
    }
    int getSize() const { return queue_size; }
    bool empty() const { return queue_size == 0; }
};
void findCustomersNumber(
    int n, int m, int k, int X, int t,
    int uc1, int pc1, int uc2, int pc2,
    QPlainTextEdit* target)
{
    if (k <= 0 || n < 0 || m < 0 || t <= 0 || uc1 < 0 || pc1 < 0 || uc2 < 0 || pc2 < 0) {
        target->appendPlainText("Ошибка: некорректные параметры (k > 0, все значения >= 0, t > 0)!");
        return;
    }
    if (X > t) {
        target->appendPlainText("Внимание: время поломки первой кассы больше времени до обеда, никто не будет обслужен!");
        return;
    }

    Queue<QPair<int, int>> queue1, queue2;

    int total_time = 0;
    int served_buyers_1 = 0;
    int buyer_number1 = 1;
    int buyer_number2 = 1;

    while (total_time < t) {
        if (total_time % k == 0) {
            for (int i = 0; i < n; ++i)
                queue1.push_back(qMakePair(buyer_number1++, 1));
            for (int i = 0; i < m; ++i)
                queue2.push_back(qMakePair(buyer_number2++, 1));
        }

        bool serviced = false;

        if (total_time >= X && !queue1.empty()) {
            QPair<int, int> buyer = queue1.peek_front();
            int service_time = buyer.second * uc1 + pc1;
            if (total_time + service_time <= t) {
                total_time += service_time;
                served_buyers_1++;
                target->appendPlainText(
                    QString("Первая касса обслужила покупателя %1 (время: %2 сек)")
                        .arg(buyer.first).arg(total_time));
                queue1.pop_front();
                serviced = true;
            }
        }
        if (!serviced && !queue2.empty()) {
            QPair<int, int> buyer = queue2.peek_front();
            int service_time = buyer.second * uc2 + pc2;
            if (total_time + service_time <= t) {
                total_time += service_time;
                queue2.pop_front();
                serviced = true;
            }
        }
        if (!serviced)
            total_time++;
    }

    QString result = QString("Количество обслуженных покупателей на первой кассе: %1").arg(served_buyers_1);
    target->appendPlainText(result);

    QFile outputFile("Result.txt");
    if (outputFile.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream fout(&outputFile);
        fout << result << '\n';
        outputFile.close();
    }
}
