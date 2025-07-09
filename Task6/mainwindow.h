#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "graphicsscene.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_saveAction_triggered();
    void on_openAction_triggered();

    void on_rectangleAction_triggered();
    void on_ellipseAction_triggered();
    void on_rhombusAction_triggered();

    void on_outlineColorAction_triggered();
    void on_fillingColorAction_triggered();

    void on_noFillingAction_triggered();
    void on_onlyFillingAction_triggered();
    void on_outlineWithFillingAction_triggered();

    void undoLastAction();

protected:
    void keyPressEvent(QKeyEvent *event) override;

private:
    Ui::MainWindow *ui;
    GraphicsScene *scene;
    QColor currentOutlineColor;
    QColor currentFillColor;
    FillStyle currentFillStyle;

    QAction *undoAction;

    void setupUI();
    void connectSignals();
    void updateStatusBar();
    void updateFillStyleCheckState();
};

#endif
