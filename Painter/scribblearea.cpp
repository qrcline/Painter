#include <QImage>
#include <QtWidgets>
#include "scribblearea.h"

ScribbleArea::ScribbleArea(QWidget *parent) : QWidget(parent)
{
    setAttribute(Qt::WA_StaticContents);

    scribbling=false;
    myPenColor=Qt::blue;
    myPenWidth=2;

    resetImage();

}

void ScribbleArea::mousePressEvent(QMouseEvent *event)
{

}

void ScribbleArea::mouseReleaseEvent(QMouseEvent *event)
{

}

void ScribbleArea::mouseMoveEvent(QMouseEvent *event)
{

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

}

void ScribbleArea::drawText(const QPoint &at)
{

}
