#include "mainmenu.h"
#include "ui_mainmenu.h"
#include "mainwindow.h"

MainMenu::MainMenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MainMenu)
{
    ui->setupUi(this);
    QString img = ":/image/button/image/bg.jpg";
    QString qss = QString("QWidget#MainMenu{border-image: url(%1);}").arg(img);
    this->setStyleSheet(qss);

    QPalette pe;
    pe.setColor(QPalette::WindowText,Qt::white);
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



}
