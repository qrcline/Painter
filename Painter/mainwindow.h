#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "scribblearea.h"

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
    void on_horizontalSlider_valueChanged(int value);

    void on_redColorButton_clicked();



    void on_greenColorButton_clicked();

    void on_blueColorButton_clicked();

    void on_cyanButton_clicked();

    void on_magentaButton_clicked();

    void on_yellowButton_clicked();

    void on_blackButton_clicked();

    void on_pinkButton_clicked();

    void on_orangeButton_clicked();

    void on_Emoji1_clicked();

    void on_Emoji2_clicked();

    void on_Emoji3_clicked();

    void on_Emoji4_clicked();

    void on_Emoji5_clicked();

    void on_Emoji6_clicked();

    void on_Emoji7_clicked();

    void on_Emoji8_clicked();

    void on_Emoji9_clicked();

private:
    Ui::MainWindow *ui;
    ScribbleArea *scribbleArea;
    QPixmap mouseImage;
};

#endif // MAINWINDOW_H
