#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include "engrus_translator.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_engrusFilePushButton_clicked();
    void on_engbelrusFilePushButton_clicked();

    void update_engrusTableWidget();
    void update_engbelrusTableWidget();

private:
    Ui::MainWindow *ui;
    EngRus_translator *engrus_dictionary;
    EngBelRus_translator *engbelrus_dictionary;
};
#endif // MAINWINDOW_H
