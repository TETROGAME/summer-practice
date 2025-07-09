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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QPushButton *stackPushButton;
    QPushButton *listPushButton;
    QPushButton *queuePushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(352, 117);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        stackPushButton = new QPushButton(centralwidget);
        stackPushButton->setObjectName("stackPushButton");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(stackPushButton->sizePolicy().hasHeightForWidth());
        stackPushButton->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(stackPushButton);

        listPushButton = new QPushButton(centralwidget);
        listPushButton->setObjectName("listPushButton");
        sizePolicy1.setHeightForWidth(listPushButton->sizePolicy().hasHeightForWidth());
        listPushButton->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(listPushButton);

        queuePushButton = new QPushButton(centralwidget);
        queuePushButton->setObjectName("queuePushButton");
        sizePolicy1.setHeightForWidth(queuePushButton->sizePolicy().hasHeightForWidth());
        queuePushButton->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(queuePushButton);


        verticalLayout->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 352, 17));
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
        label->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \321\201\321\202\321\200\321\203\320\272\321\202\321\203\321\200\321\203 \320\264\320\260\320\275\320\275\321\213\321\205 \320\264\320\273\321\217 \321\200\320\265\321\210\320\265\320\275\320\270\321\217 \320\267\320\260\320\264\320\260\321\207", nullptr));
        stackPushButton->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\265\320\272", nullptr));
        listPushButton->setText(QCoreApplication::translate("MainWindow", "\320\241\320\277\320\270\321\201\320\276\320\272", nullptr));
        queuePushButton->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\265\321\200\320\265\320\264\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
