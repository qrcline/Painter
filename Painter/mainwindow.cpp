#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    scribbleArea(new ScribbleArea)

{
    ui->setupUi(this);
    ui->scribblePlaceHolder->addWidget(scribbleArea); //Addding the widget in the placeholder area
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    scribbleArea->setPenSize(value);
}

void MainWindow::on_redColorButton_clicked()
{
    scribbleArea->setPenColor(Qt::red);
}

void MainWindow::on_greenColorButton_clicked()
{
    scribbleArea->setPenColor(Qt::green);
}

void MainWindow::on_blueColorButton_clicked()
{
    scribbleArea->setPenColor(Qt::blue);
}

void MainWindow::on_hiEnglish_clicked()
{
    scribbleArea->setPenText("Hi!");
}

void MainWindow::on_hiFrench_clicked()
{
    scribbleArea->setPenText("Salut!");
}

void MainWindow::on_biBul_clicked()
{
    scribbleArea->setPenText("здрасти!");
}
