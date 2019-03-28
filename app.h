#ifndef APP_H
#define APP_H

#include <QObject>
#include <QCamera>

class APP : public QObject
{
    Q_OBJECT
public:
    explicit APP(QObject *parent = nullptr);
    static QString AppName;         //应用程序名称
    static QString AppPath;         //应用程序路径
    static int AppFontSize;         //应用程序字体大小
    static QString AppFontName;     //应用程序字体名称

    static QString CurrentUserName; //当前用户名
    static QString CurrentUserPwd;  //当前用户密码
    static QString CurrentUserType; //当前用户类型（值班员、管理员）

    static void ReadConfig();       //读取配置文件,在main函数最开始加载程序载入
    static void WriteConfig();      //写入配置文件,在更改配置文件程序关闭时调用

    static QString l1;
    static QString l2 ;
    static QString l3;
    static QString l4;



signals:

public slots:
};

#endif // APP_H
