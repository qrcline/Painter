/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QFrame *frame;
    QLabel *label;
    QFrame *line;
    QSlider *horizontalSlider;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *redColorButton;
    QPushButton *greenColorButton;
    QPushButton *blueColorButton;
    QLabel *label_4;
    QPushButton *biBul;
    QPushButton *hiEnglish;
    QPushButton *hiFrench;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *scribblePlaceHolder;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1119, 703);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(850, 20, 261, 601));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(91, 10, 81, 31));
        QFont font;
        font.setPointSize(11);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        line = new QFrame(frame);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(10, 40, 241, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        horizontalSlider = new QSlider(frame);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(29, 90, 181, 31));
        horizontalSlider->setMaximum(20);
        horizontalSlider->setSingleStep(2);
        horizontalSlider->setOrientation(Qt::Horizontal);
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 70, 52, 15));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 130, 61, 16));
        redColorButton = new QPushButton(frame);
        redColorButton->setObjectName(QString::fromUtf8("redColorButton"));
        redColorButton->setGeometry(QRect(70, 160, 91, 41));
        greenColorButton = new QPushButton(frame);
        greenColorButton->setObjectName(QString::fromUtf8("greenColorButton"));
        greenColorButton->setGeometry(QRect(70, 210, 91, 41));
        blueColorButton = new QPushButton(frame);
        blueColorButton->setObjectName(QString::fromUtf8("blueColorButton"));
        blueColorButton->setGeometry(QRect(70, 260, 91, 41));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 330, 61, 16));
        biBul = new QPushButton(frame);
        biBul->setObjectName(QString::fromUtf8("biBul"));
        biBul->setGeometry(QRect(70, 460, 91, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Sitka Banner"));
        font1.setPointSize(10);
        biBul->setFont(font1);
        hiEnglish = new QPushButton(frame);
        hiEnglish->setObjectName(QString::fromUtf8("hiEnglish"));
        hiEnglish->setGeometry(QRect(70, 360, 91, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Sitka"));
        font2.setPointSize(15);
        hiEnglish->setFont(font2);
        hiFrench = new QPushButton(frame);
        hiFrench->setObjectName(QString::fromUtf8("hiFrench"));
        hiFrench->setGeometry(QRect(70, 410, 91, 41));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Papyrus"));
        font3.setPointSize(20);
        hiFrench->setFont(font3);
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 821, 621));
        scribblePlaceHolder = new QVBoxLayout(verticalLayoutWidget);
        scribblePlaceHolder->setSpacing(6);
        scribblePlaceHolder->setContentsMargins(11, 11, 11, 11);
        scribblePlaceHolder->setObjectName(QString::fromUtf8("scribblePlaceHolder"));
        scribblePlaceHolder->setContentsMargins(0, 0, 0, 0);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1119, 20));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "Options", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Pen Size", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Pen Color", nullptr));
        redColorButton->setText(QApplication::translate("MainWindow", "Red", nullptr));
        greenColorButton->setText(QApplication::translate("MainWindow", "Green", nullptr));
        blueColorButton->setText(QApplication::translate("MainWindow", "Blue", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Text ", nullptr));
        biBul->setText(QApplication::translate("MainWindow", "\320\267\320\264\321\200\320\260\321\201\321\202\320\270!", nullptr));
        hiEnglish->setText(QApplication::translate("MainWindow", "Hi!", nullptr));
        hiFrench->setText(QApplication::translate("MainWindow", "Salut!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
