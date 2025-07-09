#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QColorDialog>
#include <QFileDialog>
#include <QMessageBox>
#include <QKeyEvent>
#include <QLabel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::MainWindow),
    currentOutlineColor(Qt::black),
    currentFillColor(Qt::white),
    currentFillStyle(FillStyle::Outline)
{
    ui->setupUi(this);
    setupUI();
    connectSignals();
    updateStatusBar();
    updateFillStyleCheckState();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setupUI()
{
    scene = new GraphicsScene(this);
    scene->setBackgroundBrush(Qt::white);
    ui->canvas->setScene(scene);

    ui->noFillingAction->setCheckable(true);
    ui->onlyFillingAction->setCheckable(true);
    ui->outlineWithFillingAction->setCheckable(true);

    ui->outlineWithFillingAction->setChecked(true);

    undoAction = new QAction(tr("Отменить"), this);
    undoAction->setShortcut(QKeySequence::Undo);
    connect(undoAction, &QAction::triggered, this, &MainWindow::undoLastAction);

    QMenu *editMenu = menuBar()->addMenu(tr("Правка"));
    editMenu->addAction(undoAction);

    addAction(undoAction);

    setWindowTitle(tr("Графический редактор Тимошенко Никита 5 группа 1 курс ПМ ФПМИ БГУ"));
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    if (event->matches(QKeySequence::Undo)) {
        undoLastAction();
        event->accept();
        return;
    }

    QMainWindow::keyPressEvent(event);
}

void MainWindow::undoLastAction()
{
    if (scene->undoLastShape()) {
        updateStatusBar();
        ui->statusbar->showMessage(tr("Отменена последняя фигура"));
    } else {
        ui->statusbar->showMessage(tr("Нечего отменять"));
    }
}

void MainWindow::connectSignals()
{
}

void MainWindow::updateStatusBar()
{
    QString fillStyleStr;
    switch (currentFillStyle) {
    case FillStyle::NoFill:
        fillStyleStr = tr("Без заливки");
        break;
    case FillStyle::Filled:
        fillStyleStr = tr("Только заливка");
        break;
    case FillStyle::Outline:
        fillStyleStr = tr("Контур и заливка");
        break;
    }

    ui->statusbar->showMessage(tr("Фигур: %1 | Стиль: %2")
                                   .arg(scene->getShapes().size())
                                   .arg(fillStyleStr));
}

void MainWindow::updateFillStyleCheckState()
{
    ui->noFillingAction->setChecked(currentFillStyle == FillStyle::NoFill);
    ui->onlyFillingAction->setChecked(currentFillStyle == FillStyle::Filled);
    ui->outlineWithFillingAction->setChecked(currentFillStyle == FillStyle::Outline);
}

void MainWindow::on_saveAction_triggered()
{
    QString fileName = QFileDialog::getSaveFileName(
        this, tr("Сохранить фигуры"), "", tr("Файлы фигур (*.shapes);;Все файлы (*)"));

    if (fileName.isEmpty())
        return;

    if (scene->saveToFile(fileName)) {
        ui->statusbar->showMessage(tr("Сохранено %1 фигур в файл: %2")
                                       .arg(scene->getShapes().size()).arg(fileName));
    } else {
        QMessageBox::warning(this, tr("Ошибка сохранения"),
                             tr("Не удалось сохранить файл."));
    }
}

void MainWindow::on_openAction_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(
        this, tr("Загрузить фигуры"), "", tr("Файлы фигур (*.shapes);;Все файлы (*)"));

    if (fileName.isEmpty())
        return;

    if (scene->loadFromFile(fileName)) {
        updateStatusBar();
        ui->statusbar->showMessage(tr("Загружено %1 фигур из файла: %2")
                                       .arg(scene->getShapes().size()).arg(fileName));
    } else {
        QMessageBox::warning(this, tr("Ошибка загрузки"),
                             tr("Не удалось загрузить файл или формат файла некорректен."));
    }
}

void MainWindow::on_rectangleAction_triggered()
{
    scene->setCurrentShapeType(ShapeType::Rectangle);
    ui->statusbar->showMessage(tr("Выбрана фигура: Прямоугольник"));
}

void MainWindow::on_ellipseAction_triggered()
{
    scene->setCurrentShapeType(ShapeType::Ellipse);
    ui->statusbar->showMessage(tr("Выбрана фигура: Эллипс"));
}

void MainWindow::on_rhombusAction_triggered()
{
    scene->setCurrentShapeType(ShapeType::Diamond);
    ui->statusbar->showMessage(tr("Выбрана фигура: Ромб"));
}

void MainWindow::on_outlineColorAction_triggered()
{
    QColor color = QColorDialog::getColor(currentOutlineColor, this, tr("Выберите цвет контура"));
    if (color.isValid()) {
        currentOutlineColor = color;
        scene->setCurrentOutlineColor(currentOutlineColor);
        ui->statusbar->showMessage(tr("Цвет контура: %1").arg(currentOutlineColor.name()));
    }
}

void MainWindow::on_fillingColorAction_triggered()
{
    QColor color = QColorDialog::getColor(currentFillColor, this, tr("Выберите цвет заливки"));
    if (color.isValid()) {
        currentFillColor = color;
        scene->setCurrentFillColor(currentFillColor);
        ui->statusbar->showMessage(tr("Цвет заливки: %1").arg(currentFillColor.name()));
    }
}

void MainWindow::on_noFillingAction_triggered()
{
    currentFillStyle = FillStyle::NoFill;
    scene->setCurrentFillStyle(currentFillStyle);
    updateFillStyleCheckState();
    updateStatusBar();
}

void MainWindow::on_onlyFillingAction_triggered()
{
    currentFillStyle = FillStyle::Filled;
    scene->setCurrentFillStyle(currentFillStyle);
    updateFillStyleCheckState();
    updateStatusBar();
}

void MainWindow::on_outlineWithFillingAction_triggered()
{
    currentFillStyle = FillStyle::Outline;
    scene->setCurrentFillStyle(currentFillStyle);
    updateFillStyleCheckState();
    updateStatusBar();
}
