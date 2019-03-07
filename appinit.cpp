#include "appinit.h"
#include "app.h"
#include <QApplication>
#include <QMessageBox>
#include <QSqlQuery>
#include <QWidget>
#include "logindlg.h"

APPINIT::APPINIT(QObject *parent) : QObject(parent)
{
    APP::AppPath = QApplication::applicationDirPath();



}

void APPINIT::Load()
{
    APP::AppPath = QApplication::applicationDirPath();


    QSqlDatabase DbConn;
    DbConn = QSqlDatabase::addDatabase("QSQLITE");
    DbConn.setDatabaseName(APP::AppPath + "/passwd.db");
    if (!DbConn.open()) {
        exit(0);
    }

    QSqlQuery query;
    query.exec(QString("create table UserInfo (UserID int primary key, UserName varchar, UserPwd varchar, UserRole varchar)"));
    query.exec(QString("insert into UserInfo values (0,'jim', '123', 'super')"));

}
