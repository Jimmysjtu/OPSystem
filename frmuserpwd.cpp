#include "frmuserpwd.h"
#include "ui_frmuserpwd.h"
#include "myhelper.h"
#include <QMouseEvent>

frmUserPwd::frmUserPwd(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::frmUserPwd)
{
    ui->setupUi(this);
    this->InitStyle();
    this->InitForm();
    myHelper::FormInCenter(this);
}

frmUserPwd::~frmUserPwd()
{
    delete ui;
}

void frmUserPwd::mouseMoveEvent(QMouseEvent *e)
{
    if (mousePressed && (e->buttons() && Qt::LeftButton)) {
        this->move(e->globalPos() - mousePoint);
        e->accept();
    }
}

void frmUserPwd::mousePressEvent(QMouseEvent *e)
{
    if (e->button() == Qt::LeftButton) {
        mousePressed = true;
        mousePoint = e->globalPos() - this->pos();
        e->accept();
    }
}

void frmUserPwd::mouseReleaseEvent(QMouseEvent *)
{
    mousePressed = false;
}

void frmUserPwd::InitStyle()
{
    this->mousePressed = false;
    this->setProperty("Form", true);
    this->setWindowTitle(ui->lab_Title->text());
    this->setWindowFlags(Qt::FramelessWindowHint | Qt::WindowSystemMenuHint | Qt::WindowMinimizeButtonHint);
    this->setAttribute(Qt::WA_DeleteOnClose);

}

void frmUserPwd::InitForm()
{

}

void frmUserPwd::on_btnOk_clicked()
{
    QString PwdOld = ui->txtOldPwd->text();
    QString PwdNew = ui->txtNewPwd->text();
    QString PwdNewX = ui->txtNewPwdX->text();

    if (PwdOld != APP::CurrentUserPwd) {
        myHelper::ShowMessageBoxError("原密码错误,请重新输入!");
        ui->txtOldPwd->setFocus();
        return;
    }

    if (PwdNew == "") {
        myHelper::ShowMessageBoxError("新密码不能为空,请重新输入!");
        ui->txtNewPwd->setFocus();
        return;
    }

    if (PwdNewX == "") {
        myHelper::ShowMessageBoxError("确认密码不能为空,请重新输入!");
        ui->txtNewPwdX->setFocus();
        return;
    }

    if (PwdNew != PwdNewX) {
        myHelper::ShowMessageBoxError("新密码和确认密码不一致,请重新输入!");
        ui->txtNewPwd->setFocus();
        return;
    }

    QSqlQuery query;
    QString sql = QString("update UserInfo set UserPwd='%1' where UserName='%2'")
                  .arg(PwdNewX).arg(App::CurrentUserName);
    query.exec(sql);

    //重置当前用户新密码,用于退出判断
    APP::CurrentUserPwd = PwdNewX;
    QString TempMsg = "密码修改成功";
    myHelper::ShowMessageBoxInfo(QString("%1,请牢记新密码【%2】!").arg(TempMsg).arg(PwdNewX));
    this->close();
}
