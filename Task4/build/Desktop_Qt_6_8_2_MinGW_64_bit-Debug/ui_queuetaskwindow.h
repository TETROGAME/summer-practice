/********************************************************************************
** Form generated from reading UI file 'queuetaskwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUEUETASKWINDOW_H
#define UI_QUEUETASKWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QueueTaskWindow
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *firstTaskTab;
    QVBoxLayout *verticalLayout_2;
    QLabel *conditionLabel;
    QTabWidget *inputFirstTaskTabWidget;
    QWidget *manualTab;
    QVBoxLayout *verticalLayout_3;
    QFormLayout *inputFormLayout;
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
    QLabel *pc2_label;
    QLabel *n_label;
    QSpinBox *uc2_spinBox;
    QSpinBox *pc2_spinBox;
    QPushButton *inputPushButton;
    QHBoxLayout *horizontalLayout;
    QPlainTextEdit *outputPlainTextEdit;
    QPushButton *clearPushButton;
    QWidget *FileTab;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *inputFileLineEdit;
    QPushButton *inputFilePushButton;
    QPlainTextEdit *outputFilePlainTextEdit;
    QPushButton *clearFilePushButton;

    void setupUi(QDialog *QueueTaskWindow)
    {
        if (QueueTaskWindow->objectName().isEmpty())
            QueueTaskWindow->setObjectName("QueueTaskWindow");
        QueueTaskWindow->resize(445, 426);
        verticalLayout = new QVBoxLayout(QueueTaskWindow);
        verticalLayout->setObjectName("verticalLayout");
        tabWidget = new QTabWidget(QueueTaskWindow);
        tabWidget->setObjectName("tabWidget");
        firstTaskTab = new QWidget();
        firstTaskTab->setObjectName("firstTaskTab");
        verticalLayout_2 = new QVBoxLayout(firstTaskTab);
        verticalLayout_2->setObjectName("verticalLayout_2");
        conditionLabel = new QLabel(firstTaskTab);
        conditionLabel->setObjectName("conditionLabel");
        conditionLabel->setWordWrap(true);

        verticalLayout_2->addWidget(conditionLabel);

        inputFirstTaskTabWidget = new QTabWidget(firstTaskTab);
        inputFirstTaskTabWidget->setObjectName("inputFirstTaskTabWidget");
        manualTab = new QWidget();
        manualTab->setObjectName("manualTab");
        verticalLayout_3 = new QVBoxLayout(manualTab);
        verticalLayout_3->setObjectName("verticalLayout_3");
        inputFormLayout = new QFormLayout();
        inputFormLayout->setObjectName("inputFormLayout");
        n_spinBox = new QSpinBox(manualTab);
        n_spinBox->setObjectName("n_spinBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(n_spinBox->sizePolicy().hasHeightForWidth());
        n_spinBox->setSizePolicy(sizePolicy);
        n_spinBox->setInputMethodHints(Qt::InputMethodHint::ImhDigitsOnly);
        n_spinBox->setMaximum(1000);

        inputFormLayout->setWidget(0, QFormLayout::FieldRole, n_spinBox);

        m_label = new QLabel(manualTab);
        m_label->setObjectName("m_label");

        inputFormLayout->setWidget(1, QFormLayout::LabelRole, m_label);

        m_spinBox = new QSpinBox(manualTab);
        m_spinBox->setObjectName("m_spinBox");
        sizePolicy.setHeightForWidth(m_spinBox->sizePolicy().hasHeightForWidth());
        m_spinBox->setSizePolicy(sizePolicy);
        m_spinBox->setMaximum(1000);

        inputFormLayout->setWidget(1, QFormLayout::FieldRole, m_spinBox);

        k_label = new QLabel(manualTab);
        k_label->setObjectName("k_label");

        inputFormLayout->setWidget(2, QFormLayout::LabelRole, k_label);

        k_spinBox = new QSpinBox(manualTab);
        k_spinBox->setObjectName("k_spinBox");
        sizePolicy.setHeightForWidth(k_spinBox->sizePolicy().hasHeightForWidth());
        k_spinBox->setSizePolicy(sizePolicy);
        k_spinBox->setMaximum(1000);

        inputFormLayout->setWidget(2, QFormLayout::FieldRole, k_spinBox);

        X_label = new QLabel(manualTab);
        X_label->setObjectName("X_label");

        inputFormLayout->setWidget(3, QFormLayout::LabelRole, X_label);

        X_spinBox = new QSpinBox(manualTab);
        X_spinBox->setObjectName("X_spinBox");
        sizePolicy.setHeightForWidth(X_spinBox->sizePolicy().hasHeightForWidth());
        X_spinBox->setSizePolicy(sizePolicy);
        X_spinBox->setMaximum(1000);

        inputFormLayout->setWidget(3, QFormLayout::FieldRole, X_spinBox);

        t_label = new QLabel(manualTab);
        t_label->setObjectName("t_label");

        inputFormLayout->setWidget(4, QFormLayout::LabelRole, t_label);

        t_spinBox = new QSpinBox(manualTab);
        t_spinBox->setObjectName("t_spinBox");
        sizePolicy.setHeightForWidth(t_spinBox->sizePolicy().hasHeightForWidth());
        t_spinBox->setSizePolicy(sizePolicy);
        t_spinBox->setMaximum(1000);

        inputFormLayout->setWidget(4, QFormLayout::FieldRole, t_spinBox);

        uc1_label = new QLabel(manualTab);
        uc1_label->setObjectName("uc1_label");

        inputFormLayout->setWidget(5, QFormLayout::LabelRole, uc1_label);

        uc1_spinBox = new QSpinBox(manualTab);
        uc1_spinBox->setObjectName("uc1_spinBox");
        sizePolicy.setHeightForWidth(uc1_spinBox->sizePolicy().hasHeightForWidth());
        uc1_spinBox->setSizePolicy(sizePolicy);
        uc1_spinBox->setMaximum(1000);

        inputFormLayout->setWidget(5, QFormLayout::FieldRole, uc1_spinBox);

        pc1_label = new QLabel(manualTab);
        pc1_label->setObjectName("pc1_label");

        inputFormLayout->setWidget(6, QFormLayout::LabelRole, pc1_label);

        pc1_spinBox = new QSpinBox(manualTab);
        pc1_spinBox->setObjectName("pc1_spinBox");
        sizePolicy.setHeightForWidth(pc1_spinBox->sizePolicy().hasHeightForWidth());
        pc1_spinBox->setSizePolicy(sizePolicy);
        pc1_spinBox->setMaximum(1000);

        inputFormLayout->setWidget(6, QFormLayout::FieldRole, pc1_spinBox);

        uc2_label = new QLabel(manualTab);
        uc2_label->setObjectName("uc2_label");

        inputFormLayout->setWidget(7, QFormLayout::LabelRole, uc2_label);

        pc2_label = new QLabel(manualTab);
        pc2_label->setObjectName("pc2_label");

        inputFormLayout->setWidget(8, QFormLayout::LabelRole, pc2_label);

        n_label = new QLabel(manualTab);
        n_label->setObjectName("n_label");

        inputFormLayout->setWidget(0, QFormLayout::LabelRole, n_label);

        uc2_spinBox = new QSpinBox(manualTab);
        uc2_spinBox->setObjectName("uc2_spinBox");
        sizePolicy.setHeightForWidth(uc2_spinBox->sizePolicy().hasHeightForWidth());
        uc2_spinBox->setSizePolicy(sizePolicy);
        uc2_spinBox->setMaximum(1000);

        inputFormLayout->setWidget(7, QFormLayout::FieldRole, uc2_spinBox);

        pc2_spinBox = new QSpinBox(manualTab);
        pc2_spinBox->setObjectName("pc2_spinBox");
        sizePolicy.setHeightForWidth(pc2_spinBox->sizePolicy().hasHeightForWidth());
        pc2_spinBox->setSizePolicy(sizePolicy);
        pc2_spinBox->setMaximum(1000);

        inputFormLayout->setWidget(8, QFormLayout::FieldRole, pc2_spinBox);


        verticalLayout_3->addLayout(inputFormLayout);

        inputPushButton = new QPushButton(manualTab);
        inputPushButton->setObjectName("inputPushButton");

        verticalLayout_3->addWidget(inputPushButton);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        outputPlainTextEdit = new QPlainTextEdit(manualTab);
        outputPlainTextEdit->setObjectName("outputPlainTextEdit");

        horizontalLayout->addWidget(outputPlainTextEdit);

        clearPushButton = new QPushButton(manualTab);
        clearPushButton->setObjectName("clearPushButton");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(clearPushButton->sizePolicy().hasHeightForWidth());
        clearPushButton->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(clearPushButton);


        verticalLayout_3->addLayout(horizontalLayout);

        inputFirstTaskTabWidget->addTab(manualTab, QString());
        FileTab = new QWidget();
        FileTab->setObjectName("FileTab");
        verticalLayout_4 = new QVBoxLayout(FileTab);
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        inputFileLineEdit = new QLineEdit(FileTab);
        inputFileLineEdit->setObjectName("inputFileLineEdit");

        horizontalLayout_2->addWidget(inputFileLineEdit);

        inputFilePushButton = new QPushButton(FileTab);
        inputFilePushButton->setObjectName("inputFilePushButton");

        horizontalLayout_2->addWidget(inputFilePushButton);


        verticalLayout_4->addLayout(horizontalLayout_2);

        outputFilePlainTextEdit = new QPlainTextEdit(FileTab);
        outputFilePlainTextEdit->setObjectName("outputFilePlainTextEdit");

        verticalLayout_4->addWidget(outputFilePlainTextEdit);

        clearFilePushButton = new QPushButton(FileTab);
        clearFilePushButton->setObjectName("clearFilePushButton");

        verticalLayout_4->addWidget(clearFilePushButton);

        inputFirstTaskTabWidget->addTab(FileTab, QString());

        verticalLayout_2->addWidget(inputFirstTaskTabWidget);

        tabWidget->addTab(firstTaskTab, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(QueueTaskWindow);

        tabWidget->setCurrentIndex(0);
        inputFirstTaskTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QueueTaskWindow);
    } // setupUi

    void retranslateUi(QDialog *QueueTaskWindow)
    {
        QueueTaskWindow->setWindowTitle(QCoreApplication::translate("QueueTaskWindow", "Dialog", nullptr));
        conditionLabel->setText(QCoreApplication::translate("QueueTaskWindow", "\320\222 \320\274\320\260\320\263\320\260\320\267\320\270\320\275\320\265 \321\200\320\260\320\261\320\276\321\202\320\260\321\216\321\202 \320\264\320\262\320\265 \320\272\320\260\321\201\321\201\321\213. \320\237\320\276\320\272\321\203\320\277\320\260\321\202\320\265\320\273\320\270 \320\262\321\213\321\201\321\202\321\200\320\260\320\270\320\262\320\260\321\216\321\202\321\201\321\217 \320\262 \320\264\320\262\320\265 \320\276\321\202\320\264\320\265\320\273\321\214\320\275\321\213\320\265 \320\276\321\207\320\265\321\200\320\265\320\264\320\270: \321\201\320\275\320\260\321\207\320\260\320\273\320\260 \320\267\320\260\320\277\320\276\320\273\320\275\321\217\320\265\321\202\321\201\321\217 \320\276\321\207\320\265\321\200\320\265\320\264\321\214 \320\272 \320\277\320\265\321\200\320\262\320\276\320\271 \320\272\320\260\321\201\321\201\320\265, \320\267\320\260\321\202\320\265\320\274 \342\200\224 \320\272\320\276 \320\262\321\202\320\276\321\200\320\276\320\271. \320\232\320\260\320\266\320\264\321\213\320"
                        "\271 \320\277\320\276\320\272\321\203\320\277\320\260\321\202\320\265\320\273\321\214 \320\267\320\260\320\264\320\260\320\265\321\202\321\201\321\217 \321\201\320\262\320\276\320\270\320\274 \320\275\320\276\320\274\320\265\321\200\320\276\320\274 \320\270 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276\320\274 \320\277\320\276\320\272\321\203\320\277\320\276\320\272. \320\224\320\273\321\217 \320\277\320\265\321\200\320\262\320\276\320\271 \320\272\320\260\321\201\321\201\321\213 \321\203\321\207\320\265\321\202 \320\276\320\264\320\275\320\276\320\271 \320\277\320\276\320\272\321\203\320\277\320\272\320\270 \320\267\320\260\320\275\320\270\320\274\320\260\320\265\321\202 uc1 \321\201\320\265\320\272\321\203\320\275\320\264, \320\260 \320\277\320\265\321\207\320\260\321\202\321\214 \321\207\320\265\320\272\320\260 \320\270 \321\200\320\260\321\201\321\207\320\265\321\202 \342\200\224 \320\265\321\211\320\265 pc1 \321\201\320\265\320\272\321\203\320\275\320\264. \320\224\320\273"
                        "\321\217 \320\262\321\202\320\276\321\200\320\276\320\271 \320\272\320\260\321\201\321\201\321\213 \321\215\321\202\320\270 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217 \342\200\224 uc2 \320\270 pc2 \321\201\320\265\320\272\321\203\320\275\320\264 \321\201\320\276\320\276\321\202\320\262\320\265\321\202\321\201\321\202\320\262\320\265\320\275\320\275\320\276.\n"
"\320\232\320\260\320\266\320\264\321\213\320\265 k \320\274\320\270\320\275\321\203\321\202 \320\262 \320\276\321\207\320\265\321\200\320\265\320\264\321\214 \320\272 \320\277\320\265\321\200\320\262\320\276\320\271 \320\272\320\260\321\201\321\201\320\265 \321\201\321\202\320\260\320\275\320\276\320\262\320\270\321\202\321\201\321\217 n \320\275\320\276\320\262\321\213\321\205 \320\277\320\276\320\272\321\203\320\277\320\260\321\202\320\265\320\273\320\265\320\271, \320\260 \320\272\320\276 \320\262\321\202\320\276\321\200\320\276\320\271 \342\200\224 m \320\277\320\276\320\272\321\203\320\277\320\260\321\202\320\265\320\273\320\265"
                        "\320\271. \320\237\320\265\321\200\320\262\320\260\321\217 \320\272\320\260\321\201\321\201\320\260 \320\261\321\213\320\273\320\260 \321\201\320\273\320\276\320\274\320\260\320\275\320\260 \320\270 \320\275\320\265 \321\200\320\260\320\261\320\276\321\202\320\260\320\273\320\260 \320\277\320\265\321\200\320\262\321\213\320\265 X \320\274\320\270\320\275\321\203\321\202, \320\277\320\276\321\201\320\273\320\265 \321\207\320\265\320\263\320\276 \320\262\320\276\320\267\320\276\320\261\320\275\320\276\320\262\320\270\320\273\320\260 \321\200\320\260\320\261\320\276\321\202\321\203. \320\247\320\265\321\200\320\265\320\267 t \320\274\320\270\320\275\321\203\321\202 \320\277\320\276\321\201\320\273\320\265 \320\275\320\260\321\207\320\260\320\273\320\260 \321\200\320\260\320\261\320\276\321\202\321\213 \320\274\320\260\320\263\320\260\320\267\320\270\320\275\320\260 \320\275\320\260\321\201\321\202\321\203\320\277\320\260\320\265\321\202 \320\276\320\261\320\265\320\264\320\265\320\275\320\275\321\213\320\271 \320"
                        "\277\320\265\321\200\320\265\321\200\321\213\320\262.", nullptr));
        m_label->setText(QCoreApplication::translate("QueueTaskWindow", "\320\241\320\272\320\276\320\273\321\214\320\272\320\276 \320\277\320\276\320\272\321\203\320\277\320\260\321\202\320\265\320\273\320\265\320\271 \320\277\321\200\320\270\321\205\320\276\320\264\320\270\321\202 \320\262\320\276 \320\262\321\202\320\276\321\200\321\203\321\216 \320\272\320\260\321\201\321\201\321\203 \320\272\320\260\320\266\320\264\321\213\320\265 k \320\274\320\270\320\275\321\203\321\202:", nullptr));
        k_label->setText(QCoreApplication::translate("QueueTaskWindow", "\320\230\320\275\321\202\320\265\321\200\320\262\320\260\320\273 \320\262 \320\274\320\270\320\275\321\203\321\202\320\260\321\205, \321\207\320\265\321\200\320\265\320\267 \320\272\320\276\321\202\320\276\321\200\321\213\320\271 \320\277\321\200\320\270\321\205\320\276\320\264\321\217\321\202 \320\275\320\276\320\262\321\213\320\265 \320\277\320\276\320\272\321\203\320\277\320\260\321\202\320\265\320\273\320\270:", nullptr));
        X_label->setText(QCoreApplication::translate("QueueTaskWindow", "\320\241\320\272\320\276\320\273\321\214\320\272\320\276 \320\274\320\270\320\275\321\203\321\202 \320\277\320\265\321\200\320\262\320\260\321\217 \320\272\320\260\321\201\321\201\320\260 \320\275\320\265 \321\200\320\260\320\261\320\276\321\202\320\260\320\273\320\260 (\320\261\321\213\320\273\320\260 \321\201\320\273\320\276\320\274\320\260\320\275\320\260):", nullptr));
        t_label->setText(QCoreApplication::translate("QueueTaskWindow", "\320\247\320\265\321\200\320\265\320\267 \321\201\320\272\320\276\320\273\321\214\320\272\320\276 \320\274\320\270\320\275\321\203\321\202 \320\277\320\276\321\201\320\273\320\265 \320\275\320\260\321\207\320\260\320\273\320\260 \321\200\320\260\320\261\320\276\321\202\321\213 \320\274\320\260\320\263\320\260\320\267\320\270\320\275\320\260 \320\275\320\260\321\201\321\202\321\203\320\277\320\260\320\265\321\202 \320\276\320\261\320\265\320\264\320\265\320\275\320\275\321\213\320\271 \320\277\320\265\321\200\320\265\321\200\321\213\320\262:", nullptr));
        uc1_label->setText(QCoreApplication::translate("QueueTaskWindow", "\320\222\321\200\320\265\320\274\321\217 (\321\201\320\265\320\272\321\203\320\275\320\264) \320\275\320\260 \320\276\321\204\320\276\321\200\320\274\320\273\320\265\320\275\320\270\320\265 \320\276\320\264\320\275\320\276\320\271 \320\277\320\276\320\272\321\203\320\277\320\272\320\270 \320\275\320\260 \320\277\320\265\321\200\320\262\320\276\320\271 \320\272\320\260\321\201\321\201\320\265:", nullptr));
        pc1_label->setText(QCoreApplication::translate("QueueTaskWindow", "\320\222\321\200\320\265\320\274\321\217 (\321\201\320\265\320\272\321\203\320\275\320\264) \320\275\320\260 \320\277\320\265\321\207\320\260\321\202\321\214 \321\207\320\265\320\272\320\260 \320\270 \321\200\320\260\321\201\321\207\320\265\321\202 \320\275\320\260 \320\277\320\265\321\200\320\262\320\276\320\271 \320\272\320\260\321\201\321\201\320\265:", nullptr));
        uc2_label->setText(QCoreApplication::translate("QueueTaskWindow", "\320\222\321\200\320\265\320\274\321\217 (\321\201\320\265\320\272\321\203\320\275\320\264) \320\275\320\260 \320\276\321\204\320\276\321\200\320\274\320\273\320\265\320\275\320\270\320\265 \320\276\320\264\320\275\320\276\320\271 \320\277\320\276\320\272\321\203\320\277\320\272\320\270 \320\275\320\260 \320\262\321\202\320\276\321\200\320\276\320\271 \320\272\320\260\321\201\321\201\320\265:", nullptr));
        pc2_label->setText(QCoreApplication::translate("QueueTaskWindow", "\320\222\321\200\320\265\320\274\321\217 (\321\201\320\265\320\272\321\203\320\275\320\264) \320\275\320\260 \320\277\320\265\321\207\320\260\321\202\321\214 \321\207\320\265\320\272\320\260 \320\270 \321\200\320\260\321\201\321\207\320\265\321\202 \320\275\320\260 \320\262\321\202\320\276\321\200\320\276\320\271 \320\272\320\260\321\201\321\201\320\265:", nullptr));
        n_label->setText(QCoreApplication::translate("QueueTaskWindow", "\320\241\320\272\320\276\320\273\321\214\320\272\320\276 \320\277\320\276\320\272\321\203\320\277\320\260\321\202\320\265\320\273\320\265\320\271 \320\277\321\200\320\270\321\205\320\276\320\264\320\270\321\202 \320\262 \320\276\321\207\320\265\321\200\320\265\320\264\321\214 \320\272 \320\277\320\265\321\200\320\262\320\276\320\271 \320\272\320\260\321\201\321\201\320\265 \320\272\320\260\320\266\320\264\321\213\320\265 k \320\274\320\270\320\275\321\203\321\202:", nullptr));
        inputPushButton->setText(QCoreApplication::translate("QueueTaskWindow", "\320\222\320\262\320\265\321\201\321\202\320\270", nullptr));
        clearPushButton->setText(QCoreApplication::translate("QueueTaskWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \320\262\321\213\320\262\320\276\320\264", nullptr));
        inputFirstTaskTabWidget->setTabText(inputFirstTaskTabWidget->indexOf(manualTab), QCoreApplication::translate("QueueTaskWindow", "\320\222\321\200\321\203\321\207\320\275\321\203\321\216", nullptr));
        inputFileLineEdit->setPlaceholderText(QCoreApplication::translate("QueueTaskWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \321\204\320\260\320\271\320\273\320\260 (example.txt)", nullptr));
        inputFilePushButton->setText(QCoreApplication::translate("QueueTaskWindow", "\320\222\320\262\320\265\321\201\321\202\320\270", nullptr));
        clearFilePushButton->setText(QCoreApplication::translate("QueueTaskWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \320\262\321\213\320\262\320\276\320\264", nullptr));
        inputFirstTaskTabWidget->setTabText(inputFirstTaskTabWidget->indexOf(FileTab), QCoreApplication::translate("QueueTaskWindow", "\320\230\320\267 \321\204\320\260\320\271\320\273\320\260", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(firstTaskTab), QCoreApplication::translate("QueueTaskWindow", "\320\227\320\260\320\264\320\260\320\275\320\270\320\265 1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QueueTaskWindow: public Ui_QueueTaskWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUEUETASKWINDOW_H
