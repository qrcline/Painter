#include <QImage>
#include <QtWidgets>
#include <iostream>
#include "scribblearea.h"

ScribbleArea::ScribbleArea(QWidget *parent) : QWidget(parent)
{
    setAttribute(Qt::WA_StaticContents);

    scribbling=false;
    myPenColor=Qt::blue;
    myPenWidth=2;

    resetImage();

}

void ScribbleArea::setPenSize(int size)
{
    myPenWidth=size;
}

void ScribbleArea::setPenColor(QColor penColor)
{
    myPenColor=penColor;
}

void ScribbleArea::setPenStyle(bool style)
{
    penStyle=style;
}

void ScribbleArea::setPenText(QString text)
{
    penText=text;

}



void ScribbleArea::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        lastPoint=event->pos();
        scribbling=true;
        std::cout<<"Mouse Press"<<std::endl;
    }

    if(event->button()==Qt::RightButton)
    {
        drawText(event->pos());
    }

}

void ScribbleArea::mouseReleaseEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton &&scribbling)
    {
        drawLineTo(event->pos());
        scribbling=false;
        std::cout<<"Mouse Release"<<std::endl;
    }
}

void ScribbleArea::mouseMoveEvent(QMouseEvent *event)
{
    if(event->buttons()& Qt::LeftButton && scribbling)
    {
        drawLineTo(event->pos());
        std::cout<<"Mouse Move"<<std::endl;
    }
}

void ScribbleArea::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QRect dirtyRect= event->rect();
    painter.drawImage(dirtyRect,image,dirtyRect);


}

void ScribbleArea::resizeEvent(QResizeEvent *event)
{
    resetImage();
    update(); //emitting signal
    QWidget::resizeEvent(event);
}

void ScribbleArea::resetImage()
{
    QSize widgetSize=QSize(width(), height());
    QImage newImage(widgetSize, QImage::Format_RGB32);
    newImage.fill(qRgb(255,255,255));
    image=newImage;
}

void ScribbleArea::drawLineTo(const QPoint &endPoint)
{
    QPainter painter(&image);
    painter.setPen(QPen(myPenColor,myPenWidth,
                   Qt::SolidLine,
                   Qt::RoundCap,
                   Qt::RoundJoin));
    painter.drawLine(lastPoint,endPoint);
    update();
    lastPoint=endPoint;
}

void ScribbleArea::drawText(const QPoint &at)
{
    QPainter painter(&image);
    QFont serifFont("Times",15,QFont::Bold);
    painter.setFont(serifFont);
    painter.drawText(at,"hello");
    update();

}
