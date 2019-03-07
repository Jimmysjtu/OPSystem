#include "frmuser.h"
#include "ui_frmuser.h"
//#include "myhelper.h"
//#include "frmuserpwd.h"
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QMessageBox>


frmUser::frmUser(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::frmUser)
{
    ui->setupUi(this);

    setWindowIcon(QIcon(":/image/button/image/favicon.ico"));
    setWindowTitle("控制界面");

    this->InitStyle();
    this->InitForm();
    this->ReadUserInfo();
}

frmUser::~frmUser()
{
    delete ui;
}

void frmUser::InitStyle()
{

}

void frmUser::InitForm()
{
    for (int i = 1; i < 10; i++) {
        ui->cboxUserID->addItem(QString("00000%1").arg(i));
    }
    ui->cboxUserRole->addItem("super");
    ui->cboxUserRole->addItem("operator");
}

void frmUser::ReadUserInfo()
{
    ui->listUser->clear();
    QSqlQuery query;
    query.exec("select UserID,UserName,UserRole from UserInfo");
    while (query.next()) {
        QString temp = QString("User %1 [%2]").arg(query.value(1).toString()).arg(query.value(0).toString());
        ui->listUser->addItem(temp);
    }

    if (ui->listUser->count() > 0) {
        ui->listUser->setCurrentRow(0);
    }
}

bool frmUser::CheckAdmin(QString userID)
{
    if (userID == "0") {
        QMessageBox::warning(this,"错误！","超级管理员不能删除和修改!");
        return false;
    }
    return true;
}

bool frmUser::IsExistUser(QString userID)
{
    QSqlQuery query;
    QString sql = QString("select UserID from UserInfo where UserID='%1'").arg(userID);
    query.exec(sql);
    bool result = query.next();

    sql.clear();
    query.clear();
    sql = QString("select UserName from UserInfo where UserName='%1'").arg(userID);
    query.exec(sql);

    result = result || query.next();



    if (result) {
         QMessageBox::warning(this,"错误！","操作员工号或用户名已经存在!");
    }
    return result;
}

bool frmUser::CheckUserInfo(QString userName, QString userPwd)
{
    if (userName == "") {
        QMessageBox::warning(this,"错误！","操作员姓名不能为空,请重新填写!");

        ui->txtUserName->setFocus();
        return false;
    }
    if (userPwd == "") {

        QMessageBox::warning(this,"错误！","操作员密码不能为空,请重新填写!");
        ui->txtUserPwd->setFocus();
        return false;
    }

    return true;
}

void frmUser::on_btnAdd_clicked()
{
    QString userID = ui->cboxUserID->currentText();
    QString userName = ui->txtUserName->text();
    QString userPwd = ui->txtUserPwd->text();

    QString userRole = ui->cboxUserRole->currentText();

    if (!this->CheckUserInfo(userName, userPwd)) {
        return;
    }
    if (this->IsExistUser(userID)) {
        return;
    }

    QSqlQuery query;
    QString sql = "insert into UserInfo(UserID,UserName,UserPwd,UserRole)";
    sql += "values('" + userID + "','";
    sql += userName + "','";
    sql += userPwd + "','";

    sql += userRole + "')";
    query.exec(sql);
    this->ReadUserInfo();
}

void frmUser::on_btnDelete_clicked()
{
    QString temp = ui->listUser->currentIndex().data().toString();
    QString userID = temp.split("[")[1].split("]")[0];
    if (!this->CheckAdmin(userID)) {
        return;
    }

    if (QMessageBox::question(this,tr("提示！"),tr("确定进行删除操作 ？"),QMessageBox::Ok|QMessageBox::Cancel,QMessageBox::Ok)==QMessageBox::Ok) {
        QSqlQuery query;
        QString sql = "delete from UserInfo where UserID='" + userID + "'";
        query.exec(sql);
        this->ReadUserInfo();
    }

}

void frmUser::on_btnUpdate_clicked()
{
    QString temp = ui->listUser->currentIndex().data().toString();
    QString userID = temp.split("[")[1].split("]")[0];
    if (!this->CheckAdmin(userID)) {
        return;
    }

    QString userName = ui->txtUserName->text();
    QString userPwd = ui->txtUserPwd->text();

    QString userRole = ui->cboxUserRole->currentText();

    if (!this->CheckUserInfo(userName, userPwd)) {
        return;
    }

    QSqlQuery query;
    QString sql = "update UserInfo set";
    sql += " UserID='" + userID;
    sql += "',UserName='" + userName;
    sql += "',UserPwd='" + userPwd;
    sql += "',UserRole='" + userRole;
    sql += "' where UserID='" + userID + "'";
    query.exec(sql);
    this->ReadUserInfo();
}

void frmUser::on_btnUpdatePwd_clicked()
{

    //frmUserPwd *w = new frmUserPwd;
    //w->show();
}

void frmUser::on_listUser_currentRowChanged(int currentRow)
{
    if (currentRow < 0) {
        return;
    }

    QString temp = ui->listUser->currentIndex().data().toString();
    QString userID = temp.split("[")[1].split("]")[0];

    QSqlQuery query;
    QString sql = QString("select UserID,UserName,UserPwd,LineID,LineName,UserRole from UserInfo where UserID='%1'").arg(userID);
    query.exec(sql);
    if (query.next()) {
        ui->cboxUserID->setCurrentIndex(ui->cboxUserID->findText(query.value(0).toString()));
        ui->txtUserName->setText(query.value(1).toString());
        ui->txtUserPwd->setText(query.value(2).toString());

        ui->cboxUserRole->setCurrentIndex(ui->cboxUserRole->findText(query.value(5).toString()));
    }
}
