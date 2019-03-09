#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    scribbleArea(new ScribbleArea)

{
    ui->setupUi(this);
    ui->scribblePlaceHolder->addWidget(scribbleArea); //Addding the widget in the placeholder area

    QString steakFilename =":/mouse.png";
    if(mouseImage.load(steakFilename))
       {
           mouseImage=mouseImage.scaled(ui->mousePicture->size(),Qt::KeepAspectRatioByExpanding);
       }
    ui->mousePicture->setPixmap(mouseImage);

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



void MainWindow::on_cyanButton_clicked()
{
     scribbleArea->setPenColor(Qt::cyan);
}

void MainWindow::on_magentaButton_clicked()
{
     scribbleArea->setPenColor(Qt::magenta);
}

void MainWindow::on_yellowButton_clicked()
{
     scribbleArea->setPenColor(Qt::yellow);
}

void MainWindow::on_blackButton_clicked()
{
     scribbleArea->setPenColor(Qt::black);
}

void MainWindow::on_pinkButton_clicked()
{

     scribbleArea->setPenColor(QColor(255,20,147,255));
}

void MainWindow::on_orangeButton_clicked()
{
     scribbleArea->setPenColor(QColor(255,165,0,255));
}

void MainWindow::on_Emoji1_clicked()
{
    QFont font("Segoe UI Emoji",15);
        scribbleArea->setPenFont(font);
       scribbleArea->setPenText("😎");
}

void MainWindow::on_Emoji2_clicked()
{
    QFont font("Segoe UI Emoji",15);
        scribbleArea->setPenFont(font);
       scribbleArea->setPenText("😡");
}

void MainWindow::on_Emoji3_clicked()
{
    QFont font("Segoe UI Emoji",15);
        scribbleArea->setPenFont(font);
       scribbleArea->setPenText("😃");
}

void MainWindow::on_Emoji4_clicked()
{
    QFont font("Segoe UI Emoji",15);
        scribbleArea->setPenFont(font);
       scribbleArea->setPenText("😊");
}
void MainWindow::on_Emoji5_clicked()
{
    QFont font("Segoe UI Emoji",15);
        scribbleArea->setPenFont(font);
       scribbleArea->setPenText("😃");
}

void MainWindow::on_Emoji6_clicked()
{
    QFont font("Segoe UI Emoji",15);
        scribbleArea->setPenFont(font);
       scribbleArea->setPenText("😍");
}
void MainWindow::on_Emoji7_clicked()
{
    QFont font("Segoe UI Emoji",15);
        scribbleArea->setPenFont(font);
       scribbleArea->setPenText("🤩");
}
void MainWindow::on_Emoji8_clicked()
{
    QFont font("Segoe UI Emoji",15);
        scribbleArea->setPenFont(font);
       scribbleArea->setPenText("😊");
}

void MainWindow::on_Emoji9_clicked()
{
    QFont font("Segoe UI Emoji",20);
        scribbleArea->setPenFont(font);
       scribbleArea->setPenText("❄️");
}
