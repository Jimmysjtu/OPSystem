#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>
#include <QDebug>
#include <QFile>
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/image/button/image/favicon.ico"));
    initWindow();

    port = 8010;
    ui->disconnect->setEnabled(false);
    serverIP =new QHostAddress();
    OnLine = false;
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::initWindow()
{
    this->resize(QSize(1500,1000));
    //夹持状态初始化
    ui->ocstatus1->setOpen();
    ui->ocstatus2->setOpen();
    ui->ocstatus3->setOpen();
    ui->ocstatus4->setOpen();

    //网络连接初始化
    ui->connection->setOnline(false);

    //显示数据初始化
    ui->move1->setText("0 mm");
    ui->move2->setText("0 mm");
    ui->move3->setText("0 mm");
    ui->move4->setText("0 mm");

    ui->rotate1->setText("0 度");
    ui->rotate2->setText("0 度");
    ui->rotate3->setText("0 度");
    ui->rotate4->setText("0 度");
    
    move1 = 0;
    move2 = 0;
    move3 = 0;
    move4 = 0;
    step = 0;

    //指针初始化
    focus = nullptr;
    display = nullptr;
    btn = nullptr;

    timer_m = new QTimer(this);
    timer_m->setInterval(100);
    connect(timer_m, SIGNAL(timeout()), this, SLOT(loadResult_m()));

    timer_r = new QTimer(this);
    timer_r->setInterval(100);
    connect(timer_r, SIGNAL(timeout()), this, SLOT(loadResult_r()));
}




void MainWindow::on_plusbtn_m1_pressed()
{
    ui->status1->setMoveforward();
    focus = &move1;
    display = ui->move1;
    step = 1;
    timer_m->start();

}

void MainWindow::on_plusbtn_m1_released()
{
    ui->status1->setWait();
    focus = nullptr;
    display = nullptr;
    step = 0;
    timer_m->stop();
}

void MainWindow::on_minusbtn_m1_pressed()
{
    ui->status1->setMovebackward();
    focus = &move1;
    display = ui->move1;
    step = -1;
    timer_m->start();
}

void MainWindow::on_minusbtn_m1_released()
{
    ui->status1->setWait();
    focus = nullptr;
    display = nullptr;
    step = 0;
    timer_m->stop();
}

void MainWindow::on_plusbtn_r1_pressed()
{
    ui->status1->setRotateClockwise();
    focus = &rotate1;
    display = ui->rotate1;
    step = 1;
    timer_r->start();
}

void MainWindow::on_plusbtn_r1_released()
{
    ui->status1->setWait();
    focus = nullptr;
    display = nullptr;
    step = 0;
    timer_r->stop();
}

void MainWindow::on_minusbtn_r1_pressed()
{
    ui->status1->setRotateAnticlockwise();
    focus = &rotate1;
    display = ui->rotate1;
    step = -1;
    timer_r->start();
}

void MainWindow::on_minusbtn_r1_released()
{
    ui->status1->setWait();
    focus = nullptr;
    display = nullptr;
    step = 0;
    timer_r->stop();
}

void MainWindow::on_occb1_stateChanged(int arg1)
{
    if(arg1==0) ui->ocstatus1->setOpen();
    else ui->ocstatus1->setClose();
}


//2号手运动控制
void MainWindow::on_plusbtn_m2_pressed()
{
    ui->status2->setMoveforward();
    focus = &move2;
    display = ui->move2;
    step = 1;
    timer_m->start();
}
void MainWindow::on_plusbtn_m2_released()
{
    ui->status2->setWait();
    focus = nullptr;
    display = nullptr;
    step = 0;
    timer_m->stop();
}

void MainWindow::on_minusbtn_m2_pressed()
{
    ui->status2->setMovebackward();
    focus = &move2;
    display = ui->move2;
    step = -1;
    timer_m->start();
}

void MainWindow::on_minusbtn_m2_released()
{
    ui->status2->setWait();
    focus = nullptr;
    display = nullptr;
    step = 0;
    timer_m->stop();
}

void MainWindow::on_plusbtn_r2_pressed()
{
    ui->status2->setRotateClockwise();
    focus = &rotate2;
    display = ui->rotate2;
    step = 1;
    timer_r->start();
}

