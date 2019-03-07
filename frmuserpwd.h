#ifndef FRMUSERPWD_H
#define FRMUSERPWD_H

#include <QDialog>

namespace Ui
{
    class frmUserPwd;
}

class frmUserPwd : public QDialog
{
    Q_OBJECT

public:
    explicit frmUserPwd(QWidget *parent = 0);
    ~frmUserPwd();

protected:
    void mouseMoveEvent(QMouseEvent *e);
    void mousePressEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *);

private slots:
    void on_btnOk_clicked();

private:
    Ui::frmUserPwd *ui;

    QPoint mousePoint;
    bool mousePressed;
    void InitStyle();
    void InitForm();

};

#endif // FRMUSERPWD_H
