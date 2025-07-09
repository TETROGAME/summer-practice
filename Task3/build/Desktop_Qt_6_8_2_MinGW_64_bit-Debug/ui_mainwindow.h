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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *engrus_verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *engrusFileLineEdit;
    QPushButton *engrusFilePushButton;
    QTableWidget *engrusTableWidget;
    QVBoxLayout *engbelrus_verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *engbelrusFileLineEdit;
    QPushButton *engbelrusFilePushButton;
    QTableWidget *engbelrusTableWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(617, 273);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        engrus_verticalLayout = new QVBoxLayout();
        engrus_verticalLayout->setObjectName("engrus_verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        engrusFileLineEdit = new QLineEdit(centralwidget);
        engrusFileLineEdit->setObjectName("engrusFileLineEdit");

        horizontalLayout_2->addWidget(engrusFileLineEdit);

        engrusFilePushButton = new QPushButton(centralwidget);
        engrusFilePushButton->setObjectName("engrusFilePushButton");

        horizontalLayout_2->addWidget(engrusFilePushButton);


        engrus_verticalLayout->addLayout(horizontalLayout_2);

        engrusTableWidget = new QTableWidget(centralwidget);
        engrusTableWidget->setObjectName("engrusTableWidget");
        engrusTableWidget->setColumnCount(0);

        engrus_verticalLayout->addWidget(engrusTableWidget);


        horizontalLayout->addLayout(engrus_verticalLayout);

        engbelrus_verticalLayout = new QVBoxLayout();
        engbelrus_verticalLayout->setObjectName("engbelrus_verticalLayout");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        engbelrusFileLineEdit = new QLineEdit(centralwidget);
        engbelrusFileLineEdit->setObjectName("engbelrusFileLineEdit");

        horizontalLayout_3->addWidget(engbelrusFileLineEdit);

        engbelrusFilePushButton = new QPushButton(centralwidget);
        engbelrusFilePushButton->setObjectName("engbelrusFilePushButton");

        horizontalLayout_3->addWidget(engbelrusFilePushButton);


        engbelrus_verticalLayout->addLayout(horizontalLayout_3);

        engbelrusTableWidget = new QTableWidget(centralwidget);
        engbelrusTableWidget->setObjectName("engbelrusTableWidget");

        engbelrus_verticalLayout->addWidget(engbelrusTableWidget);


        horizontalLayout->addLayout(engbelrus_verticalLayout);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 3);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 617, 17));
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
        engrusFileLineEdit->setInputMask(QString());
        engrusFileLineEdit->setText(QCoreApplication::translate("MainWindow", "engrus_input.txt", nullptr));
        engrusFileLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \321\204\320\260\320\271\320\273\320\260 \320\260\320\275\320\263-\321\200\321\203\321\201 \321\201\320\273\320\276\320\262\320\260", nullptr));
        engrusFilePushButton->setText(QCoreApplication::translate("MainWindow", "\320\241\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        engbelrusFileLineEdit->setText(QCoreApplication::translate("MainWindow", "engbelrus_input.txt", nullptr));
        engbelrusFileLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \321\204\320\260\320\271\320\273\320\260 \320\260\320\275\320\263-\320\261\320\265\320\273-\321\200\321\203\321\201 \321\201\320\273\320\276\320\262\320\260", nullptr));
        engbelrusFilePushButton->setText(QCoreApplication::translate("MainWindow", "\320\241\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