void MainWindow::on_plusbtn_r2_released()
{
    ui->status2->setWait();
    focus = nullptr;
    display = nullptr;
    step = 0;
    timer_r->stop();
}

void MainWindow::on_minusbtn_r2_pressed()
{
    ui->status2->setRotateAnticlockwise();
    focus = &rotate2;
    display = ui->rotate2;
    step = -1;
    timer_r->start();
}

void MainWindow::on_minusbtn_r2_released()
{
    ui->status2->setWait();
    focus = nullptr;
    display = nullptr;
    step = 0;
    timer_r->stop();
}

void MainWindow::on_occb2_stateChanged(int arg1)
{
    if(arg1==0) ui->ocstatus2->setOpen();
    else ui->ocstatus2->setClose();
}

//3号手运动控制
void MainWindow::on_plusbtn_m3_pressed()
{
    ui->status3->setMoveforward();
    focus = &move3;
    display = ui->move3;
    step = 1;
    timer_m->start();
}
void MainWindow::on_plusbtn_m3_released()
{
    ui->status3->setWait();
    focus = nullptr;
    display = nullptr;
    step = 0;
    timer_m->stop();
}

void MainWindow::on_minusbtn_m3_pressed()
{
    ui->status3->setMovebackward();
    focus = &move3;
    display = ui->move3;
    step = -1;
    timer_m->start();
}

void MainWindow::on_minusbtn_m3_released()
{
    ui->status3->setWait();
    focus = nullptr;
    display = nullptr;
    step = 0;
    timer_m->stop();
}

void MainWindow::on_plusbtn_r3_pressed()
{
    ui->status3->setRotateClockwise();
    focus = &rotate3;
    display = ui->rotate3;
    step = 1;
    timer_r->start();
}

void MainWindow::on_plusbtn_r3_released()
{
    ui->status3->setWait();
    focus = nullptr;
    display = nullptr;
    step = 0;
    timer_r->stop();
}

void MainWindow::on_minusbtn_r3_pressed()
{
    ui->status3->setRotateAnticlockwise();
    focus = &rotate3;
    display = ui->rotate3;
    step = -1;
    timer_r->start();
}

void MainWindow::on_minusbtn_r3_released()
{
    ui->status3->setWait();
    focus = nullptr;
    display = nullptr;
    step = 0;
    timer_r->stop();
}

void MainWindow::on_occb3_stateChanged(int arg1)
{
    if(arg1==0) ui->ocstatus3->setOpen();
    else ui->ocstatus3->setClose();
}

//4号手运动控制
void MainWindow::on_plusbtn_m4_pressed()
{
    ui->status4->setMoveforward();
    focus = &move4;
    display = ui->move4;
    step = 1;
    timer_m->start();
}
void MainWindow::on_plusbtn_m4_released()
{
    ui->status4->setWait();
    focus = nullptr;
    display = nullptr;
    step = 0;
    timer_m->stop();
}

void MainWindow::on_minusbtn_m4_pressed()
{
    ui->status4->setMovebackward();
    focus = &move4;
    display = ui->move4;
    step = -1;
    timer_m->start();
}

void MainWindow::on_minusbtn_m4_released()
{
    ui->status4->setWait();
    focus = nullptr;
    display = nullptr;
    step = 0;
    timer_m->stop();
}

void MainWindow::on_plusbtn_r4_pressed()
{
    ui->status4->setRotateClockwise();
    focus = &rotate4;
    display = ui->rotate4;
    step = 1;
    timer_r->start();
}

void MainWindow::on_plusbtn_r4_released()
{
    ui->status4->setWait();
    focus = nullptr;
    display = nullptr;
    step = 0;
    timer_r->stop();
}

void MainWindow::on_minusbtn_r4_pressed()
{
    ui->status4->setRotateAnticlockwise();
    focus = &rotate4;
    display = ui->rotate4;
    step = -1;
    timer_r->start();
}

void MainWindow::on_minusbtn_r4_released()
{
    ui->status4->setWait();
    focus = nullptr;
    display = nullptr;
    step = 0;
    timer_r->stop();
}

void MainWindow::on_occb4_stateChanged(int arg1)
{
    if(arg1==0) ui->ocstatus4->setOpen();
    else ui->ocstatus4->setClose();
}

