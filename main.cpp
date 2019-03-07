#include "mainwindow.h"
#include <QApplication>
#include "logindlg.h"
#include <QFile>
#include <QDebug>
#include "app.h"
#include "appinit.h"
#include "mainmenu.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    /*
    QFile file(":/image/button/qss/black.css");
    if (file.open(QFile::ReadOnly)) {
        QString qss = QLatin1String(file.readAll());
        qApp->setStyleSheet(qss);
        QString PaletteColor = qss.mid(20, 7);
        qApp->setPalette(QPalette(QColor(PaletteColor)));
        file.close();
    }
    else qDebug()<<"*";
    */

    APPINIT *init = new APPINIT;
    init->Load();




    Logindlg dlg;


    if(dlg.exec()==QDialog::Accepted)
    {
        MainMenu *m = new MainMenu;
        m->show();
        return a.exec();

    }

   else  return 0;

}
