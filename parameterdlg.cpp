#include "parameterdlg.h"
#include "ui_parameterdlg.h"
#include "app.h"

ParameterDlg::ParameterDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ParameterDlg)
{
    ui->setupUi(this);

    setWindowIcon(QIcon(":/image/button/image/favicon.ico"));

    ui->l1->setValue(0.0);
    ui->l2->setValue(0.0);
    ui->l3->setValue(0.0);
    ui->l4->setValue(0.0);

}

ParameterDlg::~ParameterDlg()
{
    delete ui;
}

void ParameterDlg::on_b2_clicked()
{

    APP::l1  = QString::number(ui->l1->value(), 'f', 2);
    APP::l2  = QString::number(ui->l1->value(), 'f', 2);
    APP::l3  = QString::number(ui->l2->value(), 'f', 2);
    APP::l4  = QString::number(ui->l3->value(), 'f', 2);
    APP::WriteConfig();

}

void ParameterDlg::on_b1_clicked()
{


}

void ParameterDlg::on_b3_clicked()
{

    APP::ReadConfig();
    ui->l1->setValue(APP::l1.toDouble());
    ui->l2->setValue(APP::l2.toDouble());
    ui->l3->setValue(APP::l3.toDouble());
    ui->l4->setValue(APP::l4.toDouble());


}
