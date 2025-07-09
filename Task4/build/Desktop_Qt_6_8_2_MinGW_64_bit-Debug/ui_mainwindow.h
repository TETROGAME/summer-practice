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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionStack;
    QAction *actionList;
    QAction *actionQueue;
    QAction *actionExit;
    QAction *actionAbout;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *stackPage;
    QVBoxLayout *verticalLayoutStack;
    QTabWidget *stackTabWidget;
    QWidget *firstTaskTab;
    QVBoxLayout *verticalLayoutFirstTask;
    QLabel *conditionFirstTaskLabel;
    QTabWidget *inputChangeTabWidget;
    QWidget *manualChangeInputTab;
    QVBoxLayout *verticalLayoutManualChange;
    QHBoxLayout *horizontalLayoutManual;
    QLineEdit *inputManualLineEdit;
    QPushButton *inputManualPushButton;
    QPlainTextEdit *outputManualPlainTextEdit;
    QPushButton *manualClearOutputPushButton;
    QWidget *fileChangeInputTab;
    QVBoxLayout *verticalLayoutFileChange;
    QHBoxLayout *horizontalLayoutFile;
    QLineEdit *filenameLineEdit;
    QPushButton *inputFilePushButton;
    QPlainTextEdit *inputFileLineEdit;
    QPlainTextEdit *outputFilePlainTextEdit;
    QPushButton *fileClearOutputPushButton;
    QWidget *secondTaskTab;
    QVBoxLayout *verticalLayoutSecondTask;
    QLabel *conditionSecondTaskLabel;
    QTabWidget *polishTabWidget;
    QWidget *inputPolishManualTab;
    QVBoxLayout *verticalLayoutPolishManual;
    QHBoxLayout *horizontalLayoutPolishManual;
    QLineEdit *inputPolishManualLineEdit;
    QPushButton *inputPolishManualPushButton;
    QPlainTextEdit *outputPolishManualPlainTextEdit;
    QPushButton *clearOutputPolishManualPushButton;
    QWidget *inputPolishFileTab;
    QVBoxLayout *verticalLayoutPolishFile;
    QHBoxLayout *horizontalLayoutPolishFile;
    QLineEdit *inputFilenamePolishFileLineEdit;
    QPushButton *inputPolishFilePushButton;
    QPlainTextEdit *inputPolishFileLineEdit;
    QPlainTextEdit *outputPolishFilePlainTextEdit;
    QPushButton *clearOutputPolishFilePushButton;
    QWidget *listPage;
    QVBoxLayout *verticalLayoutList;
    QTabWidget *listTabWidget;
    QWidget *firstTaskListTab;
    QVBoxLayout *verticalLayoutFirstTaskList;
    QLabel *firstTaskListLabel;
    QTabWidget *josephusTabWidget;
    QWidget *josephusManualTab;
    QHBoxLayout *horizontalLayoutJosephusManual;
    QVBoxLayout *verticalLayoutJosephusManualInput;
    QLineEdit *inputManualJosephusLineEdit;
    QHBoxLayout *horizontalLayoutJosephusSpinBox;
    QLabel *josephusManualLabel;
    QSpinBox *josephusManualSpinBox;
    QSpacerItem *verticalSpacerJosephus;
    QPushButton *inputJosephusManualPushButton;
    QVBoxLayout *verticalLayoutJosephusManualOutput;
    QPlainTextEdit *outputJosephusManualPlainTextEdit;
    QPushButton *clearJosephusManualPushButton;
    QWidget *josephusFileTab;
    QHBoxLayout *horizontalLayoutJosephusFile;
    QVBoxLayout *verticalLayoutJosephusFileInput;
    QLineEdit *inputFileJosephusLineEdit;
    QHBoxLayout *horizontalLayoutJosephusFileSpinBox;
    QLabel *josephusFileLabel;
    QSpinBox *josephusFileSpinBox;
    QSpacerItem *verticalSpacerJosephusFile;
    QPushButton *inputJosephusFilePushButton;
    QVBoxLayout *verticalLayoutJosephusFileOutput;
    QPlainTextEdit *outputJosephusFilePlainTextEdit;
    QPushButton *clearJosephusFilePushButton;
    QWidget *secondTaskListTab;
    QVBoxLayout *verticalLayoutSecondTaskList;
    QLabel *secondTaskListLabel;
    QTabWidget *swapTabWidget;
    QWidget *swapManualTab;
    QVBoxLayout *verticalLayoutSwapManual;
    QHBoxLayout *horizontalLayoutSwapManual;
    QLineEdit *inputSwapManualLineEdit;
    QPushButton *inputSwapManualPushButton;
    QPlainTextEdit *outputSwapManualPlainTextEdit;
    QPushButton *cleanSwapManualPushButton;
    QWidget *swapFileTab;
    QVBoxLayout *verticalLayoutSwapFile;
    QHBoxLayout *horizontalLayoutSwapFile;
    QLineEdit *inputSwapFileLineEdit;
    QPushButton *inputSwapFilePushButton;
    QHBoxLayout *horizontalLayoutSwapFileOutput;
    QPlainTextEdit *inputSwapFilePlainTextEdit;
    QVBoxLayout *verticalLayoutSwapFileOutput;
    QPlainTextEdit *outputSwapFilePlainTextEdit;
    QPushButton *clearSwapFilePushButton;
    QWidget *queuePage;
    QVBoxLayout *verticalLayoutQueue;
    QLabel *queueTaskLabel;
    QTabWidget *queueTabWidget;
    QWidget *queueManualTab;
    QVBoxLayout *verticalLayoutQueueManual;
    QFormLayout *formLayoutQueueParameters;
    QLabel *n_label;
    QSpinBox *n_spinBox;
    QLabel *m_label;
    QSpinBox *m_spinBox;
    QLabel *k_label;
    QSpinBox *k_spinBox;
    QLabel *X_label;
    QSpinBox *X_spinBox;
    QLabel *t_label;
    QSpinBox *t_spinBox;
    QLabel *uc1_label;
    QSpinBox *uc1_spinBox;
    QLabel *pc1_label;
    QSpinBox *pc1_spinBox;
    QLabel *uc2_label;
    QSpinBox *uc2_spinBox;
    QLabel *pc2_label;
    QSpinBox *pc2_spinBox;
    QPushButton *inputPushButton;
    QHBoxLayout *horizontalLayoutQueueOutput;
    QPlainTextEdit *outputPlainTextEdit;
    QPushButton *clearPushButton;
    QWidget *queueFileTab;
    QVBoxLayout *verticalLayoutQueueFile;
    QHBoxLayout *horizontalLayoutQueueFile;
    QLineEdit *inputFileLineEdit_queue;
    QPushButton *inputFilePushButton_queue;
    QPlainTextEdit *outputFilePlainTextEdit_queue;
    QPushButton *clearFilePushButton;
    QMenuBar *menubar;
    QMenu *menuStructures;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        actionStack = new QAction(MainWindow);
        actionStack->setObjectName("actionStack");
        actionStack->setCheckable(true);
        actionList = new QAction(MainWindow);
        actionList->setObjectName("actionList");
        actionList->setCheckable(true);
        actionQueue = new QAction(MainWindow);
        actionQueue->setObjectName("actionQueue");
        actionQueue->setCheckable(true);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName("actionAbout");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackPage = new QWidget();
        stackPage->setObjectName("stackPage");
        verticalLayoutStack = new QVBoxLayout(stackPage);
        verticalLayoutStack->setObjectName("verticalLayoutStack");
        stackTabWidget = new QTabWidget(stackPage);
        stackTabWidget->setObjectName("stackTabWidget");
        firstTaskTab = new QWidget();
        firstTaskTab->setObjectName("firstTaskTab");
        verticalLayoutFirstTask = new QVBoxLayout(firstTaskTab);
        verticalLayoutFirstTask->setObjectName("verticalLayoutFirstTask");
        conditionFirstTaskLabel = new QLabel(firstTaskTab);
        conditionFirstTaskLabel->setObjectName("conditionFirstTaskLabel");
        conditionFirstTaskLabel->setWordWrap(true);

        verticalLayoutFirstTask->addWidget(conditionFirstTaskLabel);

        inputChangeTabWidget = new QTabWidget(firstTaskTab);
        inputChangeTabWidget->setObjectName("inputChangeTabWidget");
        manualChangeInputTab = new QWidget();
        manualChangeInputTab->setObjectName("manualChangeInputTab");
        verticalLayoutManualChange = new QVBoxLayout(manualChangeInputTab);
        verticalLayoutManualChange->setObjectName("verticalLayoutManualChange");
        horizontalLayoutManual = new QHBoxLayout();
        horizontalLayoutManual->setObjectName("horizontalLayoutManual");
        inputManualLineEdit = new QLineEdit(manualChangeInputTab);
        inputManualLineEdit->setObjectName("inputManualLineEdit");

        horizontalLayoutManual->addWidget(inputManualLineEdit);

        inputManualPushButton = new QPushButton(manualChangeInputTab);
        inputManualPushButton->setObjectName("inputManualPushButton");

        horizontalLayoutManual->addWidget(inputManualPushButton);


        verticalLayoutManualChange->addLayout(horizontalLayoutManual);

        outputManualPlainTextEdit = new QPlainTextEdit(manualChangeInputTab);
        outputManualPlainTextEdit->setObjectName("outputManualPlainTextEdit");
        outputManualPlainTextEdit->setReadOnly(true);

        verticalLayoutManualChange->addWidget(outputManualPlainTextEdit);

        manualClearOutputPushButton = new QPushButton(manualChangeInputTab);
        manualClearOutputPushButton->setObjectName("manualClearOutputPushButton");

        verticalLayoutManualChange->addWidget(manualClearOutputPushButton);

        inputChangeTabWidget->addTab(manualChangeInputTab, QString());
        fileChangeInputTab = new QWidget();
        fileChangeInputTab->setObjectName("fileChangeInputTab");
        verticalLayoutFileChange = new QVBoxLayout(fileChangeInputTab);
        verticalLayoutFileChange->setObjectName("verticalLayoutFileChange");
        horizontalLayoutFile = new QHBoxLayout();
        horizontalLayoutFile->setObjectName("horizontalLayoutFile");
        filenameLineEdit = new QLineEdit(fileChangeInputTab);
        filenameLineEdit->setObjectName("filenameLineEdit");

        horizontalLayoutFile->addWidget(filenameLineEdit);

        inputFilePushButton = new QPushButton(fileChangeInputTab);
        inputFilePushButton->setObjectName("inputFilePushButton");

        horizontalLayoutFile->addWidget(inputFilePushButton);


        verticalLayoutFileChange->addLayout(horizontalLayoutFile);

        inputFileLineEdit = new QPlainTextEdit(fileChangeInputTab);
        inputFileLineEdit->setObjectName("inputFileLineEdit");
        inputFileLineEdit->setReadOnly(true);

        verticalLayoutFileChange->addWidget(inputFileLineEdit);

        outputFilePlainTextEdit = new QPlainTextEdit(fileChangeInputTab);
        outputFilePlainTextEdit->setObjectName("outputFilePlainTextEdit");
        outputFilePlainTextEdit->setReadOnly(true);

        verticalLayoutFileChange->addWidget(outputFilePlainTextEdit);

        fileClearOutputPushButton = new QPushButton(fileChangeInputTab);
        fileClearOutputPushButton->setObjectName("fileClearOutputPushButton");

        verticalLayoutFileChange->addWidget(fileClearOutputPushButton);

        inputChangeTabWidget->addTab(fileChangeInputTab, QString());

        verticalLayoutFirstTask->addWidget(inputChangeTabWidget);

        stackTabWidget->addTab(firstTaskTab, QString());
        secondTaskTab = new QWidget();
        secondTaskTab->setObjectName("secondTaskTab");
        verticalLayoutSecondTask = new QVBoxLayout(secondTaskTab);
        verticalLayoutSecondTask->setObjectName("verticalLayoutSecondTask");
        conditionSecondTaskLabel = new QLabel(secondTaskTab);
        conditionSecondTaskLabel->setObjectName("conditionSecondTaskLabel");
        conditionSecondTaskLabel->setWordWrap(true);

        verticalLayoutSecondTask->addWidget(conditionSecondTaskLabel);

        polishTabWidget = new QTabWidget(secondTaskTab);
        polishTabWidget->setObjectName("polishTabWidget");
        inputPolishManualTab = new QWidget();
        inputPolishManualTab->setObjectName("inputPolishManualTab");
        verticalLayoutPolishManual = new QVBoxLayout(inputPolishManualTab);
        verticalLayoutPolishManual->setObjectName("verticalLayoutPolishManual");
        horizontalLayoutPolishManual = new QHBoxLayout();
        horizontalLayoutPolishManual->setObjectName("horizontalLayoutPolishManual");
        inputPolishManualLineEdit = new QLineEdit(inputPolishManualTab);
        inputPolishManualLineEdit->setObjectName("inputPolishManualLineEdit");

        horizontalLayoutPolishManual->addWidget(inputPolishManualLineEdit);

        inputPolishManualPushButton = new QPushButton(inputPolishManualTab);
        inputPolishManualPushButton->setObjectName("inputPolishManualPushButton");

        horizontalLayoutPolishManual->addWidget(inputPolishManualPushButton);


        verticalLayoutPolishManual->addLayout(horizontalLayoutPolishManual);

        outputPolishManualPlainTextEdit = new QPlainTextEdit(inputPolishManualTab);
        outputPolishManualPlainTextEdit->setObjectName("outputPolishManualPlainTextEdit");
        outputPolishManualPlainTextEdit->setReadOnly(true);

        verticalLayoutPolishManual->addWidget(outputPolishManualPlainTextEdit);

        clearOutputPolishManualPushButton = new QPushButton(inputPolishManualTab);
        clearOutputPolishManualPushButton->setObjectName("clearOutputPolishManualPushButton");

        verticalLayoutPolishManual->addWidget(clearOutputPolishManualPushButton);

        polishTabWidget->addTab(inputPolishManualTab, QString());
        inputPolishFileTab = new QWidget();
        inputPolishFileTab->setObjectName("inputPolishFileTab");
        verticalLayoutPolishFile = new QVBoxLayout(inputPolishFileTab);
        verticalLayoutPolishFile->setObjectName("verticalLayoutPolishFile");
        horizontalLayoutPolishFile = new QHBoxLayout();
        horizontalLayoutPolishFile->setObjectName("horizontalLayoutPolishFile");
        inputFilenamePolishFileLineEdit = new QLineEdit(inputPolishFileTab);
        inputFilenamePolishFileLineEdit->setObjectName("inputFilenamePolishFileLineEdit");

        horizontalLayoutPolishFile->addWidget(inputFilenamePolishFileLineEdit);

        inputPolishFilePushButton = new QPushButton(inputPolishFileTab);
        inputPolishFilePushButton->setObjectName("inputPolishFilePushButton");

        horizontalLayoutPolishFile->addWidget(inputPolishFilePushButton);


        verticalLayoutPolishFile->addLayout(horizontalLayoutPolishFile);

        inputPolishFileLineEdit = new QPlainTextEdit(inputPolishFileTab);
        inputPolishFileLineEdit->setObjectName("inputPolishFileLineEdit");
        inputPolishFileLineEdit->setReadOnly(true);

        verticalLayoutPolishFile->addWidget(inputPolishFileLineEdit);

        outputPolishFilePlainTextEdit = new QPlainTextEdit(inputPolishFileTab);
        outputPolishFilePlainTextEdit->setObjectName("outputPolishFilePlainTextEdit");
        outputPolishFilePlainTextEdit->setReadOnly(true);

        verticalLayoutPolishFile->addWidget(outputPolishFilePlainTextEdit);

        clearOutputPolishFilePushButton = new QPushButton(inputPolishFileTab);
        clearOutputPolishFilePushButton->setObjectName("clearOutputPolishFilePushButton");

        verticalLayoutPolishFile->addWidget(clearOutputPolishFilePushButton);

        polishTabWidget->addTab(inputPolishFileTab, QString());

        verticalLayoutSecondTask->addWidget(polishTabWidget);

        stackTabWidget->addTab(secondTaskTab, QString());

        verticalLayoutStack->addWidget(stackTabWidget);

        stackedWidget->addWidget(stackPage);
        listPage = new QWidget();
        listPage->setObjectName("listPage");
        verticalLayoutList = new QVBoxLayout(listPage);
        verticalLayoutList->setObjectName("verticalLayoutList");
        listTabWidget = new QTabWidget(listPage);
        listTabWidget->setObjectName("listTabWidget");
        firstTaskListTab = new QWidget();
        firstTaskListTab->setObjectName("firstTaskListTab");
        verticalLayoutFirstTaskList = new QVBoxLayout(firstTaskListTab);
        verticalLayoutFirstTaskList->setObjectName("verticalLayoutFirstTaskList");
        firstTaskListLabel = new QLabel(firstTaskListTab);
        firstTaskListLabel->setObjectName("firstTaskListLabel");
        firstTaskListLabel->setWordWrap(true);

        verticalLayoutFirstTaskList->addWidget(firstTaskListLabel);

        josephusTabWidget = new QTabWidget(firstTaskListTab);
        josephusTabWidget->setObjectName("josephusTabWidget");
        josephusManualTab = new QWidget();
        josephusManualTab->setObjectName("josephusManualTab");
        horizontalLayoutJosephusManual = new QHBoxLayout(josephusManualTab);
        horizontalLayoutJosephusManual->setObjectName("horizontalLayoutJosephusManual");
        verticalLayoutJosephusManualInput = new QVBoxLayout();
        verticalLayoutJosephusManualInput->setObjectName("verticalLayoutJosephusManualInput");
        inputManualJosephusLineEdit = new QLineEdit(josephusManualTab);
        inputManualJosephusLineEdit->setObjectName("inputManualJosephusLineEdit");

        verticalLayoutJosephusManualInput->addWidget(inputManualJosephusLineEdit);

        horizontalLayoutJosephusSpinBox = new QHBoxLayout();
        horizontalLayoutJosephusSpinBox->setObjectName("horizontalLayoutJosephusSpinBox");
        josephusManualLabel = new QLabel(josephusManualTab);
        josephusManualLabel->setObjectName("josephusManualLabel");

        horizontalLayoutJosephusSpinBox->addWidget(josephusManualLabel);

        josephusManualSpinBox = new QSpinBox(josephusManualTab);
        josephusManualSpinBox->setObjectName("josephusManualSpinBox");

        horizontalLayoutJosephusSpinBox->addWidget(josephusManualSpinBox);


        verticalLayoutJosephusManualInput->addLayout(horizontalLayoutJosephusSpinBox);

        verticalSpacerJosephus = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayoutJosephusManualInput->addItem(verticalSpacerJosephus);

        inputJosephusManualPushButton = new QPushButton(josephusManualTab);
        inputJosephusManualPushButton->setObjectName("inputJosephusManualPushButton");

        verticalLayoutJosephusManualInput->addWidget(inputJosephusManualPushButton);


        horizontalLayoutJosephusManual->addLayout(verticalLayoutJosephusManualInput);

        verticalLayoutJosephusManualOutput = new QVBoxLayout();
        verticalLayoutJosephusManualOutput->setObjectName("verticalLayoutJosephusManualOutput");
        outputJosephusManualPlainTextEdit = new QPlainTextEdit(josephusManualTab);
        outputJosephusManualPlainTextEdit->setObjectName("outputJosephusManualPlainTextEdit");
        outputJosephusManualPlainTextEdit->setReadOnly(true);

        verticalLayoutJosephusManualOutput->addWidget(outputJosephusManualPlainTextEdit);

        clearJosephusManualPushButton = new QPushButton(josephusManualTab);
        clearJosephusManualPushButton->setObjectName("clearJosephusManualPushButton");

        verticalLayoutJosephusManualOutput->addWidget(clearJosephusManualPushButton);


        horizontalLayoutJosephusManual->addLayout(verticalLayoutJosephusManualOutput);

        josephusTabWidget->addTab(josephusManualTab, QString());
        josephusFileTab = new QWidget();
        josephusFileTab->setObjectName("josephusFileTab");
        horizontalLayoutJosephusFile = new QHBoxLayout(josephusFileTab);
        horizontalLayoutJosephusFile->setObjectName("horizontalLayoutJosephusFile");
        verticalLayoutJosephusFileInput = new QVBoxLayout();
        verticalLayoutJosephusFileInput->setObjectName("verticalLayoutJosephusFileInput");
        inputFileJosephusLineEdit = new QLineEdit(josephusFileTab);
        inputFileJosephusLineEdit->setObjectName("inputFileJosephusLineEdit");

        verticalLayoutJosephusFileInput->addWidget(inputFileJosephusLineEdit);

        horizontalLayoutJosephusFileSpinBox = new QHBoxLayout();
        horizontalLayoutJosephusFileSpinBox->setObjectName("horizontalLayoutJosephusFileSpinBox");
        josephusFileLabel = new QLabel(josephusFileTab);
        josephusFileLabel->setObjectName("josephusFileLabel");

        horizontalLayoutJosephusFileSpinBox->addWidget(josephusFileLabel);

        josephusFileSpinBox = new QSpinBox(josephusFileTab);
        josephusFileSpinBox->setObjectName("josephusFileSpinBox");

        horizontalLayoutJosephusFileSpinBox->addWidget(josephusFileSpinBox);


        verticalLayoutJosephusFileInput->addLayout(horizontalLayoutJosephusFileSpinBox);

        verticalSpacerJosephusFile = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayoutJosephusFileInput->addItem(verticalSpacerJosephusFile);

        inputJosephusFilePushButton = new QPushButton(josephusFileTab);
        inputJosephusFilePushButton->setObjectName("inputJosephusFilePushButton");

        verticalLayoutJosephusFileInput->addWidget(inputJosephusFilePushButton);


        horizontalLayoutJosephusFile->addLayout(verticalLayoutJosephusFileInput);

        verticalLayoutJosephusFileOutput = new QVBoxLayout();
        verticalLayoutJosephusFileOutput->setObjectName("verticalLayoutJosephusFileOutput");
        outputJosephusFilePlainTextEdit = new QPlainTextEdit(josephusFileTab);
        outputJosephusFilePlainTextEdit->setObjectName("outputJosephusFilePlainTextEdit");
        outputJosephusFilePlainTextEdit->setReadOnly(true);

        verticalLayoutJosephusFileOutput->addWidget(outputJosephusFilePlainTextEdit);

        clearJosephusFilePushButton = new QPushButton(josephusFileTab);
        clearJosephusFilePushButton->setObjectName("clearJosephusFilePushButton");

        verticalLayoutJosephusFileOutput->addWidget(clearJosephusFilePushButton);


        horizontalLayoutJosephusFile->addLayout(verticalLayoutJosephusFileOutput);

        josephusTabWidget->addTab(josephusFileTab, QString());

        verticalLayoutFirstTaskList->addWidget(josephusTabWidget);

        listTabWidget->addTab(firstTaskListTab, QString());
        secondTaskListTab = new QWidget();
        secondTaskListTab->setObjectName("secondTaskListTab");
        verticalLayoutSecondTaskList = new QVBoxLayout(secondTaskListTab);
        verticalLayoutSecondTaskList->setObjectName("verticalLayoutSecondTaskList");
        secondTaskListLabel = new QLabel(secondTaskListTab);
        secondTaskListLabel->setObjectName("secondTaskListLabel");
        secondTaskListLabel->setWordWrap(true);

        verticalLayoutSecondTaskList->addWidget(secondTaskListLabel);

        swapTabWidget = new QTabWidget(secondTaskListTab);
        swapTabWidget->setObjectName("swapTabWidget");
        swapManualTab = new QWidget();
        swapManualTab->setObjectName("swapManualTab");
        verticalLayoutSwapManual = new QVBoxLayout(swapManualTab);
        verticalLayoutSwapManual->setObjectName("verticalLayoutSwapManual");
        horizontalLayoutSwapManual = new QHBoxLayout();
        horizontalLayoutSwapManual->setObjectName("horizontalLayoutSwapManual");
        inputSwapManualLineEdit = new QLineEdit(swapManualTab);
        inputSwapManualLineEdit->setObjectName("inputSwapManualLineEdit");

        horizontalLayoutSwapManual->addWidget(inputSwapManualLineEdit);

        inputSwapManualPushButton = new QPushButton(swapManualTab);
        inputSwapManualPushButton->setObjectName("inputSwapManualPushButton");

        horizontalLayoutSwapManual->addWidget(inputSwapManualPushButton);


        verticalLayoutSwapManual->addLayout(horizontalLayoutSwapManual);

        outputSwapManualPlainTextEdit = new QPlainTextEdit(swapManualTab);
        outputSwapManualPlainTextEdit->setObjectName("outputSwapManualPlainTextEdit");

        verticalLayoutSwapManual->addWidget(outputSwapManualPlainTextEdit);

        cleanSwapManualPushButton = new QPushButton(swapManualTab);
        cleanSwapManualPushButton->setObjectName("cleanSwapManualPushButton");

        verticalLayoutSwapManual->addWidget(cleanSwapManualPushButton);

        swapTabWidget->addTab(swapManualTab, QString());
        swapFileTab = new QWidget();
        swapFileTab->setObjectName("swapFileTab");
        verticalLayoutSwapFile = new QVBoxLayout(swapFileTab);
        verticalLayoutSwapFile->setObjectName("verticalLayoutSwapFile");
        horizontalLayoutSwapFile = new QHBoxLayout();
        horizontalLayoutSwapFile->setObjectName("horizontalLayoutSwapFile");
        inputSwapFileLineEdit = new QLineEdit(swapFileTab);
        inputSwapFileLineEdit->setObjectName("inputSwapFileLineEdit");

        horizontalLayoutSwapFile->addWidget(inputSwapFileLineEdit);

        inputSwapFilePushButton = new QPushButton(swapFileTab);
        inputSwapFilePushButton->setObjectName("inputSwapFilePushButton");

        horizontalLayoutSwapFile->addWidget(inputSwapFilePushButton);


        verticalLayoutSwapFile->addLayout(horizontalLayoutSwapFile);

        horizontalLayoutSwapFileOutput = new QHBoxLayout();
        horizontalLayoutSwapFileOutput->setObjectName("horizontalLayoutSwapFileOutput");
        inputSwapFilePlainTextEdit = new QPlainTextEdit(swapFileTab);
        inputSwapFilePlainTextEdit->setObjectName("inputSwapFilePlainTextEdit");

        horizontalLayoutSwapFileOutput->addWidget(inputSwapFilePlainTextEdit);

        verticalLayoutSwapFileOutput = new QVBoxLayout();
        verticalLayoutSwapFileOutput->setObjectName("verticalLayoutSwapFileOutput");
        outputSwapFilePlainTextEdit = new QPlainTextEdit(swapFileTab);
        outputSwapFilePlainTextEdit->setObjectName("outputSwapFilePlainTextEdit");

        verticalLayoutSwapFileOutput->addWidget(outputSwapFilePlainTextEdit);

        clearSwapFilePushButton = new QPushButton(swapFileTab);
        clearSwapFilePushButton->setObjectName("clearSwapFilePushButton");

        verticalLayoutSwapFileOutput->addWidget(clearSwapFilePushButton);


        horizontalLayoutSwapFileOutput->addLayout(verticalLayoutSwapFileOutput);


        verticalLayoutSwapFile->addLayout(horizontalLayoutSwapFileOutput);

        swapTabWidget->addTab(swapFileTab, QString());

        verticalLayoutSecondTaskList->addWidget(swapTabWidget);

        listTabWidget->addTab(secondTaskListTab, QString());

        verticalLayoutList->addWidget(listTabWidget);

        stackedWidget->addWidget(listPage);
        queuePage = new QWidget();
        queuePage->setObjectName("queuePage");
        verticalLayoutQueue = new QVBoxLayout(queuePage);
        verticalLayoutQueue->setObjectName("verticalLayoutQueue");
        queueTaskLabel = new QLabel(queuePage);
        queueTaskLabel->setObjectName("queueTaskLabel");
        queueTaskLabel->setWordWrap(true);

        verticalLayoutQueue->addWidget(queueTaskLabel);

        queueTabWidget = new QTabWidget(queuePage);
        queueTabWidget->setObjectName("queueTabWidget");
        queueManualTab = new QWidget();
        queueManualTab->setObjectName("queueManualTab");
        verticalLayoutQueueManual = new QVBoxLayout(queueManualTab);
        verticalLayoutQueueManual->setObjectName("verticalLayoutQueueManual");
        formLayoutQueueParameters = new QFormLayout();
        formLayoutQueueParameters->setObjectName("formLayoutQueueParameters");
        n_label = new QLabel(queueManualTab);
        n_label->setObjectName("n_label");

        formLayoutQueueParameters->setWidget(0, QFormLayout::LabelRole, n_label);

        n_spinBox = new QSpinBox(queueManualTab);
        n_spinBox->setObjectName("n_spinBox");
        n_spinBox->setMaximum(1000);

        formLayoutQueueParameters->setWidget(0, QFormLayout::FieldRole, n_spinBox);

        m_label = new QLabel(queueManualTab);
        m_label->setObjectName("m_label");

        formLayoutQueueParameters->setWidget(1, QFormLayout::LabelRole, m_label);

        m_spinBox = new QSpinBox(queueManualTab);
        m_spinBox->setObjectName("m_spinBox");
        m_spinBox->setMaximum(1000);

        formLayoutQueueParameters->setWidget(1, QFormLayout::FieldRole, m_spinBox);

        k_label = new QLabel(queueManualTab);
        k_label->setObjectName("k_label");

        formLayoutQueueParameters->setWidget(2, QFormLayout::LabelRole, k_label);

        k_spinBox = new QSpinBox(queueManualTab);
        k_spinBox->setObjectName("k_spinBox");
        k_spinBox->setMaximum(1000);

        formLayoutQueueParameters->setWidget(2, QFormLayout::FieldRole, k_spinBox);

        X_label = new QLabel(queueManualTab);
        X_label->setObjectName("X_label");

        formLayoutQueueParameters->setWidget(3, QFormLayout::LabelRole, X_label);

        X_spinBox = new QSpinBox(queueManualTab);
        X_spinBox->setObjectName("X_spinBox");
        X_spinBox->setMaximum(1000);

        formLayoutQueueParameters->setWidget(3, QFormLayout::FieldRole, X_spinBox);

        t_label = new QLabel(queueManualTab);
        t_label->setObjectName("t_label");

        formLayoutQueueParameters->setWidget(4, QFormLayout::LabelRole, t_label);

        t_spinBox = new QSpinBox(queueManualTab);
        t_spinBox->setObjectName("t_spinBox");
        t_spinBox->setMaximum(1000);

        formLayoutQueueParameters->setWidget(4, QFormLayout::FieldRole, t_spinBox);

        uc1_label = new QLabel(queueManualTab);
        uc1_label->setObjectName("uc1_label");

        formLayoutQueueParameters->setWidget(5, QFormLayout::LabelRole, uc1_label);

        uc1_spinBox = new QSpinBox(queueManualTab);
        uc1_spinBox->setObjectName("uc1_spinBox");
        uc1_spinBox->setMaximum(1000);

        formLayoutQueueParameters->setWidget(5, QFormLayout::FieldRole, uc1_spinBox);

        pc1_label = new QLabel(queueManualTab);
        pc1_label->setObjectName("pc1_label");

        formLayoutQueueParameters->setWidget(6, QFormLayout::LabelRole, pc1_label);

        pc1_spinBox = new QSpinBox(queueManualTab);
        pc1_spinBox->setObjectName("pc1_spinBox");
        pc1_spinBox->setMaximum(1000);

        formLayoutQueueParameters->setWidget(6, QFormLayout::FieldRole, pc1_spinBox);

        uc2_label = new QLabel(queueManualTab);
        uc2_label->setObjectName("uc2_label");

        formLayoutQueueParameters->setWidget(7, QFormLayout::LabelRole, uc2_label);

        uc2_spinBox = new QSpinBox(queueManualTab);
        uc2_spinBox->setObjectName("uc2_spinBox");
        uc2_spinBox->setMaximum(1000);

        formLayoutQueueParameters->setWidget(7, QFormLayout::FieldRole, uc2_spinBox);

        pc2_label = new QLabel(queueManualTab);
        pc2_label->setObjectName("pc2_label");

        formLayoutQueueParameters->setWidget(8, QFormLayout::LabelRole, pc2_label);

        pc2_spinBox = new QSpinBox(queueManualTab);
        pc2_spinBox->setObjectName("pc2_spinBox");
        pc2_spinBox->setMaximum(1000);

        formLayoutQueueParameters->setWidget(8, QFormLayout::FieldRole, pc2_spinBox);


        verticalLayoutQueueManual->addLayout(formLayoutQueueParameters);

        inputPushButton = new QPushButton(queueManualTab);
        inputPushButton->setObjectName("inputPushButton");

        verticalLayoutQueueManual->addWidget(inputPushButton);

        horizontalLayoutQueueOutput = new QHBoxLayout();
        horizontalLayoutQueueOutput->setObjectName("horizontalLayoutQueueOutput");
        outputPlainTextEdit = new QPlainTextEdit(queueManualTab);
        outputPlainTextEdit->setObjectName("outputPlainTextEdit");

        horizontalLayoutQueueOutput->addWidget(outputPlainTextEdit);

        clearPushButton = new QPushButton(queueManualTab);
        clearPushButton->setObjectName("clearPushButton");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(clearPushButton->sizePolicy().hasHeightForWidth());
        clearPushButton->setSizePolicy(sizePolicy);

        horizontalLayoutQueueOutput->addWidget(clearPushButton);


        verticalLayoutQueueManual->addLayout(horizontalLayoutQueueOutput);

        queueTabWidget->addTab(queueManualTab, QString());
        queueFileTab = new QWidget();
        queueFileTab->setObjectName("queueFileTab");
        verticalLayoutQueueFile = new QVBoxLayout(queueFileTab);
        verticalLayoutQueueFile->setObjectName("verticalLayoutQueueFile");
        horizontalLayoutQueueFile = new QHBoxLayout();
        horizontalLayoutQueueFile->setObjectName("horizontalLayoutQueueFile");
        inputFileLineEdit_queue = new QLineEdit(queueFileTab);
        inputFileLineEdit_queue->setObjectName("inputFileLineEdit_queue");

        horizontalLayoutQueueFile->addWidget(inputFileLineEdit_queue);

        inputFilePushButton_queue = new QPushButton(queueFileTab);
        inputFilePushButton_queue->setObjectName("inputFilePushButton_queue");

        horizontalLayoutQueueFile->addWidget(inputFilePushButton_queue);


        verticalLayoutQueueFile->addLayout(horizontalLayoutQueueFile);

        outputFilePlainTextEdit_queue = new QPlainTextEdit(queueFileTab);
        outputFilePlainTextEdit_queue->setObjectName("outputFilePlainTextEdit_queue");

        verticalLayoutQueueFile->addWidget(outputFilePlainTextEdit_queue);

        clearFilePushButton = new QPushButton(queueFileTab);
        clearFilePushButton->setObjectName("clearFilePushButton");

        verticalLayoutQueueFile->addWidget(clearFilePushButton);

        queueTabWidget->addTab(queueFileTab, QString());

        verticalLayoutQueue->addWidget(queueTabWidget);

        stackedWidget->addWidget(queuePage);

        verticalLayout->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        menuStructures = new QMenu(menubar);
        menuStructures->setObjectName("menuStructures");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuStructures->menuAction());
        menuStructures->addAction(actionStack);
        menuStructures->addAction(actionList);
        menuStructures->addAction(actionQueue);
        menuStructures->addSeparator();
        menuStructures->addAction(actionExit);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);
        stackTabWidget->setCurrentIndex(1);
        inputChangeTabWidget->setCurrentIndex(0);
        polishTabWidget->setCurrentIndex(0);
        listTabWidget->setCurrentIndex(0);
        josephusTabWidget->setCurrentIndex(0);
        swapTabWidget->setCurrentIndex(0);
        queueTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\241\321\202\321\200\321\203\320\272\321\202\321\203\321\200\321\213 \320\264\320\260\320\275\320\275\321\213\321\205", nullptr));
        actionStack->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\265\320\272", nullptr));
