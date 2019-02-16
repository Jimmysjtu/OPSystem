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
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("passwd.db");
    if(!db.open()){
            //QMessageBox::information(this, "连接结果", "连接数据库失败!");
            return;
    }

}
