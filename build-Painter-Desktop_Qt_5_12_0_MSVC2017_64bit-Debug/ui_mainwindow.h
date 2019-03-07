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
#include <QtWidgets/QGridLayout>
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
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *redColorButton;
    QPushButton *redColorButton_2;
    QPushButton *redColorButton_3;
    QPushButton *greenColorButton;
    QPushButton *greenColorButton_2;
    QPushButton *greenColorButton_3;
    QPushButton *blueColorButton;
    QPushButton *blueColorButton_2;
    QPushButton *blueColorButton_3;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QPushButton *Emoji3;
    QPushButton *Emoji7;
    QPushButton *Emoji9;
    QPushButton *Emoji1;
    QPushButton *Emoji4;
    QPushButton *Emoji2;
    QPushButton *Emoji5;
    QPushButton *Emoji6;
    QPushButton *Emoji8;
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
        layoutWidget = new QWidget(frame);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 160, 181, 161));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        redColorButton = new QPushButton(layoutWidget);
        redColorButton->setObjectName(QString::fromUtf8("redColorButton"));
        redColorButton->setStyleSheet(QString::fromUtf8("background-color: red;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;"));

        gridLayout->addWidget(redColorButton, 0, 0, 1, 1);

        redColorButton_2 = new QPushButton(layoutWidget);
        redColorButton_2->setObjectName(QString::fromUtf8("redColorButton_2"));
        redColorButton_2->setStyleSheet(QString::fromUtf8("background-color: cyan;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: cyan;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;"));

        gridLayout->addWidget(redColorButton_2, 0, 1, 1, 1);

        redColorButton_3 = new QPushButton(layoutWidget);
        redColorButton_3->setObjectName(QString::fromUtf8("redColorButton_3"));
        redColorButton_3->setStyleSheet(QString::fromUtf8("background-color: black;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: black;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;"));

        gridLayout->addWidget(redColorButton_3, 0, 2, 1, 1);

        greenColorButton = new QPushButton(layoutWidget);
        greenColorButton->setObjectName(QString::fromUtf8("greenColorButton"));
        greenColorButton->setStyleSheet(QString::fromUtf8("background-color: green;\n"
"border-color: green;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;"));

        gridLayout->addWidget(greenColorButton, 1, 0, 1, 1);

        greenColorButton_2 = new QPushButton(layoutWidget);
        greenColorButton_2->setObjectName(QString::fromUtf8("greenColorButton_2"));
        greenColorButton_2->setStyleSheet(QString::fromUtf8("background-color: magenta;\n"
"border-color: magenta;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;"));

        gridLayout->addWidget(greenColorButton_2, 1, 1, 1, 1);

        greenColorButton_3 = new QPushButton(layoutWidget);
        greenColorButton_3->setObjectName(QString::fromUtf8("greenColorButton_3"));
        greenColorButton_3->setStyleSheet(QString::fromUtf8("background-color: pink;\n"
"border-color: green;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;"));

        gridLayout->addWidget(greenColorButton_3, 1, 2, 1, 1);

        blueColorButton = new QPushButton(layoutWidget);
        blueColorButton->setObjectName(QString::fromUtf8("blueColorButton"));
        blueColorButton->setStyleSheet(QString::fromUtf8("background-color: blue;\n"
"border-color: blue;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;"));

        gridLayout->addWidget(blueColorButton, 2, 0, 1, 1);

        blueColorButton_2 = new QPushButton(layoutWidget);
        blueColorButton_2->setObjectName(QString::fromUtf8("blueColorButton_2"));
        blueColorButton_2->setStyleSheet(QString::fromUtf8("background-color: yellow;\n"
"border-color: yellow;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;"));

        gridLayout->addWidget(blueColorButton_2, 2, 1, 1, 1);

        blueColorButton_3 = new QPushButton(layoutWidget);
        blueColorButton_3->setObjectName(QString::fromUtf8("blueColorButton_3"));
        blueColorButton_3->setStyleSheet(QString::fromUtf8("background-color: orange;\n"
"border-color: black;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;"));

        gridLayout->addWidget(blueColorButton_3, 2, 2, 1, 1);

        widget = new QWidget(frame);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 360, 188, 188));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        Emoji3 = new QPushButton(widget);
        Emoji3->setObjectName(QString::fromUtf8("Emoji3"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Segoe UI Emoji"));
        font1.setPointSize(15);
        Emoji3->setFont(font1);
        Emoji3->setLayoutDirection(Qt::LeftToRight);
        Emoji3->setStyleSheet(QString::fromUtf8("background-color: black;\n"
"border-color: white;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;"));

        gridLayout_2->addWidget(Emoji3, 2, 0, 1, 1);

        Emoji7 = new QPushButton(widget);
        Emoji7->setObjectName(QString::fromUtf8("Emoji7"));
        Emoji7->setFont(font1);
        Emoji7->setLayoutDirection(Qt::LeftToRight);
        Emoji7->setStyleSheet(QString::fromUtf8("background-color: black;\n"
"border-color: white;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;"));

        gridLayout_2->addWidget(Emoji7, 0, 2, 1, 1);

        Emoji9 = new QPushButton(widget);
        Emoji9->setObjectName(QString::fromUtf8("Emoji9"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Segoe UI Emoji"));
        font2.setPointSize(16);
        Emoji9->setFont(font2);
        Emoji9->setLayoutDirection(Qt::LeftToRight);
        Emoji9->setStyleSheet(QString::fromUtf8("background-color: black;\n"
"border-color: white;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;"));

        gridLayout_2->addWidget(Emoji9, 2, 2, 1, 1);

        Emoji1 = new QPushButton(widget);
        Emoji1->setObjectName(QString::fromUtf8("Emoji1"));
        Emoji1->setFont(font1);
        Emoji1->setLayoutDirection(Qt::LeftToRight);
        Emoji1->setStyleSheet(QString::fromUtf8("background-color: black;\n"
"border-color: white;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;"));

        gridLayout_2->addWidget(Emoji1, 0, 0, 1, 1);

        Emoji4 = new QPushButton(widget);
        Emoji4->setObjectName(QString::fromUtf8("Emoji4"));
        Emoji4->setFont(font1);
        Emoji4->setStyleSheet(QString::fromUtf8("background-color: black;\n"
"border-color: white;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;"));

        gridLayout_2->addWidget(Emoji4, 0, 1, 1, 1);

        Emoji2 = new QPushButton(widget);
        Emoji2->setObjectName(QString::fromUtf8("Emoji2"));
        Emoji2->setFont(font1);
        Emoji2->setLayoutDirection(Qt::LeftToRight);
        Emoji2->setStyleSheet(QString::fromUtf8("background-color: black;\n"
"border-color: white;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;"));

        gridLayout_2->addWidget(Emoji2, 1, 0, 1, 1);

        Emoji5 = new QPushButton(widget);
        Emoji5->setObjectName(QString::fromUtf8("Emoji5"));
        Emoji5->setFont(font1);
        Emoji5->setLayoutDirection(Qt::LeftToRight);
        Emoji5->setStyleSheet(QString::fromUtf8("background-color: black;\n"
"border-color: white;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;"));

        gridLayout_2->addWidget(Emoji5, 1, 1, 1, 1);

        Emoji6 = new QPushButton(widget);
        Emoji6->setObjectName(QString::fromUtf8("Emoji6"));
        Emoji6->setFont(font1);
        Emoji6->setStyleSheet(QString::fromUtf8("background-color: black;\n"
"border-color: white;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;"));

        gridLayout_2->addWidget(Emoji6, 2, 1, 1, 1);

        Emoji8 = new QPushButton(widget);
        Emoji8->setObjectName(QString::fromUtf8("Emoji8"));
        Emoji8->setFont(font1);
        Emoji8->setStyleSheet(QString::fromUtf8("background-color: black;\n"
"border-color: white;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;"));

        gridLayout_2->addWidget(Emoji8, 1, 2, 1, 1);

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
        redColorButton->setText(QApplication::translate("MainWindow", "Red", nullptr));
        redColorButton_2->setText(QApplication::translate("MainWindow", "Cyan", nullptr));
        redColorButton_3->setText(QApplication::translate("MainWindow", "Black", nullptr));
        greenColorButton->setText(QApplication::translate("MainWindow", "Green", nullptr));
        greenColorButton_2->setText(QApplication::translate("MainWindow", "Magenat", nullptr));
        greenColorButton_3->setText(QApplication::translate("MainWindow", "Pink", nullptr));
        blueColorButton->setText(QApplication::translate("MainWindow", "Blue", nullptr));
        blueColorButton_2->setText(QApplication::translate("MainWindow", "Yellow", nullptr));
        blueColorButton_3->setText(QApplication::translate("MainWindow", "Orange", nullptr));
        Emoji3->setText(QApplication::translate("MainWindow", "\360\237\230\203", nullptr));
        Emoji7->setText(QApplication::translate("MainWindow", "\360\237\244\251", nullptr));
        Emoji9->setText(QApplication::translate("MainWindow", "\342\235\204\357\270\217", nullptr));
        Emoji1->setText(QApplication::translate("MainWindow", "\360\237\230\216", nullptr));
        Emoji4->setText(QApplication::translate("MainWindow", "\360\237\230\212", nullptr));
        Emoji2->setText(QApplication::translate("MainWindow", "\360\237\230\216", nullptr));
        Emoji5->setText(QApplication::translate("MainWindow", "\360\237\230\203", nullptr));
        Emoji6->setText(QApplication::translate("MainWindow", "\360\237\230\215", nullptr));
        Emoji8->setText(QApplication::translate("MainWindow", "\360\237\230\212", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
