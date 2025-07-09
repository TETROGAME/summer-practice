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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *labelA;
    QLineEdit *lineEditA;
    QLabel *labelB;
    QLineEdit *lineEditB;
    QHBoxLayout *horizontalLayoutButtons;
    QPushButton *pushButtonTask1;
    QPushButton *pushButtonTask2;
    QPushButton *pushButtonTask3;
    QPushButton *pushButtonTask4;
    QPushButton *pushButtonInfo;
    QTextEdit *textEditOutput;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        labelA = new QLabel(centralwidget);
        labelA->setObjectName("labelA");

        formLayout->setWidget(0, QFormLayout::LabelRole, labelA);

        lineEditA = new QLineEdit(centralwidget);
        lineEditA->setObjectName("lineEditA");

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEditA);

        labelB = new QLabel(centralwidget);
        labelB->setObjectName("labelB");

        formLayout->setWidget(1, QFormLayout::LabelRole, labelB);

        lineEditB = new QLineEdit(centralwidget);
        lineEditB->setObjectName("lineEditB");

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEditB);


        verticalLayout->addLayout(formLayout);

        horizontalLayoutButtons = new QHBoxLayout();
        horizontalLayoutButtons->setObjectName("horizontalLayoutButtons");
        pushButtonTask1 = new QPushButton(centralwidget);
        pushButtonTask1->setObjectName("pushButtonTask1");

        horizontalLayoutButtons->addWidget(pushButtonTask1);

        pushButtonTask2 = new QPushButton(centralwidget);
        pushButtonTask2->setObjectName("pushButtonTask2");

        horizontalLayoutButtons->addWidget(pushButtonTask2);

        pushButtonTask3 = new QPushButton(centralwidget);
        pushButtonTask3->setObjectName("pushButtonTask3");

        horizontalLayoutButtons->addWidget(pushButtonTask3);

        pushButtonTask4 = new QPushButton(centralwidget);
        pushButtonTask4->setObjectName("pushButtonTask4");

        horizontalLayoutButtons->addWidget(pushButtonTask4);

        pushButtonInfo = new QPushButton(centralwidget);
        pushButtonInfo->setObjectName("pushButtonInfo");

        horizontalLayoutButtons->addWidget(pushButtonInfo);


        verticalLayout->addLayout(horizontalLayoutButtons);

        textEditOutput = new QTextEdit(centralwidget);
        textEditOutput->setObjectName("textEditOutput");
        textEditOutput->setReadOnly(true);

        verticalLayout->addWidget(textEditOutput);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\321\207\320\270 myNumber", nullptr));
        labelA->setText(QCoreApplication::translate("MainWindow", "\320\247\320\270\321\201\320\273\320\276 a:", nullptr));
        labelB->setText(QCoreApplication::translate("MainWindow", "\320\247\320\270\321\201\320\273\320\276 b:", nullptr));
        pushButtonTask1->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\321\207\320\260 1", nullptr));
        pushButtonTask2->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\321\207\320\260 2", nullptr));
        pushButtonTask3->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\321\207\320\260 3", nullptr));
        pushButtonTask4->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\321\207\320\260 4", nullptr));
        pushButtonInfo->setText(QCoreApplication::translate("MainWindow", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