#if QT_CONFIG(shortcut)
        actionStack->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+1", nullptr));
#endif // QT_CONFIG(shortcut)
        actionList->setText(QCoreApplication::translate("MainWindow", "\320\241\320\277\320\270\321\201\320\276\320\272", nullptr));
#if QT_CONFIG(shortcut)
        actionList->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+2", nullptr));
#endif // QT_CONFIG(shortcut)
        actionQueue->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\265\321\200\320\265\320\264\321\214", nullptr));
#if QT_CONFIG(shortcut)
        actionQueue->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+3", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExit->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
#if QT_CONFIG(shortcut)
        actionExit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAbout->setText(QCoreApplication::translate("MainWindow", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", nullptr));
#if QT_CONFIG(shortcut)
        actionAbout->setShortcut(QCoreApplication::translate("MainWindow", "F1", nullptr));
#endif // QT_CONFIG(shortcut)
        conditionFirstTaskLabel->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\277\320\270\321\201\320\260\321\202\321\214 \321\207\320\270\321\201\320\273\320\260 \320\262 \321\201\321\202\320\265\320\272, \320\277\321\200\320\276\321\201\320\274\320\260\321\202\321\200\320\270\320\262\320\260\321\217 \321\201\321\202\320\265\320\272, \320\277\320\276\320\274\320\265\320\275\321\217\321\202\321\214 \321\203 \320\272\320\260\320\266\320\264\320\276\320\271 \321\202\321\200\320\276\320\271\320\272\320\270: \320\262\321\202\320\276\321\200\320\276\320\271 \321\203\320\262\320\265\320\273\320\270\321\207\320\270\321\202\321\214 \320\275\320\260 \320\277\320\265\321\200\320\262\321\213\320\271, \321\202\321\200\320\265\321\202\320\270\320\271 \320\275\320\260 \320\262\321\202\320\276\321\200\320\276\320\271 \320\275\320\265 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\275\321\213\320\271. \320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202 \320\267\320\260\320\277\320\270\321\201\320\260\321\202\321\214 \320\262 \321\201\321\202\320\265"
                        "\320\272 \320\270 \320\262\321\213\320\262\320\265\321\201\321\202\320\270", nullptr));
        inputManualLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\200\321\217\320\264 \321\206\320\270\321\204\321\200 \321\207\320\265\321\200\320\265\320\267 \320\277\321\200\320\276\320\261\320\265\320\273 (2 3 67 12 7 214)", nullptr));
        inputManualPushButton->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\321\201\321\202\320\270", nullptr));
        manualClearOutputPushButton->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \320\262\321\213\320\262\320\276\320\264", nullptr));
        inputChangeTabWidget->setTabText(inputChangeTabWidget->indexOf(manualChangeInputTab), QCoreApplication::translate("MainWindow", "\320\222\321\200\321\203\321\207\320\275\321\203\321\216", nullptr));
        filenameLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \321\204\320\260\320\271\320\273\320\260 (example.txt)", nullptr));
        inputFilePushButton->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\321\201\321\202\320\270", nullptr));
        inputFileLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\242\321\203\321\202 \320\277\320\276\321\217\320\262\320\270\321\202\321\201\321\217 \321\201\320\276\320\264\320\265\321\200\320\266\320\270\320\274\320\276\320\265 \320\262\321\205\320\276\320\264\320\275\320\276\320\263\320\276 \321\204\320\260\320\271\320\273\320\260", nullptr));
        fileClearOutputPushButton->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \320\262\321\213\320\262\320\276\320\264", nullptr));
        inputChangeTabWidget->setTabText(inputChangeTabWidget->indexOf(fileChangeInputTab), QCoreApplication::translate("MainWindow", "\320\230\320\267 \321\204\320\260\320\271\320\273\320\260", nullptr));
        stackTabWidget->setTabText(stackTabWidget->indexOf(firstTaskTab), QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\320\275\320\270\320\265 1", nullptr));
        conditionSecondTaskLabel->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\265\320\276\320\261\321\200\320\260\320\267\320\276\320\262\320\260\321\202\321\214 \320\274\320\260\321\202\320\265\320\274\320\260\321\202\320\270\321\207\320\265\321\201\320\272\320\276\320\265 \320\262\321\213\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\262 \320\277\321\200\320\265\321\204\320\270\320\272\321\201\320\275\321\203\321\216 (\320\277\320\276\320\273\321\214\321\201\320\272\321\203\321\216) \321\204\320\276\321\200\320\274\321\203 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\321\203\321\217 \321\201\320\262\320\276\320\271 \321\201\321\202\320\265\320\272", nullptr));
        inputPolishManualLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\274\320\260\321\202\320\265\320\274\320\260\321\202\320\270\321\207\320\265\321\201\320\272\320\276\320\265 \320\262\321\213\321\200\320\260\320\266\320\265\320\275\320\270\320\265 ( 0-9, +-/*() )", nullptr));
        inputPolishManualPushButton->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\321\201\321\202\320\270", nullptr));
        clearOutputPolishManualPushButton->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \320\262\321\213\320\262\320\276\320\264", nullptr));
        polishTabWidget->setTabText(polishTabWidget->indexOf(inputPolishManualTab), QCoreApplication::translate("MainWindow", "\320\222\321\200\321\203\321\207\320\275\321\203\321\216", nullptr));
        inputFilenamePolishFileLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \321\204\320\260\320\271\320\273\320\260 (example.txt)", nullptr));
        inputPolishFilePushButton->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\321\201\321\202\320\270", nullptr));
        inputPolishFileLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\242\321\203\321\202 \320\277\320\276\321\217\320\262\320\270\321\202\321\201\321\217 \321\201\320\276\320\264\320\265\321\200\320\266\320\270\320\274\320\276\320\265 \320\262\321\205\320\276\320\264\320\275\320\276\320\263\320\276 \321\204\320\260\320\271\320\273\320\260", nullptr));
        clearOutputPolishFilePushButton->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \320\262\321\213\320\262\320\276\320\264", nullptr));
        polishTabWidget->setTabText(polishTabWidget->indexOf(inputPolishFileTab), QCoreApplication::translate("MainWindow", "\320\230\320\267 \321\204\320\260\320\271\320\273\320\260", nullptr));
        stackTabWidget->setTabText(stackTabWidget->indexOf(secondTaskTab), QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\320\275\320\270\320\265 2", nullptr));
        firstTaskListLabel->setText(QCoreApplication::translate("MainWindow", "\320\222\320\276\320\272\321\200\321\203\320\263 \321\201\321\207\320\270\321\202\320\260\321\216\321\211\320\265\320\263\320\276 \321\201\321\202\320\276\320\270\321\202 N \321\207\320\265\320\273\320\276\320\262\320\265\320\272, \320\270\320\267 \320\272\320\276\321\202\320\276\321\200\321\213\321\205 \320\262\321\213\320\264\320\265\320\273\320\265\320\275 \320\277\320\265\321\200\320\262\321\213\320\271, \320\260 \320\276\321\201\321\202\320\260\320\273\321\214\320\275\321\213\320\265 \320\267\320\260\320\275\321\203\320\274\320\265\321\200\320\276\320\262\320\260\320\275\321\213  \320\277\320\276 \321\207\320\260\321\201\320\276\320\262\320\276\320\271 \321\201\321\202\321\200\320\265\320\273\320\272\320\265 \321\207\320\270\321\201\320\273\320\260\320\274\320\270 \320\276\321\202 2 \320\264\320\276 N. \320\241\321\207\320\270\321\202\320\260\321\216\321\211\320\270\320\271, \320\275\320\260\321\207\320\270\320\275\320\260\321\217 \321\201 \320\272\320\276\320\263\320\276-\321\202\320\276, \320\262\320\265"
                        "\320\264\320\265\321\202 \321\201\321\207\320\265\321\202 \320\264\320\276 M. \320\247\320\265\320\273\320\276\320\262\320\265\320\272, \320\275\320\260 \320\272\320\276\321\202\320\276\321\200\320\276\320\274 \320\276\321\201\321\202\320\260\320\275\320\276\320\262\320\270\320\273\321\201\321\217 \321\201\321\207\320\265\321\202, \320\262\321\213\321\205\320\276\320\264\320\270\321\202 \320\270\320\267 \320\272\321\200\321\203\320\263\320\260. \320\241\321\207\320\265\321\202 \320\277\321\200\320\276\320\264\320\276\320\273\320\266\320\260\320\265\321\202\321\201\321\217 \321\201\320\276 \321\201\320\273\320\265\320\264\321\203\321\216\321\211\320\265\320\263\320\276 \321\207\320\265\320\273\320\276\320\262\320\265\320\272\320\260 \320\270 \321\202\320\260\320\272 \320\264\320\276 \321\202\320\265\321\205 \320\277\320\276\321\200, \320\277\320\276\320\272\320\260 \320\275\320\265 \320\276\321\201\321\202\320\260\320\275\320\265\321\202\321\201\321\217 \320\276\320\264\320\270\320\275 \321\207\320\265\320\273\320"
                        "\276\320\262\320\265\320\272. \320\236\320\277\321\200\320\265\320\264\320\265\320\273\320\270\321\202\321\214 \320\275\320\276\320\274\320\265\321\200 \320\276\321\201\321\202\320\260\320\262\321\210\320\265\320\263\320\276\321\201\321\217 \321\207\320\265\320\273\320\276\320\262\320\265\320\272\320\260, \320\265\321\201\320\273\320\270 \320\270\320\267\320\262\320\265\321\201\321\202\320\275\320\276 M \320\270 \321\202\320\276, \321\207\321\202\320\276 \321\201\321\207\320\265\321\202 \320\275\320\260\321\207\320\270\320\275\320\260\320\273\321\201\321\217 \321\201 \320\277\320\265\321\200\320\262\320\276\320\263\320\276 \321\207\320\265\320\273\320\276\320\262\320\265\320\272\320\260", nullptr));
        inputManualJosephusLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\204\320\260\320\274\320\270\320\273\320\270\320\270 \320\273\321\216\320\264\320\265\320\271 \321\207\320\265\321\200\320\265\320\267 \320\277\321\200\320\276\320\261\320\265\320\273", nullptr));
        josephusManualLabel->setText(QCoreApplication::translate("MainWindow", "\320\250\320\260\320\263 \321\201\321\207\320\270\321\202\320\260\321\216\321\211\320\265\320\263\320\276", nullptr));
        inputJosephusManualPushButton->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\321\201\321\202\320\270", nullptr));
        clearJosephusManualPushButton->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \320\262\321\213\320\262\320\276\320\264", nullptr));
        josephusTabWidget->setTabText(josephusTabWidget->indexOf(josephusManualTab), QCoreApplication::translate("MainWindow", "\320\222\321\200\321\203\321\207\320\275\321\203\321\216", nullptr));
        inputFileJosephusLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \321\204\320\260\320\271\320\273\320\260", nullptr));
        josephusFileLabel->setText(QCoreApplication::translate("MainWindow", "\320\250\320\260\320\263 \321\201\321\207\320\270\321\202\320\260\321\216\321\211\320\265\320\263\320\276", nullptr));
        inputJosephusFilePushButton->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\321\201\321\202\320\270", nullptr));
        clearJosephusFilePushButton->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \320\262\321\213\320\262\320\276\320\264", nullptr));
        josephusTabWidget->setTabText(josephusTabWidget->indexOf(josephusFileTab), QCoreApplication::translate("MainWindow", "\320\230\320\267 \321\204\320\260\320\271\320\273\320\260", nullptr));
        listTabWidget->setTabText(listTabWidget->indexOf(firstTaskListTab), QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\320\275\320\270\320\265 1", nullptr));
        secondTaskListLabel->setText(QCoreApplication::translate("MainWindow", "P\320\260\320\264\320\260\320\275 \320\275\320\260\320\261\320\276\321\200 \321\206\320\265\320\273\321\213\321\205 \321\207\320\270\321\201\320\265\320\273. \320\227\320\260\320\277\320\270\321\201\320\260\321\202\321\214 \320\270\321\205 \320\262 \320\277\320\260\320\274\321\217\321\202\321\214 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\321\203\321\217 \321\201\320\262\320\276\320\271 \321\201\320\277\320\270\321\201\320\276\320\272. \320\237\321\200\320\276\321\201\320\274\320\260\321\202\321\200\320\270\320\262\320\260\321\217 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\321\213 \321\201\320\277\320\270\321\201\320\272\320\260 \320\277\320\276 \321\202\321\200\320\276\320\271\320\272\320\260\320\274, \320\277\320\276\320\274\320\265\320\275\321\217\321\202\321\214 \320\272\321\200\320\260\320\271\320\275\320\270\320\265, \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202 \320\267\320\260\320\277\320\270\321\201\320\260\321\202\321\214 \320\262 \320\275\320\276"
                        "\320\262\321\213\320\271 \321\201\320\277\320\270\321\201\320\276\320\272", nullptr));
        inputSwapManualLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\207\320\270\321\201\320\273\320\260 \321\207\320\265\321\200\320\265\320\267 \320\277\321\200\320\276\320\261\320\265\320\273", nullptr));
        inputSwapManualPushButton->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\321\201\321\202\320\270", nullptr));
        cleanSwapManualPushButton->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \320\262\321\213\320\262\320\276\320\264", nullptr));
        swapTabWidget->setTabText(swapTabWidget->indexOf(swapManualTab), QCoreApplication::translate("MainWindow", "\320\222\321\200\321\203\321\207\320\275\321\203\321\216", nullptr));
        inputSwapFileLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \321\204\320\260\320\271\320\273\320\260", nullptr));
        inputSwapFilePushButton->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\321\201\321\202\320\270", nullptr));
        inputSwapFilePlainTextEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\242\321\203\321\202 \320\277\320\276\321\217\320\262\320\270\321\202\321\201\321\217 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217 \320\270\320\267 \320\262\321\205\320\276\320\264\320\275\320\276\320\263\320\276 \321\204\320\260\320\271\320\273\320\260", nullptr));
        clearSwapFilePushButton->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \320\262\321\213\320\262\320\276\320\264", nullptr));
        swapTabWidget->setTabText(swapTabWidget->indexOf(swapFileTab), QCoreApplication::translate("MainWindow", "\320\230\320\267 \321\204\320\260\320\271\320\273\320\260", nullptr));
        listTabWidget->setTabText(listTabWidget->indexOf(secondTaskListTab), QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\320\275\320\270\320\265 2", nullptr));
        queueTaskLabel->setText(QCoreApplication::translate("MainWindow", "\320\222 \320\274\320\260\320\263\320\260\320\267\320\270\320\275\320\265 \321\200\320\260\320\261\320\276\321\202\320\260\321\216\321\202 \320\264\320\262\320\265 \320\272\320\260\321\201\321\201\321\213. \320\237\320\276\320\272\321\203\320\277\320\260\321\202\320\265\320\273\320\270 \320\262\321\213\321\201\321\202\321\200\320\260\320\270\320\262\320\260\321\216\321\202\321\201\321\217 \320\262 \320\264\320\262\320\265 \320\276\321\202\320\264\320\265\320\273\321\214\320\275\321\213\320\265 \320\276\321\207\320\265\321\200\320\265\320\264\320\270: \321\201\320\275\320\260\321\207\320\260\320\273\320\260 \320\267\320\260\320\277\320\276\320\273\320\275\321\217\320\265\321\202\321\201\321\217 \320\276\321\207\320\265\321\200\320\265\320\264\321\214 \320\272 \320\277\320\265\321\200\320\262\320\276\320\271 \320\272\320\260\321\201\321\201\320\265, \320\267\320\260\321\202\320\265\320\274 \342\200\224 \320\272\320\276 \320\262\321\202\320\276\321\200\320\276\320\271. \320\232\320\260\320\266\320\264\321\213\320"
                        "\271 \320\277\320\276\320\272\321\203\320\277\320\260\321\202\320\265\320\273\321\214 \320\267\320\260\320\264\320\260\320\265\321\202\321\201\321\217 \321\201\320\262\320\276\320\270\320\274 \320\275\320\276\320\274\320\265\321\200\320\276\320\274 \320\270 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276\320\274 \320\277\320\276\320\272\321\203\320\277\320\276\320\272. \320\224\320\273\321\217 \320\277\320\265\321\200\320\262\320\276\320\271 \320\272\320\260\321\201\321\201\321\213 \321\203\321\207\320\265\321\202 \320\276\320\264\320\275\320\276\320\271 \320\277\320\276\320\272\321\203\320\277\320\272\320\270 \320\267\320\260\320\275\320\270\320\274\320\260\320\265\321\202 uc1 \321\201\320\265\320\272\321\203\320\275\320\264, \320\260 \320\277\320\265\321\207\320\260\321\202\321\214 \321\207\320\265\320\272\320\260 \320\270 \321\200\320\260\321\201\321\207\320\265\321\202 \342\200\224 \320\265\321\211\320\265 pc1 \321\201\320\265\320\272\321\203\320\275\320\264. \320\224\320\273"
                        "\321\217 \320\262\321\202\320\276\321\200\320\276\320\271 \320\272\320\260\321\201\321\201\321\213 \321\215\321\202\320\270 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217 \342\200\224 uc2 \320\270 pc2 \321\201\320\265\320\272\321\203\320\275\320\264 \321\201\320\276\320\276\321\202\320\262\320\265\321\202\321\201\321\202\320\262\320\265\320\275\320\275\320\276.\n"
"\320\232\320\260\320\266\320\264\321\213\320\265 k \320\274\320\270\320\275\321\203\321\202 \320\262 \320\276\321\207\320\265\321\200\320\265\320\264\321\214 \320\272 \320\277\320\265\321\200\320\262\320\276\320\271 \320\272\320\260\321\201\321\201\320\265 \321\201\321\202\320\260\320\275\320\276\320\262\320\270\321\202\321\201\321\217 n \320\275\320\276\320\262\321\213\321\205 \320\277\320\276\320\272\321\203\320\277\320\260\321\202\320\265\320\273\320\265\320\271, \320\260 \320\272\320\276 \320\262\321\202\320\276\321\200\320\276\320\271 \342\200\224 m \320\277\320\276\320\272\321\203\320\277\320\260\321\202\320\265\320\273\320\265"
                        "\320\271. \320\237\320\265\321\200\320\262\320\260\321\217 \320\272\320\260\321\201\321\201\320\260 \320\261\321\213\320\273\320\260 \321\201\320\273\320\276\320\274\320\260\320\275\320\260 \320\270 \320\275\320\265 \321\200\320\260\320\261\320\276\321\202\320\260\320\273\320\260 \320\277\320\265\321\200\320\262\321\213\320\265 X \320\274\320\270\320\275\321\203\321\202, \320\277\320\276\321\201\320\273\320\265 \321\207\320\265\320\263\320\276 \320\262\320\276\320\267\320\276\320\261\320\275\320\276\320\262\320\270\320\273\320\260 \321\200\320\260\320\261\320\276\321\202\321\203. \320\247\320\265\321\200\320\265\320\267 t \320\274\320\270\320\275\321\203\321\202 \320\277\320\276\321\201\320\273\320\265 \320\275\320\260\321\207\320\260\320\273\320\260 \321\200\320\260\320\261\320\276\321\202\321\213 \320\274\320\260\320\263\320\260\320\267\320\270\320\275\320\260 \320\275\320\260\321\201\321\202\321\203\320\277\320\260\320\265\321\202 \320\276\320\261\320\265\320\264\320\265\320\275\320\275\321\213\320\271 \320"
                        "\277\320\265\321\200\320\265\321\200\321\213\320\262.", nullptr));
        n_label->setText(QCoreApplication::translate("MainWindow", "\320\241\320\272\320\276\320\273\321\214\320\272\320\276 \320\277\320\276\320\272\321\203\320\277\320\260\321\202\320\265\320\273\320\265\320\271 \320\277\321\200\320\270\321\205\320\276\320\264\320\270\321\202 \320\262 \320\276\321\207\320\265\321\200\320\265\320\264\321\214 \320\272 \320\277\320\265\321\200\320\262\320\276\320\271 \320\272\320\260\321\201\321\201\320\265 \320\272\320\260\320\266\320\264\321\213\320\265 k \320\274\320\270\320\275\321\203\321\202:", nullptr));
        m_label->setText(QCoreApplication::translate("MainWindow", "\320\241\320\272\320\276\320\273\321\214\320\272\320\276 \320\277\320\276\320\272\321\203\320\277\320\260\321\202\320\265\320\273\320\265\320\271 \320\277\321\200\320\270\321\205\320\276\320\264\320\270\321\202 \320\262\320\276 \320\262\321\202\320\276\321\200\321\203\321\216 \320\272\320\260\321\201\321\201\321\203 \320\272\320\260\320\266\320\264\321\213\320\265 k \320\274\320\270\320\275\321\203\321\202:", nullptr));
        k_label->setText(QCoreApplication::translate("MainWindow", "\320\230\320\275\321\202\320\265\321\200\320\262\320\260\320\273 \320\262 \320\274\320\270\320\275\321\203\321\202\320\260\321\205, \321\207\320\265\321\200\320\265\320\267 \320\272\320\276\321\202\320\276\321\200\321\213\320\271 \320\277\321\200\320\270\321\205\320\276\320\264\321\217\321\202 \320\275\320\276\320\262\321\213\320\265 \320\277\320\276\320\272\321\203\320\277\320\260\321\202\320\265\320\273\320\270:", nullptr));
        X_label->setText(QCoreApplication::translate("MainWindow", "\320\241\320\272\320\276\320\273\321\214\320\272\320\276 \320\274\320\270\320\275\321\203\321\202 \320\277\320\265\321\200\320\262\320\260\321\217 \320\272\320\260\321\201\321\201\320\260 \320\275\320\265 \321\200\320\260\320\261\320\276\321\202\320\260\320\273\320\260 (\320\261\321\213\320\273\320\260 \321\201\320\273\320\276\320\274\320\260\320\275\320\260):", nullptr));
        t_label->setText(QCoreApplication::translate("MainWindow", "\320\247\320\265\321\200\320\265\320\267 \321\201\320\272\320\276\320\273\321\214\320\272\320\276 \320\274\320\270\320\275\321\203\321\202 \320\277\320\276\321\201\320\273\320\265 \320\275\320\260\321\207\320\260\320\273\320\260 \321\200\320\260\320\261\320\276\321\202\321\213 \320\274\320\260\320\263\320\260\320\267\320\270\320\275\320\260 \320\275\320\260\321\201\321\202\321\203\320\277\320\260\320\265\321\202 \320\276\320\261\320\265\320\264\320\265\320\275\320\275\321\213\320\271 \320\277\320\265\321\200\320\265\321\200\321\213\320\262:", nullptr));
        uc1_label->setText(QCoreApplication::translate("MainWindow", "\320\222\321\200\320\265\320\274\321\217 (\321\201\320\265\320\272\321\203\320\275\320\264) \320\275\320\260 \320\276\321\204\320\276\321\200\320\274\320\273\320\265\320\275\320\270\320\265 \320\276\320\264\320\275\320\276\320\271 \320\277\320\276\320\272\321\203\320\277\320\272\320\270 \320\275\320\260 \320\277\320\265\321\200\320\262\320\276\320\271 \320\272\320\260\321\201\321\201\320\265:", nullptr));
        pc1_label->setText(QCoreApplication::translate("MainWindow", "\320\222\321\200\320\265\320\274\321\217 (\321\201\320\265\320\272\321\203\320\275\320\264) \320\275\320\260 \320\277\320\265\321\207\320\260\321\202\321\214 \321\207\320\265\320\272\320\260 \320\270 \321\200\320\260\321\201\321\207\320\265\321\202 \320\275\320\260 \320\277\320\265\321\200\320\262\320\276\320\271 \320\272\320\260\321\201\321\201\320\265:", nullptr));
        uc2_label->setText(QCoreApplication::translate("MainWindow", "\320\222\321\200\320\265\320\274\321\217 (\321\201\320\265\320\272\321\203\320\275\320\264) \320\275\320\260 \320\276\321\204\320\276\321\200\320\274\320\273\320\265\320\275\320\270\320\265 \320\276\320\264\320\275\320\276\320\271 \320\277\320\276\320\272\321\203\320\277\320\272\320\270 \320\275\320\260 \320\262\321\202\320\276\321\200\320\276\320\271 \320\272\320\260\321\201\321\201\320\265:", nullptr));
        pc2_label->setText(QCoreApplication::translate("MainWindow", "\320\222\321\200\320\265\320\274\321\217 (\321\201\320\265\320\272\321\203\320\275\320\264) \320\275\320\260 \320\277\320\265\321\207\320\260\321\202\321\214 \321\207\320\265\320\272\320\260 \320\270 \321\200\320\260\321\201\321\207\320\265\321\202 \320\275\320\260 \320\262\321\202\320\276\321\200\320\276\320\271 \320\272\320\260\321\201\321\201\320\265:", nullptr));
        inputPushButton->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\321\201\321\202\320\270", nullptr));
        clearPushButton->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \320\262\321\213\320\262\320\276\320\264", nullptr));
        queueTabWidget->setTabText(queueTabWidget->indexOf(queueManualTab), QCoreApplication::translate("MainWindow", "\320\222\321\200\321\203\321\207\320\275\321\203\321\216", nullptr));
        inputFileLineEdit_queue->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \321\204\320\260\320\271\320\273\320\260 (example.txt)", nullptr));
        inputFilePushButton_queue->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\321\201\321\202\320\270", nullptr));
        clearFilePushButton->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \320\262\321\213\320\262\320\276\320\264", nullptr));
        queueTabWidget->setTabText(queueTabWidget->indexOf(queueFileTab), QCoreApplication::translate("MainWindow", "\320\230\320\267 \321\204\320\260\320\271\320\273\320\260", nullptr));
        menuStructures->setTitle(QCoreApplication::translate("MainWindow", "\320\241\321\202\321\200\321\203\320\272\321\202\321\203\321\200\321\213 \320\264\320\260\320\275\320\275\321\213\321\205", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
