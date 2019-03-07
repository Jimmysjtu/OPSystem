#include "mainmenu.h"
#include "ui_mainmenu.h"
#include "mainwindow.h"
#include "frmUser.h"
#include "app.h"
#include "logindlg.h"
MainMenu::MainMenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MainMenu)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/image/button/image/favicon.ico"));

    setWindowTitle("主菜单");
    QPalette pe;
    pe.setColor(QPalette::WindowText,Qt::white);



    ui->username->setText(QString("欢迎您！ %1").arg(APP::CurrentUserName));
    ui->username->setPalette(pe);

    ui->label_5->setText("注销");
    ui->label_5->setPalette(pe);

    QString img = ":/image/button/image/bg.jpg";
    QString qss = QString("QWidget#MainMenu{border-image: url(%1);}").arg(img);
    this->setStyleSheet(qss);

    ui->label->setPalette(pe);
    ui->label_2->setPalette(pe);
    ui->label_3->setPalette(pe);
    ui->label_4->setPalette(pe);

}

MainMenu::~MainMenu()
{
    delete ui;
}

void MainMenu::on_tb1_clicked()
{
    MainWindow *m = new MainWindow;
    m->show();

}

void MainMenu::on_tb2_clicked()
{

}

void MainMenu::on_tb3_clicked()
{

}


void MainMenu::on_tb4_clicked()
{
    frmUser *f = new frmUser;
    f->show();




}

void MainMenu::on_toolButton_clicked()
{
    close();
    Logindlg *l = new Logindlg;

    if(l->exec()==QDialog::Accepted)
    {
        MainMenu *m = new MainMenu;

        m->show();

    }

}
