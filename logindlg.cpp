#include "logindlg.h"
#include "ui_logindlg.h"
#include <QLineEdit>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QSqlTableModel>
#include <QSqlQuery>
#include <QDebug>
#include "app.h"

Logindlg::Logindlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Logindlg)
{
    ui->setupUi(this);

    ui->pwdle->setEchoMode(QLineEdit::Password);

        QString name = "123";
        QString passwd = "123";
        QSqlQuery query;
        query.exec(QString(
              "create table user (id int primary key, name varchar, password varchar)"));
        query.exec(QString("insert into user values (1,'jim', '123')"));

        model = new QSqlTableModel(this);
        model->setTable("user");
        model->setEditStrategy(QSqlTableModel::OnManualSubmit);
        model->select();


}

Logindlg::~Logindlg()
{
    delete ui;
}

void Logindlg::on_okbtn_clicked()
{
    //accept();
        QString name = ui->userle->text();
        QString passwd = ui->pwdle->text();

        qDebug()<<passwd;



        model->setFilter(tr("name = '%1' and password = '%2'").arg(name).arg(passwd));
        model->select();

        if(model->rowCount() == 1){
               // 表示密码验证正确，登陆成功
               // ...... 显示登录后的状态
               //QMessageBox::information(this, "Login", "登录成功！");
            APP::CurrentUserName = name;
            APP::CurrentUserPwd = passwd;


            accept();
        }
        else{
               QMessageBox::information(this, "Warning", "用户名或密码错误，请重新输入！");
               ui->userle->clear();
               ui->pwdle->clear();
           }
}

void Logindlg::on_changebtn_clicked()
{
    ui->userle->clear();
    ui->pwdle->clear();
}
