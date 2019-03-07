#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QLabel>
#include <QToolButton>
#include <QHostAddress>
#include <QTcpSocket>
#include <QCamera>
#include <QCameraViewfinder>

namespace Ui {
class MainWindow;
}



class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void initWindow();

    int move1;
    int move2;
    int move3;
    int move4;

    int rotate1;
    int rotate2;
    int rotate3;
    int rotate4;
    
    int *focus; //当前操作手
    QLabel *display;
    QToolButton *btn;


    int step;

    QTimer *timer_m;
    QTimer *timer_r;

    //网络部分
    //bool status;
    int port;
    QHostAddress *serverIP;
    QString userName;
    QTcpSocket *tcpSocket;

    bool OnLine;






private slots:

    void on_plusbtn_m1_pressed();
    void on_plusbtn_m1_released();
    void on_minusbtn_m1_pressed();
    void on_minusbtn_m1_released();
    void on_plusbtn_r1_pressed();
    void on_plusbtn_r1_released();
    void on_minusbtn_r1_pressed();
    void on_minusbtn_r1_released();
    void on_occb1_stateChanged(int arg1);

    void on_plusbtn_m2_pressed();
    void on_plusbtn_m2_released();
    void on_minusbtn_m2_pressed();
    void on_minusbtn_m2_released();
    void on_plusbtn_r2_pressed();
    void on_plusbtn_r2_released();
    void on_minusbtn_r2_pressed();
    void on_minusbtn_r2_released();
    void on_occb2_stateChanged(int arg1);

    void on_plusbtn_m3_pressed();
    void on_plusbtn_m3_released();
    void on_minusbtn_m3_pressed();
    void on_minusbtn_m3_released();
    void on_plusbtn_r3_pressed();
    void on_plusbtn_r3_released();
    void on_minusbtn_r3_pressed();
    void on_minusbtn_r3_released();
    void on_occb3_stateChanged(int arg1);

    void on_plusbtn_m4_pressed();
    void on_plusbtn_m4_released();
    void on_minusbtn_m4_pressed();
    void on_minusbtn_m4_released();
    void on_plusbtn_r4_pressed();
    void on_plusbtn_r4_released();
    void on_minusbtn_r4_pressed();
    void on_minusbtn_r4_released();
    void on_occb4_stateChanged(int arg1);

    void loadResult_m();
    void loadResult_r();


    void on_toolButton_clicked();

    //网络部分

    void slotEnter(bool status);
    void slotConnected();
    void slotDisconnected();
    void dataReceived();
    void slotSend(QString order);

    void on_disconnect_clicked();

    void on_connect_clicked();

    void on_closeC_clicked();

private:
    Ui::MainWindow *ui;

    QCamera *camera;

    QCameraViewfinder *viewfinder;
};

#endif // MAINWINDOW_H
