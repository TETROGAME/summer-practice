#include "Stack_Queue_List_header.h"
#include <QRegularExpression>
#include <QTextStream>
#include <QFile>
#include <QString>
//Класс стек
template <typename T> class Stack {
public:
    Stack() {
        stack_size = 0;
        head = nullptr;
    }
    int getSize() { return stack_size; }
    T& top() { return head->data; }
    void push(T data) {
        Node* newNode = new Node(data);
        newNode->pNext = head;
        head = newNode;
        stack_size++;							// Увеличиваем размер списка
    }
    void pop()
    {
        Node* temp = head;			// Создаем временный объект, указывающий на начало списка
        head = head->pNext;				// Делаем началом списка второй элемент
        delete temp;					// Удаляем бывший первый элемент по временному указателю
        stack_size--;					// Уменьшаем размер списка
    }
    void clear()
    {
        while (head != nullptr) { pop(); } // Удаление элементов списка, испульзуется в деструкторе
    }
    bool empty() { return head == nullptr; }
    ~Stack() {
        clear();
    }

private:
    class Node {
    public:
        Node* pNext;
        T data;
        Node(T data = T(), Node* pNext = nullptr) { //T data = T() если в конструктор не передаются данные, то вызывается конструктор по умолчанию для типа данных узла
            this->data = data;
            this->pNext = pNext;
        }
    };
    int stack_size;
    Node* head;
};
//Задачи на стек
void convertLine(const QString& line, Stack<int>& temp_stack){
    qsizetype start = 0;
    qsizetype end = line.indexOf(' ');
    while(end != -1){
        temp_stack.push(line.sliced(start, end - start).toInt());
        start = end + 1;
        end = line.indexOf(' ', start);
    }
    if (start != line.size()) temp_stack.push(line.sliced(start, line.size() - start).toInt());
}
void changeThirds(const QString& line, QPlainTextEdit* target) {
    Stack<int> input, temp, output;

    convertLine(line, input);

    while (!input.empty()) {
        temp.push(input.top());
        input.pop();
    }

    while (!temp.empty()) {
        input.push(temp.top());
        temp.pop();
    }

    while (input.getSize() >= 3) {
        int first = input.top(); input.pop();
        int second = input.top(); input.pop();
        int third = input.top(); input.pop();

        int mod_second = second + first;
        int mod_third = third + second;

        output.push(mod_third);
        output.push(mod_second);
        output.push(first);

        if (input.getSize() > 0) {
            input.push(third);
        }
    }

    while (!input.empty()) {
        output.push(input.top());
        input.pop();
    }

    while (!output.empty()) {
        temp.push(output.top());
        output.pop();
    }

    QString resultLine("");
    while (!temp.empty()) {
        resultLine.append(QString::number(temp.top())+' ');
        temp.pop();
    }
    target->appendPlainText(resultLine);
}
void reversePolish(const QString& inputLine, QPlainTextEdit* target){
    QString resultLine = "";
    Stack<QChar> symbols;
    Stack<int> Numbers;
    const QMap<QChar, int> priority = { {'+', 1}, {'-', 1}, {'*', 2}, {'/', 2} };
    for(const QChar& ch : inputLine){
        if(ch.isDigit()) {
            resultLine.append(ch);
        }
        else {
            if(symbols.empty()) {
                symbols.push(ch);
            }
            else {
                if(priority[symbols.top()] < priority[ch] && ch != '(' && ch != ')'){
                    symbols.push(ch);
                }
                else if (priority[symbols.top()] >= priority[ch] && ch != '(' && ch != ')'){
                    resultLine.append(symbols.top() + ' ');
                    symbols.pop();
                    symbols.push(ch);
                }
                else if (ch == '(') {
                    symbols.push(ch);
                }
                else if (ch == ')'){
                    while(symbols.top() != '('){
                        if (symbols.empty()) QMessageBox::warning(nullptr, "Ошибка!", "Неверно закрыты скобки!");
                        resultLine.append(symbols.top());
                        symbols.pop();
                    }
                    symbols.pop();
                }
            }
        }
    }
    while(!symbols.empty()){
        resultLine.append(symbols.top());
        symbols.pop();
    }
    target->appendPlainText(resultLine);
}
