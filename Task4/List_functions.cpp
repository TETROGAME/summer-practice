#include "Stack_Queue_List_header.h"
#include <QTextStream>
#include <QFile>
#include <stdexcept>

template <typename T> class List {
private:
    struct Node {
        T value;
        Node* next;
        Node* prev;
        Node(T val) : value(val), next(nullptr), prev(nullptr) {}
    };
    Node* head;
    Node* tail;
    size_t size;

public:
    class Iterator {
    public:
        Node* current;
        Iterator(Node* node) : current(node) {}
        T& operator*() { return current->value; }
        Iterator& operator++() { current = current->next; return *this; }
        Iterator& operator--() { current = current->prev; return *this; }
        bool operator==(const Iterator& other) const { return current == other.current; }
        bool operator!=(const Iterator& other) const { return current != other.current; }
    };

    List() : head(nullptr), tail(nullptr), size(0) {}
    ~List() { clear(); }

    List& operator=(const List& other) {
        if (this != &other) {
            clear();
            for (Iterator it = other.begin(); it != other.end(); ++it) {
                push_back(*it);
            }
        }
        return *this;
    }

    void push_back(T val) {
        Node* newNode = new Node(val);
        if (size == 0) {
            head = tail = newNode;
        }
        else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        size++;
    }

    void push_front(T val) {
        Node* newNode = new Node(val);
        if (size == 0) {
            head = tail = newNode;
        }
        else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        size++;
    }

    void pop_back() {
        if (size == 0) return;
        if (size == 1) {
            delete head;
            head = tail = nullptr;
        }
        else {
            Node* temp = tail;
            tail = tail->prev;
            tail->next = nullptr;
            delete temp;
        }
        size--;
    }

    void pop_front() {
        if (size == 0) return;
        if (size == 1) {
            delete head;
            head = tail = nullptr;
        }
        else {
            Node* temp = head;
            head = head->next;
            head->prev = nullptr;
            delete temp;
        }
        size--;
    }

    Iterator erase(Iterator it) {
        Node* node = it.current;
        if (node == nullptr) return end();
        Iterator nextIt(node->next);
        if (node->prev) {
            node->prev->next = node->next;
        }
        else {
            head = node->next;
        }
        if (node->next) {
            node->next->prev = node->prev;
        }
        else {
            tail = node->prev;
        }
        delete node;
        size--;
        return nextIt;
    }

    void clear() {
        while (head) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
        tail = nullptr;
        size = 0;
    }

    T& operator[](size_t index) {
        if (index >= size) throw std::out_of_range("Index out of range");
        Node* current = head;
        for (size_t i = 0; i < index; i++) {
            current = current->next;
        }
        return current->value;
    }

    Iterator begin() { return Iterator(head); }
    Iterator end() { return Iterator(nullptr); }

    size_t getSize() const { return size; }
    bool empty() const { return size == 0; }

    Iterator front() { return head; }
    Iterator back() { return tail; }
};

// void findLastStanding(QPlainTextEdit* target, int size, int m) {
//     if (size <= 0) {
//         QMessageBox::warning(nullptr, "Ошибка", "Размер должен быть положительным");
//         return;
//     }
//     if (m <= 0) {
//         QMessageBox::warning(nullptr, "Ошибка", "m должно быть положительным");
//         return;
//     }

//     List<int> list;
//     for (int i = 0; i < size; i++) {
//         list.push_back(i + 1);
//     }

//     auto it = list.begin();
//     while (list.getSize() > 1) {
//         for (int i = 0; i < m - 1; ++i) {
//             ++it;
//             if (it == list.end()) it = list.begin();
//         }
//         auto next_it = list.erase(it);
//         it = (next_it == list.end()) ? list.begin() : next_it;

//         QString line = "Оставшиеся участники: ";
//         for (auto val = list.begin(); val != list.end(); ++val) {
//             line += QString::number(*val) + ' ';
//         }
//         target->appendPlainText(line.trimmed());
//     }
//     QString result = QString("Оставшийся участник: %1").arg(*list.begin());
//     target->appendPlainText(result);
// }
// void Josephus(QPlainTextEdit* target, int size, int m) {
//     if (size <= 0) {
//         QMessageBox::warning(nullptr, "Ошибка", "Размер должен быть положительным");
//         return;
//     }
//     if (m <= 0) {
//         QMessageBox::warning(nullptr, "Ошибка", "m должно быть положительным");
//         return;
//     }

//     List<int> list;
//     for (int i = 0; i < size; i++) {
//         list.push_back(i + 1);
//     }
//     QString init = "Исходная расстановка участников:";
//     for (auto it = list.begin(); it != list.end(); ++it) {
//         init += ' ' + QString::number(*it);
//     }
//     target->appendPlainText(init);

