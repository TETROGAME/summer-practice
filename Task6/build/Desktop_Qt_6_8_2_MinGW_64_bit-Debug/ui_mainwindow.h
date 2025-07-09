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
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *saveAction;
    QAction *openAction;
    QAction *rectangleAction;
    QAction *ellipseAction;
    QAction *rhombusAction;
    QAction *outlineColorAction;
    QAction *fillingColorAction;
    QAction *noFillingAction;
    QAction *onlyFillingAction;
    QAction *outlineWithFillingAction;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGraphicsView *canvas;
    QMenuBar *menubar;
    QMenu *fileMenu;
    QMenu *figureMenu;
    QMenu *colorMenu;
    QMenu *fillingStyleMenu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(621, 487);
        action = new QAction(MainWindow);
        action->setObjectName("action");
        saveAction = new QAction(MainWindow);
        saveAction->setObjectName("saveAction");
        openAction = new QAction(MainWindow);
        openAction->setObjectName("openAction");
        rectangleAction = new QAction(MainWindow);
        rectangleAction->setObjectName("rectangleAction");
        ellipseAction = new QAction(MainWindow);
        ellipseAction->setObjectName("ellipseAction");
        rhombusAction = new QAction(MainWindow);
        rhombusAction->setObjectName("rhombusAction");
        outlineColorAction = new QAction(MainWindow);
        outlineColorAction->setObjectName("outlineColorAction");
        fillingColorAction = new QAction(MainWindow);
        fillingColorAction->setObjectName("fillingColorAction");
        noFillingAction = new QAction(MainWindow);
        noFillingAction->setObjectName("noFillingAction");
        onlyFillingAction = new QAction(MainWindow);
        onlyFillingAction->setObjectName("onlyFillingAction");
        outlineWithFillingAction = new QAction(MainWindow);
        outlineWithFillingAction->setObjectName("outlineWithFillingAction");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        canvas = new QGraphicsView(centralwidget);
        canvas->setObjectName("canvas");

        verticalLayout->addWidget(canvas);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 621, 17));
        fileMenu = new QMenu(menubar);
        fileMenu->setObjectName("fileMenu");
        figureMenu = new QMenu(menubar);
        figureMenu->setObjectName("figureMenu");
        colorMenu = new QMenu(menubar);
        colorMenu->setObjectName("colorMenu");
        fillingStyleMenu = new QMenu(menubar);
        fillingStyleMenu->setObjectName("fillingStyleMenu");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(fileMenu->menuAction());
        menubar->addAction(figureMenu->menuAction());
        menubar->addAction(colorMenu->menuAction());
        menubar->addAction(fillingStyleMenu->menuAction());
        fileMenu->addAction(saveAction);
        fileMenu->addAction(openAction);
        figureMenu->addAction(rectangleAction);
        figureMenu->addAction(ellipseAction);
        figureMenu->addAction(rhombusAction);
        colorMenu->addAction(outlineColorAction);
        colorMenu->addAction(fillingColorAction);
        fillingStyleMenu->addAction(noFillingAction);
        fillingStyleMenu->addAction(onlyFillingAction);
        fillingStyleMenu->addAction(outlineWithFillingAction);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\320\244\320\270\320\263\321\203\321\200\320\260", nullptr));
        saveAction->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        openAction->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", nullptr));
        rectangleAction->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\321\217\320\274\320\276\321\203\320\263\320\276\320\273\321\214\320\275\320\270\320\272", nullptr));
        ellipseAction->setText(QCoreApplication::translate("MainWindow", "\320\255\320\273\320\273\320\270\320\277\321\201", nullptr));
        rhombusAction->setText(QCoreApplication::translate("MainWindow", "\320\240\320\276\320\274\320\261", nullptr));
        outlineColorAction->setText(QCoreApplication::translate("MainWindow", "\320\246\320\262\320\265\321\202 \320\272\320\276\320\275\321\202\321\203\321\200\320\260", nullptr));
        fillingColorAction->setText(QCoreApplication::translate("MainWindow", "\320\246\320\262\320\265\321\202 \320\267\320\260\320\273\320\270\320\262\320\272\320\270", nullptr));
        noFillingAction->setText(QCoreApplication::translate("MainWindow", "\320\221\320\265\320\267 \320\267\320\260\320\273\320\270\320\262\320\272\320\270", nullptr));
        onlyFillingAction->setText(QCoreApplication::translate("MainWindow", "\320\242\320\276\320\273\321\214\320\272\320\276 \320\267\320\260\320\273\320\270\320\262\320\272\320\260", nullptr));
        outlineWithFillingAction->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\275\321\202\321\203\321\200 \320\270 \320\267\320\260\320\273\320\270\320\262\320\272\320\260", nullptr));
        fileMenu->setTitle(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", nullptr));
        figureMenu->setTitle(QCoreApplication::translate("MainWindow", "\320\244\320\270\320\263\321\203\321\200\320\260", nullptr));
        colorMenu->setTitle(QCoreApplication::translate("MainWindow", "\320\246\320\262\320\265\321\202", nullptr));
        fillingStyleMenu->setTitle(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\270\320\273\321\214 \320\267\320\260\320\273\320\270\320\262\320\272\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
