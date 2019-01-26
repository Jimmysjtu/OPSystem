#ifndef STATUS_H
#define STATUS_H

#include <QWidget>

class Status : public QWidget
{
    Q_OBJECT
public:
    explicit Status(QWidget *parent = nullptr);
    void setMoveforward();
    void setMovebackward();
    void setRotateClockwise();
    void setRotateAnticlockwise();
    void setOpen();
    void setClose();
    void setWait();
    void setOnline(bool ok);
    void setmodel();

protected:
    void paintEvent(QPaintEvent *event);

private:
    QString imgFile;


};

#endif // STATUS_H
