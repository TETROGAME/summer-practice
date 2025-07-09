/********************************************************************************
** Form generated from reading UI file 'listtaskwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTTASKWINDOW_H
#define UI_LISTTASKWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ListTaskWindow
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *mainTabWidget;
    QWidget *firstTaskTab;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QTabWidget *InputFirstTaskTabWidget;
    QWidget *josephusManualTab;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *inputManualJosephusLineEdit;
    QHBoxLayout *horizontalLayout;
    QLabel *josephusManualLabel;
    QSpinBox *josephusManualSpinBox;
    QSpacerItem *verticalSpacer;
    QPushButton *inputJosephusManualPushButton;
    QVBoxLayout *verticalLayout_4;
    QPlainTextEdit *outputJosephusManualPlainTextEdit;
    QPushButton *clearJosephusManualPushButton;
    QWidget *josephusFileTab;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_6;
    QLineEdit *inputFileJosephusLineEdit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *josephusFileLabel;
    QSpinBox *josephusFileSpinBox;
    QSpacerItem *verticalSpacer_2;
    QPushButton *inputJosephusFilePushButton;
    QVBoxLayout *verticalLayout_5;
    QPlainTextEdit *outputJosephusFilePlainTextEdit;
    QPushButton *clearJosephusFilePushButton;
    QWidget *SecondTaskTab;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_2;
    QTabWidget *inputSecondTaskTabWidget;
    QWidget *swapManualTab;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *inputSwapManualLineEdit;
    QPushButton *inputSwapManualPushButton;
    QPlainTextEdit *outputSwapManualPlainTextEdit;
    QPushButton *cleanSwapManualPushButton;
    QWidget *swapFileTab;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_8;
    QLineEdit *inputSwapFileLineEdit;
    QPushButton *inputSwapFilePushButton;
    QHBoxLayout *horizontalLayout_9;
    QPlainTextEdit *inputSwapFilePlainTextEdit;
    QVBoxLayout *verticalLayout_9;
    QPlainTextEdit *outputSwapFilePlainTextEdit;
    QPushButton *clearSwapFilePushButton;

    void setupUi(QDialog *ListTaskWindow)
    {
        if (ListTaskWindow->objectName().isEmpty())
            ListTaskWindow->setObjectName("ListTaskWindow");
        ListTaskWindow->resize(400, 300);
        verticalLayout = new QVBoxLayout(ListTaskWindow);
        verticalLayout->setObjectName("verticalLayout");
        mainTabWidget = new QTabWidget(ListTaskWindow);
        mainTabWidget->setObjectName("mainTabWidget");
        firstTaskTab = new QWidget();
        firstTaskTab->setObjectName("firstTaskTab");
        verticalLayout_2 = new QVBoxLayout(firstTaskTab);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(firstTaskTab);
        label->setObjectName("label");
        label->setWordWrap(true);

        verticalLayout_2->addWidget(label);

        InputFirstTaskTabWidget = new QTabWidget(firstTaskTab);
        InputFirstTaskTabWidget->setObjectName("InputFirstTaskTabWidget");
        josephusManualTab = new QWidget();
        josephusManualTab->setObjectName("josephusManualTab");
        horizontalLayout_3 = new QHBoxLayout(josephusManualTab);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        inputManualJosephusLineEdit = new QLineEdit(josephusManualTab);
        inputManualJosephusLineEdit->setObjectName("inputManualJosephusLineEdit");

        verticalLayout_3->addWidget(inputManualJosephusLineEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        josephusManualLabel = new QLabel(josephusManualTab);
        josephusManualLabel->setObjectName("josephusManualLabel");

        horizontalLayout->addWidget(josephusManualLabel);

        josephusManualSpinBox = new QSpinBox(josephusManualTab);
        josephusManualSpinBox->setObjectName("josephusManualSpinBox");

        horizontalLayout->addWidget(josephusManualSpinBox);


        verticalLayout_3->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        inputJosephusManualPushButton = new QPushButton(josephusManualTab);
        inputJosephusManualPushButton->setObjectName("inputJosephusManualPushButton");

        verticalLayout_3->addWidget(inputJosephusManualPushButton);


        horizontalLayout_2->addLayout(verticalLayout_3);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        outputJosephusManualPlainTextEdit = new QPlainTextEdit(josephusManualTab);
        outputJosephusManualPlainTextEdit->setObjectName("outputJosephusManualPlainTextEdit");
        outputJosephusManualPlainTextEdit->setReadOnly(true);

        verticalLayout_4->addWidget(outputJosephusManualPlainTextEdit);

        clearJosephusManualPushButton = new QPushButton(josephusManualTab);
        clearJosephusManualPushButton->setObjectName("clearJosephusManualPushButton");

        verticalLayout_4->addWidget(clearJosephusManualPushButton);


        horizontalLayout_3->addLayout(verticalLayout_4);

        InputFirstTaskTabWidget->addTab(josephusManualTab, QString());
        josephusFileTab = new QWidget();
        josephusFileTab->setObjectName("josephusFileTab");
        horizontalLayout_6 = new QHBoxLayout(josephusFileTab);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        inputFileJosephusLineEdit = new QLineEdit(josephusFileTab);
        inputFileJosephusLineEdit->setObjectName("inputFileJosephusLineEdit");

        verticalLayout_6->addWidget(inputFileJosephusLineEdit);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        josephusFileLabel = new QLabel(josephusFileTab);
        josephusFileLabel->setObjectName("josephusFileLabel");

        horizontalLayout_5->addWidget(josephusFileLabel);

        josephusFileSpinBox = new QSpinBox(josephusFileTab);
        josephusFileSpinBox->setObjectName("josephusFileSpinBox");

        horizontalLayout_5->addWidget(josephusFileSpinBox);


        verticalLayout_6->addLayout(horizontalLayout_5);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);

        inputJosephusFilePushButton = new QPushButton(josephusFileTab);
        inputJosephusFilePushButton->setObjectName("inputJosephusFilePushButton");

        verticalLayout_6->addWidget(inputJosephusFilePushButton);


        horizontalLayout_4->addLayout(verticalLayout_6);


        horizontalLayout_6->addLayout(horizontalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        outputJosephusFilePlainTextEdit = new QPlainTextEdit(josephusFileTab);
        outputJosephusFilePlainTextEdit->setObjectName("outputJosephusFilePlainTextEdit");
        outputJosephusFilePlainTextEdit->setReadOnly(true);

        verticalLayout_5->addWidget(outputJosephusFilePlainTextEdit);

        clearJosephusFilePushButton = new QPushButton(josephusFileTab);
        clearJosephusFilePushButton->setObjectName("clearJosephusFilePushButton");

        verticalLayout_5->addWidget(clearJosephusFilePushButton);


        horizontalLayout_6->addLayout(verticalLayout_5);

        InputFirstTaskTabWidget->addTab(josephusFileTab, QString());

        verticalLayout_2->addWidget(InputFirstTaskTabWidget);

        mainTabWidget->addTab(firstTaskTab, QString());
        SecondTaskTab = new QWidget();
        SecondTaskTab->setObjectName("SecondTaskTab");
        verticalLayout_7 = new QVBoxLayout(SecondTaskTab);
        verticalLayout_7->setObjectName("verticalLayout_7");
        label_2 = new QLabel(SecondTaskTab);
        label_2->setObjectName("label_2");
        label_2->setWordWrap(true);

        verticalLayout_7->addWidget(label_2);

        inputSecondTaskTabWidget = new QTabWidget(SecondTaskTab);
        inputSecondTaskTabWidget->setObjectName("inputSecondTaskTabWidget");
        swapManualTab = new QWidget();
        swapManualTab->setObjectName("swapManualTab");
        verticalLayout_8 = new QVBoxLayout(swapManualTab);
        verticalLayout_8->setObjectName("verticalLayout_8");
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        inputSwapManualLineEdit = new QLineEdit(swapManualTab);
        inputSwapManualLineEdit->setObjectName("inputSwapManualLineEdit");

        horizontalLayout_7->addWidget(inputSwapManualLineEdit);

        inputSwapManualPushButton = new QPushButton(swapManualTab);
        inputSwapManualPushButton->setObjectName("inputSwapManualPushButton");

        horizontalLayout_7->addWidget(inputSwapManualPushButton);


        verticalLayout_8->addLayout(horizontalLayout_7);

        outputSwapManualPlainTextEdit = new QPlainTextEdit(swapManualTab);
        outputSwapManualPlainTextEdit->setObjectName("outputSwapManualPlainTextEdit");

        verticalLayout_8->addWidget(outputSwapManualPlainTextEdit);

        cleanSwapManualPushButton = new QPushButton(swapManualTab);
        cleanSwapManualPushButton->setObjectName("cleanSwapManualPushButton");

        verticalLayout_8->addWidget(cleanSwapManualPushButton);

        inputSecondTaskTabWidget->addTab(swapManualTab, QString());
        swapFileTab = new QWidget();
        swapFileTab->setObjectName("swapFileTab");
        verticalLayout_10 = new QVBoxLayout(swapFileTab);
        verticalLayout_10->setObjectName("verticalLayout_10");
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        inputSwapFileLineEdit = new QLineEdit(swapFileTab);
        inputSwapFileLineEdit->setObjectName("inputSwapFileLineEdit");

        horizontalLayout_8->addWidget(inputSwapFileLineEdit);

        inputSwapFilePushButton = new QPushButton(swapFileTab);
        inputSwapFilePushButton->setObjectName("inputSwapFilePushButton");

        horizontalLayout_8->addWidget(inputSwapFilePushButton);


        verticalLayout_10->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        inputSwapFilePlainTextEdit = new QPlainTextEdit(swapFileTab);
        inputSwapFilePlainTextEdit->setObjectName("inputSwapFilePlainTextEdit");

        horizontalLayout_9->addWidget(inputSwapFilePlainTextEdit);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName("verticalLayout_9");
        outputSwapFilePlainTextEdit = new QPlainTextEdit(swapFileTab);
        outputSwapFilePlainTextEdit->setObjectName("outputSwapFilePlainTextEdit");

        verticalLayout_9->addWidget(outputSwapFilePlainTextEdit);

        clearSwapFilePushButton = new QPushButton(swapFileTab);
        clearSwapFilePushButton->setObjectName("clearSwapFilePushButton");

        verticalLayout_9->addWidget(clearSwapFilePushButton);


        horizontalLayout_9->addLayout(verticalLayout_9);


        verticalLayout_10->addLayout(horizontalLayout_9);

        inputSecondTaskTabWidget->addTab(swapFileTab, QString());

        verticalLayout_7->addWidget(inputSecondTaskTabWidget);

        mainTabWidget->addTab(SecondTaskTab, QString());

        verticalLayout->addWidget(mainTabWidget);


        retranslateUi(ListTaskWindow);

        mainTabWidget->setCurrentIndex(1);
        InputFirstTaskTabWidget->setCurrentIndex(1);
        inputSecondTaskTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ListTaskWindow);
    } // setupUi

    void retranslateUi(QDialog *ListTaskWindow)
    {
        ListTaskWindow->setWindowTitle(QCoreApplication::translate("ListTaskWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ListTaskWindow", "\320\222\320\276\320\272\321\200\321\203\320\263 \321\201\321\207\320\270\321\202\320\260\321\216\321\211\320\265\320\263\320\276 \321\201\321\202\320\276\320\270\321\202 N \321\207\320\265\320\273\320\276\320\262\320\265\320\272, \320\270\320\267 \320\272\320\276\321\202\320\276\321\200\321\213\321\205 \320\262\321\213\320\264\320\265\320\273\320\265\320\275 \320\277\320\265\321\200\320\262\321\213\320\271, \320\260 \320\276\321\201\321\202\320\260\320\273\321\214\320\275\321\213\320\265 \320\267\320\260\320\275\321\203\320\274\320\265\321\200\320\276\320\262\320\260\320\275\321\213  \320\277\320\276 \321\207\320\260\321\201\320\276\320\262\320\276\320\271 \321\201\321\202\321\200\320\265\320\273\320\272\320\265 \321\207\320\270\321\201\320\273\320\260\320\274\320\270 \320\276\321\202 2 \320\264\320\276 N. \320\241\321\207\320\270\321\202\320\260\321\216\321\211\320\270\320\271, \320\275\320\260\321\207\320\270\320\275\320\260\321\217 \321\201 \320\272\320\276\320\263\320\276-\321\202\320\276, \320\262\320\265"
                        "\320\264\320\265\321\202 \321\201\321\207\320\265\321\202 \320\264\320\276 M. \320\247\320\265\320\273\320\276\320\262\320\265\320\272, \320\275\320\260 \320\272\320\276\321\202\320\276\321\200\320\276\320\274 \320\276\321\201\321\202\320\260\320\275\320\276\320\262\320\270\320\273\321\201\321\217 \321\201\321\207\320\265\321\202, \320\262\321\213\321\205\320\276\320\264\320\270\321\202 \320\270\320\267 \320\272\321\200\321\203\320\263\320\260. \320\241\321\207\320\265\321\202 \320\277\321\200\320\276\320\264\320\276\320\273\320\266\320\260\320\265\321\202\321\201\321\217 \321\201\320\276 \321\201\320\273\320\265\320\264\321\203\321\216\321\211\320\265\320\263\320\276 \321\207\320\265\320\273\320\276\320\262\320\265\320\272\320\260 \320\270 \321\202\320\260\320\272 \320\264\320\276 \321\202\320\265\321\205 \320\277\320\276\321\200, \320\277\320\276\320\272\320\260 \320\275\320\265 \320\276\321\201\321\202\320\260\320\275\320\265\321\202\321\201\321\217 \320\276\320\264\320\270\320\275 \321\207\320\265\320\273\320"
                        "\276\320\262\320\265\320\272. \320\236\320\277\321\200\320\265\320\264\320\265\320\273\320\270\321\202\321\214 \320\275\320\276\320\274\320\265\321\200 \320\276\321\201\321\202\320\260\320\262\321\210\320\265\320\263\320\276\321\201\321\217 \321\207\320\265\320\273\320\276\320\262\320\265\320\272\320\260, \320\265\321\201\320\273\320\270 \320\270\320\267\320\262\320\265\321\201\321\202\320\275\320\276 M \320\270 \321\202\320\276, \321\207\321\202\320\276 \321\201\321\207\320\265\321\202 \320\275\320\260\321\207\320\270\320\275\320\260\320\273\321\201\321\217 \321\201 \320\277\320\265\321\200\320\262\320\276\320\263\320\276 \321\207\320\265\320\273\320\276\320\262\320\265\320\272\320\260", nullptr));
        inputManualJosephusLineEdit->setPlaceholderText(QCoreApplication::translate("ListTaskWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\204\320\260\320\274\320\270\320\273\320\270\320\270 \320\273\321\216\320\264\320\265\320\271 \321\207\320\265\321\200\320\265\320\267 \320\277\321\200\320\276\320\261\320\265\320\273", nullptr));
        josephusManualLabel->setText(QCoreApplication::translate("ListTaskWindow", "\320\250\320\260\320\263 \321\201\321\207\320\270\321\202\320\260\321\216\321\211\320\265\320\263\320\276", nullptr));
        inputJosephusManualPushButton->setText(QCoreApplication::translate("ListTaskWindow", "\320\222\320\262\320\265\321\201\321\202\320\270", nullptr));
        clearJosephusManualPushButton->setText(QCoreApplication::translate("ListTaskWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \320\262\321\213\320\262\320\276\320\264", nullptr));
        InputFirstTaskTabWidget->setTabText(InputFirstTaskTabWidget->indexOf(josephusManualTab), QCoreApplication::translate("ListTaskWindow", "\320\222\321\200\321\203\321\207\320\275\321\203\321\216", nullptr));
        inputFileJosephusLineEdit->setPlaceholderText(QCoreApplication::translate("ListTaskWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \321\204\320\260\320\271\320\273\320\260", nullptr));
        josephusFileLabel->setText(QCoreApplication::translate("ListTaskWindow", "\320\250\320\260\320\263 \321\201\321\207\320\270\321\202\320\260\321\216\321\211\320\265\320\263\320\276", nullptr));
        inputJosephusFilePushButton->setText(QCoreApplication::translate("ListTaskWindow", "\320\222\320\262\320\265\321\201\321\202\320\270", nullptr));
        clearJosephusFilePushButton->setText(QCoreApplication::translate("ListTaskWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \320\262\321\213\320\262\320\276\320\264", nullptr));
        InputFirstTaskTabWidget->setTabText(InputFirstTaskTabWidget->indexOf(josephusFileTab), QCoreApplication::translate("ListTaskWindow", "\320\230\320\267 \321\204\320\260\320\271\320\273\320\260", nullptr));
        mainTabWidget->setTabText(mainTabWidget->indexOf(firstTaskTab), QCoreApplication::translate("ListTaskWindow", "\320\227\320\260\320\264\320\260\320\275\320\270\320\265 1", nullptr));
        label_2->setText(QCoreApplication::translate("ListTaskWindow", "P\320\260\320\264\320\260\320\275 \320\275\320\260\320\261\320\276\321\200 \321\206\320\265\320\273\321\213\321\205 \321\207\320\270\321\201\320\265\320\273. \320\227\320\260\320\277\320\270\321\201\320\260\321\202\321\214 \320\270\321\205 \320\262 \320\277\320\260\320\274\321\217\321\202\321\214 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\321\203\321\217 \321\201\320\262\320\276\320\271 \321\201\320\277\320\270\321\201\320\276\320\272. \320\237\321\200\320\276\321\201\320\274\320\260\321\202\321\200\320\270\320\262\320\260\321\217 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\321\213 \321\201\320\277\320\270\321\201\320\272\320\260 \320\277\320\276 \321\202\321\200\320\276\320\271\320\272\320\260\320\274, \320\277\320\276\320\274\320\265\320\275\321\217\321\202\321\214 \320\272\321\200\320\260\320\271\320\275\320\270\320\265, \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202 \320\267\320\260\320\277\320\270\321\201\320\260\321\202\321\214 \320\262 \320\275\320\276"
                        "\320\262\321\213\320\271 \321\201\320\277\320\270\321\201\320\276\320\272", nullptr));
        inputSwapManualLineEdit->setPlaceholderText(QCoreApplication::translate("ListTaskWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\207\320\270\321\201\320\273\320\260 \321\207\320\265\321\200\320\265\320\267 \320\277\321\200\320\276\320\261\320\265\320\273", nullptr));
        inputSwapManualPushButton->setText(QCoreApplication::translate("ListTaskWindow", "\320\222\320\262\320\265\321\201\321\202\320\270", nullptr));
        cleanSwapManualPushButton->setText(QCoreApplication::translate("ListTaskWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \320\262\321\213\320\262\320\276\320\264", nullptr));
        inputSecondTaskTabWidget->setTabText(inputSecondTaskTabWidget->indexOf(swapManualTab), QCoreApplication::translate("ListTaskWindow", "\320\222\321\200\321\203\321\207\320\275\321\203\321\216", nullptr));
        inputSwapFileLineEdit->setPlaceholderText(QCoreApplication::translate("ListTaskWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \321\204\320\260\320\271\320\273\320\260", nullptr));
        inputSwapFilePushButton->setText(QCoreApplication::translate("ListTaskWindow", "\320\222\320\262\320\265\321\201\321\202\320\270", nullptr));
        inputSwapFilePlainTextEdit->setPlaceholderText(QCoreApplication::translate("ListTaskWindow", "\320\242\321\203\321\202 \320\277\320\276\321\217\320\262\320\270\321\202\321\201\321\217 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217 \320\270\320\267 \320\262\321\205\320\276\320\264\320\275\320\276\320\263\320\276 \321\204\320\260\320\271\320\273\320\260", nullptr));
        clearSwapFilePushButton->setText(QCoreApplication::translate("ListTaskWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \320\262\321\213\320\262\320\276\320\264", nullptr));
        inputSecondTaskTabWidget->setTabText(inputSecondTaskTabWidget->indexOf(swapFileTab), QCoreApplication::translate("ListTaskWindow", "\320\230\320\267 \321\204\320\260\320\271\320\273\320\260", nullptr));
        mainTabWidget->setTabText(mainTabWidget->indexOf(SecondTaskTab), QCoreApplication::translate("ListTaskWindow", "\320\227\320\260\320\264\320\260\320\275\320\270\320\265 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ListTaskWindow: public Ui_ListTaskWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTTASKWINDOW_H
