/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *arrayInputHorizontalLayout;
    QLineEdit *arrayLineEdit;
    QPushButton *inputArrayPushButton;
    QTextEdit *arrayTextEdit;
    QHBoxLayout *solveButtonsHorizontalLayout;
    QPushButton *task1PushButton;
    QPushButton *task2PushButton;
    QPushButton *task3PushButton;
    QPushButton *task4PushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(407, 330);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        arrayInputHorizontalLayout = new QHBoxLayout();
        arrayInputHorizontalLayout->setObjectName("arrayInputHorizontalLayout");
        arrayLineEdit = new QLineEdit(centralwidget);
        arrayLineEdit->setObjectName("arrayLineEdit");

        arrayInputHorizontalLayout->addWidget(arrayLineEdit);

        inputArrayPushButton = new QPushButton(centralwidget);
        inputArrayPushButton->setObjectName("inputArrayPushButton");

        arrayInputHorizontalLayout->addWidget(inputArrayPushButton);


        verticalLayout->addLayout(arrayInputHorizontalLayout);

        arrayTextEdit = new QTextEdit(centralwidget);
        arrayTextEdit->setObjectName("arrayTextEdit");
        arrayTextEdit->setReadOnly(true);

        verticalLayout->addWidget(arrayTextEdit);

        solveButtonsHorizontalLayout = new QHBoxLayout();
        solveButtonsHorizontalLayout->setObjectName("solveButtonsHorizontalLayout");
        task1PushButton = new QPushButton(centralwidget);
        task1PushButton->setObjectName("task1PushButton");

        solveButtonsHorizontalLayout->addWidget(task1PushButton);

        task2PushButton = new QPushButton(centralwidget);
        task2PushButton->setObjectName("task2PushButton");

        solveButtonsHorizontalLayout->addWidget(task2PushButton);

        task3PushButton = new QPushButton(centralwidget);
        task3PushButton->setObjectName("task3PushButton");

        solveButtonsHorizontalLayout->addWidget(task3PushButton);

        task4PushButton = new QPushButton(centralwidget);
        task4PushButton->setObjectName("task4PushButton");

        solveButtonsHorizontalLayout->addWidget(task4PushButton);


        verticalLayout->addLayout(solveButtonsHorizontalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 407, 17));
        menubar->setDefaultUp(false);
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\321\207\320\260 1: \320\235\320\260\320\271\320\264\320\270\321\202\320\265 \321\207\320\270\321\201\320\273\320\260 \320\273\320\276\320\272\320\260\320\273\321\214\320\275\321\213\321\205 \320\274\320\270\320\275\320\270\320\274\321\203\320\274\320\276\320\262 \320\270 \320\274\320\260\320\272\321\201\320\270\320\274\321\203\320\274\320\276\320\262 \320\274\320\260\321\201\321\201\320\270\320\262\320\260  \n"
"\320\227\320\260\320\264\320\260\321\207\320\260 2: \320\237\321\200\320\265\320\276\320\261\321\200\320\260\320\267\321\203\320\271\321\202\320\265 \320\274\320\260\321\201\321\201\320\270\320\262, \321\200\320\260\321\201\321\210\320\270\321\200\320\270\320\262 \320\272\320\260\320\266\320\264\321\203\321\216 \321\201\320\265\321\200\320\270\321\216 \320\275\320\260 1 \321\215\320\273\320\265\320\274\320\265\320\275\321\202  \n"
"\320\227\320\260\320\264\320\260\321\207\320\260 3: \320\237\321\200\320\265\320\276\320\261\321\200\320\260\320\267\321\203\320\271\321\202"
                        "\320\265 \320\264\320\260\320\275\320\275\321\213\320\271 \320\274\320\260\321\201\321\201\320\270\320\262 \321\202\320\260\320\272, \321\207\321\202\320\276\320\261\321\213 \320\276\320\275 \321\201\320\276\320\264\320\265\321\200\320\266\320\260\320\273 \321\202\320\276\320\273\321\214\320\272\320\276 \321\201\320\276\320\262\320\265\321\200\321\210\320\265\320\275\320\275\321\213\320\265 \321\207\320\270\321\201\320\273\320\260  \n"
"\320\227\320\260\320\264\320\260\321\207\320\260 4: \320\235\320\260\320\271\320\264\320\270\321\202\320\265 \320\277\320\265\321\200\320\265\321\201\320\265\321\207\320\265\320\275\320\270\320\265 \320\264\320\262\321\203\321\205 \320\267\320\260\320\264\320\260\320\275\320\275\321\213\321\205 \320\274\320\260\321\201\321\201\320\270\320\262\320\276\320\262", nullptr));
        arrayLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\321\213 \320\274\320\260\321\201\321\201\320\270\320\262\320\260 \321\207\320\265\321\200\320\265\320\267 \320\277\321\200\320\276\320\261\320\265\320\273", nullptr));
        inputArrayPushButton->setText(QCoreApplication::translate("MainWindow", "\320\241\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        task1PushButton->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\321\207\320\260 1", nullptr));
        task2PushButton->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\321\207\320\260 2", nullptr));
        task3PushButton->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\321\207\320\260 3", nullptr));
        task4PushButton->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\321\207\320\260 4", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