//     auto it = list.begin();
//     while (list.getSize() > 1) {
//         for (int i = 0; i < m - 1; ++i) {
//             ++it;
//             if (it == list.end()) it = list.begin();
//         }
//         auto next_it = list.erase(it);
//         it = (next_it == list.end()) ? list.begin() : next_it;

//         QString line = "Оставшиеся участники: ";
//         for (auto val = list.begin(); val != list.end(); ++val) {
//             line += QString::number(*val) + ' ';
//         }
//         target->appendPlainText(line.trimmed());
//     }
//     QString result = QString("Оставшийся участник: %1").arg(*list.begin());
//     target->appendPlainText(result);
// }
// void swapThirds(QPlainTextEdit* target, const QList<int>& inputNumbers) {
//     if (inputNumbers.size() < 3) {
//         QMessageBox::warning(nullptr, "Ошибка", "Недостаточно элементов для операции");
//         return;
//     }
//     List<int> numbers;
//     for (int value : inputNumbers) {
//         numbers.push_back(value);
//     }
//     QString original = "Исходный list:";
//     for (auto it = numbers.begin(); it != numbers.end(); ++it) {
//         original += ' ' + QString::number(*it);
//     }
//     target->appendPlainText(original);

//     auto itBack = numbers.begin();
//     auto itFront = numbers.begin();
//     ++itFront; ++itFront;
//     for (size_t i = 0; i < numbers.getSize() - 2; i++) {
//         auto temp = *itBack;
//         *itBack = *itFront;
//         *itFront = temp;
//         ++itBack;
//         ++itFront;
//         QString line;
//         for (auto it = numbers.begin(); it != numbers.end(); ++it) {
//             line += QString::number(*it) + ' ';
//         }
//         target->appendPlainText(line.trimmed());
//     }
//     target->appendPlainText("Операция завершена.");
// }

// Вспомогательная функция: преобразовать строку в List<int>
void convertLineToList(const QString& line, List<int>& list) {
    qsizetype start = 0;
    qsizetype end = line.indexOf(' ');
    while (end != -1) {
        list.push_back(line.sliced(start, end - start).toInt());
        start = end + 1;
        end = line.indexOf(' ', start);
    }
    if (start != line.size())
        list.push_back(line.sliced(start, line.size() - start).toInt());
}
void convertLineToList(const QString& line, List<QString>& list) {
    qsizetype start = 0;
    qsizetype end = line.indexOf(' ');
    while (end != -1) {
        list.push_back(line.sliced(start, end - start));
        start = end + 1;
        end = line.indexOf(' ', start);
    }
    if (start != line.size())
        list.push_back(line.sliced(start, line.size() - start));
}

void swapThirds(const QString& line, QPlainTextEdit* target) {
    List<int> list;
    convertLineToList(line, list);

    if (list.getSize() < 3) {
        QMessageBox::warning(nullptr, "Ошибка", "В списке должно быть минимум 3 элемента");
        return;
    }

    auto it = list.begin();
    ++it;

    int step = 1;
    while (true) {
        auto center = it;
        auto left = center;
        auto right = center;
        --left;
        ++right;

        if (left == list.end() || right == list.end())
            break;

        int temp = *left;
        *left = *right;
        *right = temp;

        QString state;
        for (auto jt = list.begin(); jt != list.end(); ++jt)
            state += QString::number(*jt) + ' ';
        target->appendPlainText(QString("Шаг %1: %2").arg(step).arg(state.trimmed()));

        ++it;
        ++step;

        auto check_left = it;
        auto check_right = it;
        if (it == list.end()) break;
        if (--check_left == list.end()) break;
        ++check_right;
        if (check_right == list.end()) break;
    }
}

void Josephus(int m, QPlainTextEdit* target, QString& line) {
    List<QString> people;
    convertLineToList(line, people);

    if (people.getSize() <= 0) {
        QMessageBox::warning(nullptr, "Ошибка", "Размер должен быть положительным");
        return;
    }
    if (m <= 0) {
        QMessageBox::warning(nullptr, "Ошибка", "m должно быть положительным");
        return;
    }
    auto it = people.begin();
    while (people.getSize() > 1) {
        for (int i = 0; i < m - 1; ++i) {
            ++it;
            if (it == people.end()) it = people.begin();
        }
        auto next_it = people.erase(it);
        it = (next_it == people.end()) ? people.begin() : next_it;

        QString line = "Оставшиеся: ";
        for (auto p = people.begin(); p != people.end(); ++p) {
            line += *p + ' ';
        }
        target->appendPlainText(line.trimmed());
    }
    QString result = QString("Оставшийся человек: %1").arg(*people.begin());
    target->appendPlainText(result);
}
