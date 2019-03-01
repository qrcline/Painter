#ifndef SCRIBBLEAREA_H
#define SCRIBBLEAREA_H

#include <QWidget>

class ScribbleArea : public QWidget
{
    Q_OBJECT
public:
    explicit ScribbleArea(QWidget *parent = nullptr);

signals:

public slots:

    void setPenSize(int size);
    void setPenColor(QColor penColor);
    void setPenStyle(bool style);
    void setPenText(QString text);
    // QWidget interface
protected:
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void paintEvent(QPaintEvent *event);
    void resizeEvent(QResizeEvent *event);

private:

    void resetImage();
    void drawLineTo(const QPoint &endPoint);
    void drawText(const QPoint &at);

    QImage image;
    bool scribbling;
    int myPenWidth;
    QColor myPenColor;
    bool penStyle;
    QString penText;


    QPoint lastPoint; //the last position of the mouse


};

#endif // SCRIBBLEAREA_H
