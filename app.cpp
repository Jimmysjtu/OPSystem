#include "APP.h"
#include <QSettings>
#include <QFile>


QString APP::AppName = "ECS";
QString APP::AppPath = "";

QString APP::CurrentUserName = "admin";
QString APP::CurrentUserPwd = "admin";
QString APP::CurrentUserType = "Admin";

QString APP::l1 = "0";
QString APP::l2 = "0";
QString APP::l3 = "0";
QString APP::l4 = "0";


APP::APP(QObject *parent) : QObject(parent)
{



}

void APP::ReadConfig()
{

    QString fileName = QString("%1/%2_Config.ini").arg(APP::AppPath).arg(APP::AppName);
    QFile file(fileName);
    if (!file.exists()) {
        //APP::CurrentUserType = APP::CurrentUserType.toLatin1();
        APP::l1 = "0";
        APP::l2 = "0";
        APP::l3 = "0";
        APP::l4 = "0";
        WriteConfig();
        return;
    }

    QSettings *set = new QSettings(fileName, QSettings::IniFormat);
    set->beginGroup("APPConfig");

    APP::l1 = set->value("l1").toString();
    APP::l2 = set->value("l2").toString();
    APP::l3 = set->value("l3").toString();
    APP::l4 = set->value("l4").toString();

    set->endGroup();

}

void APP::WriteConfig()
{

    QString fileName = QString("%1/%2_Config.ini").arg(APP::AppPath).arg(APP::AppName);
    QSettings *set = new QSettings(fileName, QSettings::IniFormat);
    set->beginGroup("APPConfig");

    set->setValue("l1", APP::l1);
    set->setValue("l2", APP::l2);
    set->setValue("l3", APP::l3);
    set->setValue("l4", APP::l4);


    set->endGroup();

}
