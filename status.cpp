#include "status.h"
#include "QPainter"
#include <QDebug>
Status::Status(QWidget *parent) : QWidget(parent)
{
    imgFile = ":/image/button/image/wait.png";

}
void Status::paintEvent(QPaintEvent *) {
    QPainter painter(this);
    QImage img(imgFile);
    painter.drawImage(rect(), img);
}

void Status::setMoveforward()
{
    imgFile = ":/image/button/image/left.png";
    update();
}
void Status::setMovebackward()
{
    imgFile = ":/image/button/image/right.png";
    update();

}

void Status::setRotateClockwise()
{
    imgFile = ":/image/button/image/rotating_p.png";
    update();

}

void Status::setRotateAnticlockwise()
{
    imgFile = ":/image/button/image/rotating_m.png";
    update();

}


void Status::setOpen()
{
    imgFile = ":/image/button/image/open.png";
    update();

}

void Status::setClose()
{
    imgFile = ":/image/button/image/close.png";
    update();
}
void Status::setWait()
{
    imgFile = ":/image/button/image/wait.png";
    update();
}
void Status::setOnline(bool ok)
{
    if(ok)
    {
        imgFile = ":/image/button/image/online.png";
        update();
    }
    else {
        imgFile = ":/image/button/image/offline.png";
        update();
    }
}

void Status::setmodel()
{
    imgFile = ":/image/button/image/modelv.png";
    update();
}