//加载结果
void MainWindow::loadResult_m()
{
    if(!OnLine)
    {
        QMessageBox::warning(this,tr("Warning!"),tr("Please Connect First!!!"),QMessageBox::Yes);
        timer_m->stop();
        close();
        return;
    }

    *focus = *focus>=49?49:*focus+step;
    *focus = *focus<=0?0:*focus+step;
    display->setText(QString(" %1 mm").arg(*focus/2));
    slotSend(display->objectName()+QString("  step %1 mm").arg(step));
}

void MainWindow::loadResult_r()
{

    if(!OnLine)
    {
        QMessageBox::warning(this,tr("Warning!"),tr("Please Connect First!!!"),QMessageBox::Yes);
        timer_m->stop();
        close();
        return;
    }

    *focus = *focus>30 ? 30 : (*focus+step);
    *focus = *focus<-30?-30 : (*focus+step);
    display->setText(QString(" %1 度").arg(*focus/2));
    slotSend(display->objectName()+QString("  step %1 degree").arg(step));
}


void MainWindow::on_toolButton_clicked()
{
    switch (QMessageBox::question(this,tr("提示！"),tr("确定进行复位操作 ？"),QMessageBox::Ok|QMessageBox::Cancel,QMessageBox::Ok)) {
    case QMessageBox::Ok:
        slotSend("Reset!");
        break;
    case QMessageBox::Cancel:
        break;
    default:
        break;
    }
}

//网络连接部分
void MainWindow::on_connect_clicked()
{
    slotEnter(true);
}

void MainWindow::on_disconnect_clicked()
{
    slotEnter(false);
}


void MainWindow::slotEnter(bool status)
{
    if(status)
    {
        QString ip = ui->serverIPLineEdit->text();
        if(!serverIP->setAddress(ip))
        {
            QMessageBox::information(this,tr("error"),tr("server ip address error!"));
            return;
        }

        if(ui->userNameLineEdit->text()=="")
        {
            QMessageBox::information(this,tr("error"),tr("User name error!"));
            return;
        }

        userName=ui->userNameLineEdit->text();

        tcpSocket = new QTcpSocket(this);
        connect(tcpSocket,SIGNAL(connected()),this,SLOT(slotConnected()));
        connect(tcpSocket,SIGNAL(disconnected()),this,SLOT(slotDisconnected()));
        connect(tcpSocket,SIGNAL(readyRead()),this,SLOT(dataReceived()));

        tcpSocket->connectToHost(*serverIP,port);


    }
    else
    {
        int length=0;
        QString msg=userName+tr(":lose connect!");
        if((length=tcpSocket->write(msg.toLatin1(),msg.length()))!=msg. length())
        {
            return;
        }

        tcpSocket->disconnectFromHost();
    }
}

void MainWindow::slotConnected()
{
    ui->connection->setOnline(true);

    int length=0;
    QString msg=userName+tr(":connection completed !");

    ui->userNameLineEdit->setEnabled(false);
    ui->serverIPLineEdit->setEnabled(false);
    ui->portLineEdit->setEnabled(false);

    ui->connect->setEnabled(false);
    ui->disconnect->setEnabled(true);

    OnLine = true;


    if((length=tcpSocket->write(msg.toLatin1(),msg.length()))!=msg.length())
    {
        return;
    }
}

void MainWindow::slotSend(QString order)
{
    if(order=="")
    {
        return ;
    }

    QString msg=userName+":"+order;

    tcpSocket->write(msg.toLatin1(),msg.length());
}

void MainWindow::slotDisconnected()
{
    ui->connection->setOnline(false);
    ui->disconnect->setEnabled(false);
    ui->connect->setEnabled(true);

    ui->userNameLineEdit->setEnabled(true);
    ui->serverIPLineEdit->setEnabled(true);
    ui->portLineEdit->setEnabled(true);

    ui->connect->setEnabled(true);
    ui->disconnect->setEnabled(false);

    ui->display->setText("OffLine ! ");

    OnLine = false;
}

void MainWindow::dataReceived()
{
    while(tcpSocket->bytesAvailable()>0)
    {
        QByteArray datagram;
        datagram.resize(tcpSocket->bytesAvailable());

        tcpSocket->read(datagram.data(),datagram.size());

        QString msg=datagram.data();

        ui->display->setText(msg.left(datagram.size()));
    }

}
