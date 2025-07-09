/********************************************************************************
** Form generated from reading UI file 'stacktaskwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STACKTASKWINDOW_H
#define UI_STACKTASKWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StackTaskWindow
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *firstTaskTab;
    QVBoxLayout *verticalLayout_2;
    QLabel *conditionFirstTaskLabel;
    QTabWidget *inputChangeTabWidget;
    QWidget *manualChangeInputTab;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLineEdit *inputManualLineEdit;
    QPushButton *inputManualPushButton;
    QPlainTextEdit *outputManualPlainTextEdit;
    QPushButton *manualClearOutputPushButton;
    QWidget *fileChangeInputTab;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *filenameLineEdit;
    QPushButton *inputFilePushButton;
    QPlainTextEdit *inputFileLineEdit;
    QPlainTextEdit *outputFilePlainTextEdit;
    QPushButton *fileClearOutputPushButton;
    QWidget *secondTaskTab;
    QVBoxLayout *verticalLayout_5;
    QLabel *conditionSecondTaskLabel;
    QTabWidget *tabWidget_2;
    QWidget *inputPolishManualTab;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *inputPolishManualLineEdit;
    QPushButton *inputPolishManualPushButton;
    QPlainTextEdit *outputPolishManualPlainTextEdit;
    QPushButton *clearOutputPolishManualPushButton;
    QWidget *inputPolishFileTab;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *inputFilenamePolishFileLineEdit;
    QPushButton *inputPolishFilePushButton;
    QPlainTextEdit *inputPolishFileLineEdit;
    QPlainTextEdit *outputPolishFilePlainTextEdit;
    QPushButton *clearOutputPolishFilePushButton;

    void setupUi(QDialog *StackTaskWindow)
    {
        if (StackTaskWindow->objectName().isEmpty())
            StackTaskWindow->setObjectName("StackTaskWindow");
        StackTaskWindow->resize(384, 564);
        verticalLayout = new QVBoxLayout(StackTaskWindow);
        verticalLayout->setObjectName("verticalLayout");
        tabWidget = new QTabWidget(StackTaskWindow);
        tabWidget->setObjectName("tabWidget");
        firstTaskTab = new QWidget();
        firstTaskTab->setObjectName("firstTaskTab");
        verticalLayout_2 = new QVBoxLayout(firstTaskTab);
        verticalLayout_2->setObjectName("verticalLayout_2");
        conditionFirstTaskLabel = new QLabel(firstTaskTab);
        conditionFirstTaskLabel->setObjectName("conditionFirstTaskLabel");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(conditionFirstTaskLabel->sizePolicy().hasHeightForWidth());
        conditionFirstTaskLabel->setSizePolicy(sizePolicy);
        conditionFirstTaskLabel->setTextFormat(Qt::TextFormat::PlainText);
        conditionFirstTaskLabel->setScaledContents(false);
        conditionFirstTaskLabel->setWordWrap(true);
        conditionFirstTaskLabel->setOpenExternalLinks(false);

        verticalLayout_2->addWidget(conditionFirstTaskLabel);

        inputChangeTabWidget = new QTabWidget(firstTaskTab);
        inputChangeTabWidget->setObjectName("inputChangeTabWidget");
        manualChangeInputTab = new QWidget();
        manualChangeInputTab->setObjectName("manualChangeInputTab");
        verticalLayout_3 = new QVBoxLayout(manualChangeInputTab);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        inputManualLineEdit = new QLineEdit(manualChangeInputTab);
        inputManualLineEdit->setObjectName("inputManualLineEdit");

        horizontalLayout->addWidget(inputManualLineEdit);

        inputManualPushButton = new QPushButton(manualChangeInputTab);
        inputManualPushButton->setObjectName("inputManualPushButton");

        horizontalLayout->addWidget(inputManualPushButton);

        horizontalLayout->setStretch(0, 10);
        horizontalLayout->setStretch(1, 1);

        verticalLayout_3->addLayout(horizontalLayout);

        outputManualPlainTextEdit = new QPlainTextEdit(manualChangeInputTab);
        outputManualPlainTextEdit->setObjectName("outputManualPlainTextEdit");
        outputManualPlainTextEdit->setReadOnly(true);

        verticalLayout_3->addWidget(outputManualPlainTextEdit);

        manualClearOutputPushButton = new QPushButton(manualChangeInputTab);
        manualClearOutputPushButton->setObjectName("manualClearOutputPushButton");

        verticalLayout_3->addWidget(manualClearOutputPushButton);

        inputChangeTabWidget->addTab(manualChangeInputTab, QString());
        fileChangeInputTab = new QWidget();
        fileChangeInputTab->setObjectName("fileChangeInputTab");
        verticalLayout_4 = new QVBoxLayout(fileChangeInputTab);
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        filenameLineEdit = new QLineEdit(fileChangeInputTab);
        filenameLineEdit->setObjectName("filenameLineEdit");

        horizontalLayout_2->addWidget(filenameLineEdit);

        inputFilePushButton = new QPushButton(fileChangeInputTab);
        inputFilePushButton->setObjectName("inputFilePushButton");

        horizontalLayout_2->addWidget(inputFilePushButton);

        horizontalLayout_2->setStretch(0, 10);
        horizontalLayout_2->setStretch(1, 1);

        verticalLayout_4->addLayout(horizontalLayout_2);

        inputFileLineEdit = new QPlainTextEdit(fileChangeInputTab);
        inputFileLineEdit->setObjectName("inputFileLineEdit");
        inputFileLineEdit->setReadOnly(true);

        verticalLayout_4->addWidget(inputFileLineEdit);

        outputFilePlainTextEdit = new QPlainTextEdit(fileChangeInputTab);
        outputFilePlainTextEdit->setObjectName("outputFilePlainTextEdit");
        outputFilePlainTextEdit->setReadOnly(true);

        verticalLayout_4->addWidget(outputFilePlainTextEdit);

        fileClearOutputPushButton = new QPushButton(fileChangeInputTab);
        fileClearOutputPushButton->setObjectName("fileClearOutputPushButton");

        verticalLayout_4->addWidget(fileClearOutputPushButton);

        inputChangeTabWidget->addTab(fileChangeInputTab, QString());

        verticalLayout_2->addWidget(inputChangeTabWidget);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(1, 10);
        tabWidget->addTab(firstTaskTab, QString());
        secondTaskTab = new QWidget();
        secondTaskTab->setObjectName("secondTaskTab");
        verticalLayout_5 = new QVBoxLayout(secondTaskTab);
        verticalLayout_5->setObjectName("verticalLayout_5");
        conditionSecondTaskLabel = new QLabel(secondTaskTab);
        conditionSecondTaskLabel->setObjectName("conditionSecondTaskLabel");
        conditionSecondTaskLabel->setWordWrap(true);

        verticalLayout_5->addWidget(conditionSecondTaskLabel);

        tabWidget_2 = new QTabWidget(secondTaskTab);
        tabWidget_2->setObjectName("tabWidget_2");
        inputPolishManualTab = new QWidget();
        inputPolishManualTab->setObjectName("inputPolishManualTab");
        verticalLayout_6 = new QVBoxLayout(inputPolishManualTab);
        verticalLayout_6->setObjectName("verticalLayout_6");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        inputPolishManualLineEdit = new QLineEdit(inputPolishManualTab);
        inputPolishManualLineEdit->setObjectName("inputPolishManualLineEdit");

        horizontalLayout_3->addWidget(inputPolishManualLineEdit);

        inputPolishManualPushButton = new QPushButton(inputPolishManualTab);
        inputPolishManualPushButton->setObjectName("inputPolishManualPushButton");

        horizontalLayout_3->addWidget(inputPolishManualPushButton);


        verticalLayout_6->addLayout(horizontalLayout_3);

        outputPolishManualPlainTextEdit = new QPlainTextEdit(inputPolishManualTab);
        outputPolishManualPlainTextEdit->setObjectName("outputPolishManualPlainTextEdit");
        outputPolishManualPlainTextEdit->setReadOnly(true);

        verticalLayout_6->addWidget(outputPolishManualPlainTextEdit);

        clearOutputPolishManualPushButton = new QPushButton(inputPolishManualTab);
        clearOutputPolishManualPushButton->setObjectName("clearOutputPolishManualPushButton");

        verticalLayout_6->addWidget(clearOutputPolishManualPushButton);

        tabWidget_2->addTab(inputPolishManualTab, QString());
        inputPolishFileTab = new QWidget();
        inputPolishFileTab->setObjectName("inputPolishFileTab");
        verticalLayout_7 = new QVBoxLayout(inputPolishFileTab);
        verticalLayout_7->setObjectName("verticalLayout_7");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        inputFilenamePolishFileLineEdit = new QLineEdit(inputPolishFileTab);
        inputFilenamePolishFileLineEdit->setObjectName("inputFilenamePolishFileLineEdit");

        horizontalLayout_4->addWidget(inputFilenamePolishFileLineEdit);

        inputPolishFilePushButton = new QPushButton(inputPolishFileTab);
        inputPolishFilePushButton->setObjectName("inputPolishFilePushButton");

        horizontalLayout_4->addWidget(inputPolishFilePushButton);


        verticalLayout_7->addLayout(horizontalLayout_4);

        inputPolishFileLineEdit = new QPlainTextEdit(inputPolishFileTab);
        inputPolishFileLineEdit->setObjectName("inputPolishFileLineEdit");
        inputPolishFileLineEdit->setReadOnly(true);

        verticalLayout_7->addWidget(inputPolishFileLineEdit);

        outputPolishFilePlainTextEdit = new QPlainTextEdit(inputPolishFileTab);
        outputPolishFilePlainTextEdit->setObjectName("outputPolishFilePlainTextEdit");
        outputPolishFilePlainTextEdit->setReadOnly(true);

        verticalLayout_7->addWidget(outputPolishFilePlainTextEdit);

        clearOutputPolishFilePushButton = new QPushButton(inputPolishFileTab);
        clearOutputPolishFilePushButton->setObjectName("clearOutputPolishFilePushButton");

        verticalLayout_7->addWidget(clearOutputPolishFilePushButton);

        tabWidget_2->addTab(inputPolishFileTab, QString());

        verticalLayout_5->addWidget(tabWidget_2);

        tabWidget->addTab(secondTaskTab, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(StackTaskWindow);

        tabWidget->setCurrentIndex(0);
        inputChangeTabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(StackTaskWindow);
    } // setupUi

    void retranslateUi(QDialog *StackTaskWindow)
    {
        StackTaskWindow->setWindowTitle(QCoreApplication::translate("StackTaskWindow", "Dialog", nullptr));
        conditionFirstTaskLabel->setText(QCoreApplication::translate("StackTaskWindow", "\320\227\320\260\320\277\320\270\321\201\320\260\321\202\321\214 \321\207\320\270\321\201\320\273\320\260 \320\262 \321\201\321\202\320\265\320\272, \320\277\321\200\320\276\321\201\320\274\320\260\321\202\321\200\320\270\320\262\320\260\321\217 \321\201\321\202\320\265\320\272, \320\277\320\276\320\274\320\265\320\275\321\217\321\202\321\214 \321\203 \320\272\320\260\320\266\320\264\320\276\320\271 \321\202\321\200\320\276\320\271\320\272\320\270: \320\262\321\202\320\276\321\200\320\276\320\271 \321\203\320\262\320\265\320\273\320\270\321\207\320\270\321\202\321\214 \320\275\320\260 \320\277\320\265\321\200\320\262\321\213\320\271, \321\202\321\200\320\265\321\202\320\270\320\271 \320\275\320\260 \320\262\321\202\320\276\321\200\320\276\320\271 \320\275\320\265 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\275\321\213\320\271. \320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202 \320\267\320\260\320\277\320\270\321\201\320\260\321\202\321\214 \320\262 \321\201\321\202\320\265"
                        "\320\272 \320\270 \320\262\321\213\320\262\320\265\321\201\321\202\320\270", nullptr));
        inputManualLineEdit->setText(QString());
        inputManualLineEdit->setPlaceholderText(QCoreApplication::translate("StackTaskWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\200\321\217\320\264 \321\206\320\270\321\204\321\200 \321\207\320\265\321\200\320\265\320\267 \320\277\321\200\320\276\320\261\320\265\320\273 (2 3 67 12 7 214)", nullptr));
        inputManualPushButton->setText(QCoreApplication::translate("StackTaskWindow", "\320\222\320\262\320\265\321\201\321\202\320\270", nullptr));
        outputManualPlainTextEdit->setPlaceholderText(QString());
        manualClearOutputPushButton->setText(QCoreApplication::translate("StackTaskWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \320\262\321\213\320\262\320\276\320\264", nullptr));
        inputChangeTabWidget->setTabText(inputChangeTabWidget->indexOf(manualChangeInputTab), QCoreApplication::translate("StackTaskWindow", "\320\222\321\200\321\203\321\207\320\275\321\203\321\216", nullptr));
        filenameLineEdit->setPlaceholderText(QCoreApplication::translate("StackTaskWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \321\204\320\260\320\271\320\273\320\260 (example.txt)", nullptr));
        inputFilePushButton->setText(QCoreApplication::translate("StackTaskWindow", "\320\222\320\262\320\265\321\201\321\202\320\270", nullptr));
        inputFileLineEdit->setPlaceholderText(QCoreApplication::translate("StackTaskWindow", "\320\242\321\203\321\202 \320\277\320\276\321\217\320\262\320\270\321\202\321\201\321\217 \321\201\320\276\320\264\320\265\321\200\320\266\320\270\320\274\320\276\320\265 \320\262\321\205\320\276\320\264\320\275\320\276\320\263\320\276 \321\204\320\260\320\271\320\273\320\260", nullptr));
        outputFilePlainTextEdit->setPlaceholderText(QString());
        fileClearOutputPushButton->setText(QCoreApplication::translate("StackTaskWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \320\262\321\213\320\262\320\276\320\264", nullptr));
        inputChangeTabWidget->setTabText(inputChangeTabWidget->indexOf(fileChangeInputTab), QCoreApplication::translate("StackTaskWindow", "\320\230\320\267 \321\204\320\260\320\271\320\273\320\260", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(firstTaskTab), QCoreApplication::translate("StackTaskWindow", "\320\227\320\260\320\264\320\260\320\275\320\270\320\265 1", nullptr));
        conditionSecondTaskLabel->setText(QCoreApplication::translate("StackTaskWindow", "\320\237\321\200\320\265\320\276\320\261\321\200\320\260\320\267\320\276\320\262\320\260\321\202\321\214 \320\274\320\260\321\202\320\265\320\274\320\260\321\202\320\270\321\207\320\265\321\201\320\272\320\276\320\265 \320\262\321\213\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\262 \320\277\321\200\320\265\321\204\320\270\320\272\321\201\320\275\321\203\321\216 (\320\277\320\276\320\273\321\214\321\201\320\272\321\203\321\216) \321\204\320\276\321\200\320\274\321\203 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\321\203\321\217 \321\201\320\262\320\276\320\271 \321\201\321\202\320\265\320\272", nullptr));
        inputPolishManualLineEdit->setPlaceholderText(QCoreApplication::translate("StackTaskWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\274\320\260\321\202\320\265\320\274\320\260\321\202\320\270\321\207\320\265\321\201\320\272\320\276\320\265 \320\262\321\213\321\200\320\260\320\266\320\265\320\275\320\270\320\265 ( 0-9, +-/*() )", nullptr));
        inputPolishManualPushButton->setText(QCoreApplication::translate("StackTaskWindow", "\320\222\320\262\320\265\321\201\321\202\320\270", nullptr));
        clearOutputPolishManualPushButton->setText(QCoreApplication::translate("StackTaskWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \320\262\321\213\320\262\320\276\320\264", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(inputPolishManualTab), QCoreApplication::translate("StackTaskWindow", "\320\222\321\200\321\203\321\207\320\275\321\203\321\216", nullptr));
        inputFilenamePolishFileLineEdit->setPlaceholderText(QCoreApplication::translate("StackTaskWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \321\204\320\260\320\271\320\273\320\260 (example.txt)", nullptr));
        inputPolishFilePushButton->setText(QCoreApplication::translate("StackTaskWindow", "\320\222\320\262\320\265\321\201\321\202\320\270", nullptr));
        inputPolishFileLineEdit->setPlaceholderText(QCoreApplication::translate("StackTaskWindow", "\320\242\321\203\321\202 \320\277\320\276\321\217\320\262\320\270\321\202\321\201\321\217 \321\201\320\276\320\264\320\265\321\200\320\266\320\270\320\274\320\276\320\265 \320\262\321\205\320\276\320\264\320\275\320\276\320\263\320\276 \321\204\320\260\320\271\320\273\320\260", nullptr));
        clearOutputPolishFilePushButton->setText(QCoreApplication::translate("StackTaskWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \320\262\321\213\320\262\320\276\320\264", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(inputPolishFileTab), QCoreApplication::translate("StackTaskWindow", "\320\230\320\267 \321\204\320\260\320\271\320\273\320\260", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(secondTaskTab), QCoreApplication::translate("StackTaskWindow", "\320\227\320\260\320\264\320\260\320\275\320\270\320\265 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StackTaskWindow: public Ui_StackTaskWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STACKTASKWINDOW_H
