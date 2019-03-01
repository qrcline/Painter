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

private:
    Ui::MainWindow *ui;
    ScribbleArea *scribbleArea;
};

#endif // MAINWINDOW_H
