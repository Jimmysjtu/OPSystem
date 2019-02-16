/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDial>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include <model.h>
#include "status.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QGroupBox *groupBox1;
    QGridLayout *gridLayout_6;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QHBoxLayout *horizontalLayout_11;
    QToolButton *toolButton_2;
    QToolButton *toolButton_3;
    QToolButton *toolButton_4;
    QHBoxLayout *horizontalLayout_10;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QCheckBox *checkBox_2;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QPushButton *pushButton_7;
    QToolButton *toolButton;
    QPushButton *pushButton;
    QCheckBox *checkBox;
    QGroupBox *groupBox6;
    QGridLayout *gridLayout_4;
    Status *ocstatus2;
    Status *ocstatus3;
    Status *ocstatus4;
    QCheckBox *occb1;
    QCheckBox *occb4;
    QCheckBox *occb2;
    QCheckBox *occb3;
    Status *ocstatus1;
    QGroupBox *groupBox5;
    QGridLayout *gridLayout_3;
    QLabel *rotate4;
    QLabel *rotate2;
    QLabel *rotate3;
    QHBoxLayout *horizontalLayout_7;
    QToolButton *plusbtn_r2;
    QToolButton *minusbtn_r2;
    QHBoxLayout *horizontalLayout_8;
    QToolButton *plusbtn_r3;
    QToolButton *minusbtn_r3;
    QHBoxLayout *horizontalLayout_9;
    QToolButton *plusbtn_r4;
    QToolButton *minusbtn_r4;
    QHBoxLayout *horizontalLayout_6;
    QToolButton *plusbtn_r1;
    QToolButton *minusbtn_r1;
    QLabel *rotate1;
    QGroupBox *groupBox2;
    QGridLayout *gridLayout_7;
    Status *status3;
    Status *status1;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_4;
    Status *status4;
    Status *status2;
    QGroupBox *groupBox3;
    QGridLayout *gridLayout_8;
    QLineEdit *serverIPLineEdit;
    QLabel *label_7;
    Status *connection;
    QToolButton *disconnect;
    QLabel *label_6;
    QLineEdit *userNameLineEdit;
    QLabel *label_5;
    QToolButton *connect;
    QLineEdit *portLineEdit;
    QLabel *display;
    QGroupBox *groupBox4;
    QGridLayout *gridLayout_2;
    QLabel *move1;
    QLabel *move2;
    QLabel *move4;
    QLabel *move3;
    QHBoxLayout *horizontalLayout_5;
    QToolButton *plusbtn_m4;
    QToolButton *minusbtn_m4;
    QHBoxLayout *horizontalLayout_4;
    QToolButton *plusbtn_m3;
    QToolButton *minusbtn_m3;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *plusbtn_m2;
    QToolButton *minusbtn_m2;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *plusbtn_m1;
    QToolButton *minusbtn_m1;
    QGroupBox *setting;
    QGridLayout *gridLayout_5;
    QSpacerItem *horizontalSpacer;
    QLabel *label_9;
    QDial *dial;
    QSlider *horizontalSlider;
    QSpacerItem *horizontalSpacer_2;
    QSlider *verticalSlider;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_4;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_12;
    Model *model;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1623, 911);
        MainWindow->setIconSize(QSize(64, 64));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox1 = new QGroupBox(centralWidget);
        groupBox1->setObjectName(QStringLiteral("groupBox1"));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        groupBox1->setFont(font);
        gridLayout_6 = new QGridLayout(groupBox1);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        pushButton_2 = new QPushButton(groupBox1);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        pushButton_2->setFont(font1);

        gridLayout_6->addWidget(pushButton_2, 1, 1, 1, 1);

        pushButton_3 = new QPushButton(groupBox1);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setFont(font1);

        gridLayout_6->addWidget(pushButton_3, 2, 0, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        toolButton_2 = new QToolButton(groupBox1);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/button/image/start.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_2->setIcon(icon);
        toolButton_2->setIconSize(QSize(64, 64));
        toolButton_2->setAutoRaise(true);

        horizontalLayout_11->addWidget(toolButton_2);

        toolButton_3 = new QToolButton(groupBox1);
        toolButton_3->setObjectName(QStringLiteral("toolButton_3"));
        toolButton_3->setAutoFillBackground(false);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/image/button/image/pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_3->setIcon(icon1);
        toolButton_3->setIconSize(QSize(64, 64));
        toolButton_3->setAutoRaise(true);

        horizontalLayout_11->addWidget(toolButton_3);

        toolButton_4 = new QToolButton(groupBox1);
        toolButton_4->setObjectName(QStringLiteral("toolButton_4"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/image/button/image/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_4->setIcon(icon2);
        toolButton_4->setIconSize(QSize(64, 64));
        toolButton_4->setAutoRaise(true);

        horizontalLayout_11->addWidget(toolButton_4);


        gridLayout_6->addLayout(horizontalLayout_11, 3, 1, 1, 2);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        radioButton_3 = new QRadioButton(groupBox1);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));

        horizontalLayout_10->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(groupBox1);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));

        horizontalLayout_10->addWidget(radioButton_4);


        gridLayout_6->addLayout(horizontalLayout_10, 2, 2, 1, 1);

        checkBox_2 = new QCheckBox(groupBox1);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));

        gridLayout_6->addWidget(checkBox_2, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        radioButton = new QRadioButton(groupBox1);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setCheckable(true);
        radioButton->setChecked(true);
        radioButton->setAutoRepeat(false);
        radioButton->setAutoExclusive(true);

        horizontalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(groupBox1);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        horizontalLayout->addWidget(radioButton_2);


        gridLayout_6->addLayout(horizontalLayout, 1, 2, 1, 1);

        pushButton_7 = new QPushButton(groupBox1);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setFont(font1);

        gridLayout_6->addWidget(pushButton_7, 2, 1, 1, 1);

        toolButton = new QToolButton(groupBox1);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        QIcon icon3;
        QString iconThemeName = QString::fromUtf8("\345\244\215\344\275\215");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon3 = QIcon::fromTheme(iconThemeName);
        } else {
            icon3.addFile(QStringLiteral(":/image/button/image/reset.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        toolButton->setIcon(icon3);
        toolButton->setIconSize(QSize(64, 64));
        toolButton->setAutoRaise(true);

        gridLayout_6->addWidget(toolButton, 3, 0, 1, 1);

        pushButton = new QPushButton(groupBox1);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setFont(font1);

        gridLayout_6->addWidget(pushButton, 1, 0, 1, 1);

        checkBox = new QCheckBox(groupBox1);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        gridLayout_6->addWidget(checkBox, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox1, 4, 2, 1, 1);

        groupBox6 = new QGroupBox(centralWidget);
        groupBox6->setObjectName(QStringLiteral("groupBox6"));
        gridLayout_4 = new QGridLayout(groupBox6);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        ocstatus2 = new Status(groupBox6);
        ocstatus2->setObjectName(QStringLiteral("ocstatus2"));
        ocstatus2->setMinimumSize(QSize(64, 64));
        ocstatus2->setMaximumSize(QSize(64, 64));

        gridLayout_4->addWidget(ocstatus2, 0, 1, 1, 1);

        ocstatus3 = new Status(groupBox6);
        ocstatus3->setObjectName(QStringLiteral("ocstatus3"));
        ocstatus3->setMinimumSize(QSize(64, 64));
        ocstatus3->setMaximumSize(QSize(64, 64));

        gridLayout_4->addWidget(ocstatus3, 0, 2, 1, 1);

        ocstatus4 = new Status(groupBox6);
        ocstatus4->setObjectName(QStringLiteral("ocstatus4"));
        ocstatus4->setMinimumSize(QSize(64, 64));
        ocstatus4->setMaximumSize(QSize(64, 64));

        gridLayout_4->addWidget(ocstatus4, 0, 3, 1, 1);

        occb1 = new QCheckBox(groupBox6);
        occb1->setObjectName(QStringLiteral("occb1"));

        gridLayout_4->addWidget(occb1, 1, 0, 1, 1);

        occb4 = new QCheckBox(groupBox6);
        occb4->setObjectName(QStringLiteral("occb4"));

        gridLayout_4->addWidget(occb4, 1, 3, 1, 1);

        occb2 = new QCheckBox(groupBox6);
        occb2->setObjectName(QStringLiteral("occb2"));

        gridLayout_4->addWidget(occb2, 1, 1, 1, 1);

        occb3 = new QCheckBox(groupBox6);
        occb3->setObjectName(QStringLiteral("occb3"));

        gridLayout_4->addWidget(occb3, 1, 2, 1, 1);

        ocstatus1 = new Status(groupBox6);
        ocstatus1->setObjectName(QStringLiteral("ocstatus1"));
        ocstatus1->setMinimumSize(QSize(64, 64));
        ocstatus1->setMaximumSize(QSize(64, 64));

        gridLayout_4->addWidget(ocstatus1, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox6, 3, 2, 1, 1);

        groupBox5 = new QGroupBox(centralWidget);
        groupBox5->setObjectName(QStringLiteral("groupBox5"));
        groupBox5->setFlat(false);
        gridLayout_3 = new QGridLayout(groupBox5);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        rotate4 = new QLabel(groupBox5);
        rotate4->setObjectName(QStringLiteral("rotate4"));
        QFont font2;
        font2.setFamily(QStringLiteral("Microsoft YaHei"));
        font2.setPointSize(11);
        rotate4->setFont(font2);
        rotate4->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(rotate4, 0, 5, 1, 1);

        rotate2 = new QLabel(groupBox5);
        rotate2->setObjectName(QStringLiteral("rotate2"));
        rotate2->setFont(font2);
        rotate2->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(rotate2, 0, 3, 1, 1);

        rotate3 = new QLabel(groupBox5);
        rotate3->setObjectName(QStringLiteral("rotate3"));
        rotate3->setFont(font2);
        rotate3->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(rotate3, 0, 4, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        plusbtn_r2 = new QToolButton(groupBox5);
        plusbtn_r2->setObjectName(QStringLiteral("plusbtn_r2"));
        plusbtn_r2->setEnabled(true);
        plusbtn_r2->setMinimumSize(QSize(32, 32));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/image/button/image/rotation_plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        plusbtn_r2->setIcon(icon4);
        plusbtn_r2->setIconSize(QSize(64, 64));
        plusbtn_r2->setAutoRaise(true);

        horizontalLayout_7->addWidget(plusbtn_r2);

        minusbtn_r2 = new QToolButton(groupBox5);
        minusbtn_r2->setObjectName(QStringLiteral("minusbtn_r2"));
        minusbtn_r2->setMinimumSize(QSize(32, 32));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/image/button/image/rotation_minus.png"), QSize(), QIcon::Normal, QIcon::Off);
        minusbtn_r2->setIcon(icon5);
        minusbtn_r2->setIconSize(QSize(64, 64));
        minusbtn_r2->setAutoRaise(true);

        horizontalLayout_7->addWidget(minusbtn_r2);


        gridLayout_3->addLayout(horizontalLayout_7, 2, 3, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        plusbtn_r3 = new QToolButton(groupBox5);
        plusbtn_r3->setObjectName(QStringLiteral("plusbtn_r3"));
        plusbtn_r3->setEnabled(true);
        plusbtn_r3->setMinimumSize(QSize(32, 32));
        plusbtn_r3->setContextMenuPolicy(Qt::NoContextMenu);
        plusbtn_r3->setIcon(icon4);
        plusbtn_r3->setIconSize(QSize(64, 64));
        plusbtn_r3->setAutoRaise(true);

        horizontalLayout_8->addWidget(plusbtn_r3);

        minusbtn_r3 = new QToolButton(groupBox5);
        minusbtn_r3->setObjectName(QStringLiteral("minusbtn_r3"));
        minusbtn_r3->setMinimumSize(QSize(32, 32));
        minusbtn_r3->setIcon(icon5);
        minusbtn_r3->setIconSize(QSize(64, 64));
        minusbtn_r3->setAutoRaise(true);

        horizontalLayout_8->addWidget(minusbtn_r3);


        gridLayout_3->addLayout(horizontalLayout_8, 2, 4, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        plusbtn_r4 = new QToolButton(groupBox5);
        plusbtn_r4->setObjectName(QStringLiteral("plusbtn_r4"));
        plusbtn_r4->setEnabled(true);
        plusbtn_r4->setMinimumSize(QSize(32, 32));
        plusbtn_r4->setIcon(icon4);
        plusbtn_r4->setIconSize(QSize(64, 64));
        plusbtn_r4->setAutoRaise(true);

        horizontalLayout_9->addWidget(plusbtn_r4);

        minusbtn_r4 = new QToolButton(groupBox5);
        minusbtn_r4->setObjectName(QStringLiteral("minusbtn_r4"));
        minusbtn_r4->setMinimumSize(QSize(32, 32));
        minusbtn_r4->setIcon(icon5);
        minusbtn_r4->setIconSize(QSize(64, 64));
        minusbtn_r4->setAutoRaise(true);

        horizontalLayout_9->addWidget(minusbtn_r4);


        gridLayout_3->addLayout(horizontalLayout_9, 2, 5, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        plusbtn_r1 = new QToolButton(groupBox5);
        plusbtn_r1->setObjectName(QStringLiteral("plusbtn_r1"));
        plusbtn_r1->setEnabled(true);
        plusbtn_r1->setMinimumSize(QSize(32, 32));
        plusbtn_r1->setIcon(icon4);
        plusbtn_r1->setIconSize(QSize(64, 64));
        plusbtn_r1->setAutoRaise(true);

        horizontalLayout_6->addWidget(plusbtn_r1);

        minusbtn_r1 = new QToolButton(groupBox5);
        minusbtn_r1->setObjectName(QStringLiteral("minusbtn_r1"));
        minusbtn_r1->setMinimumSize(QSize(32, 32));
        minusbtn_r1->setIcon(icon5);
        minusbtn_r1->setIconSize(QSize(64, 64));
        minusbtn_r1->setAutoRaise(true);

        horizontalLayout_6->addWidget(minusbtn_r1);


        gridLayout_3->addLayout(horizontalLayout_6, 2, 1, 1, 1);

        rotate1 = new QLabel(groupBox5);
        rotate1->setObjectName(QStringLiteral("rotate1"));
        rotate1->setFont(font2);
        rotate1->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(rotate1, 0, 1, 1, 1);


        gridLayout->addWidget(groupBox5, 2, 2, 1, 1);

        groupBox2 = new QGroupBox(centralWidget);
        groupBox2->setObjectName(QStringLiteral("groupBox2"));
        groupBox2->setMinimumSize(QSize(64, 64));
        gridLayout_7 = new QGridLayout(groupBox2);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        status3 = new Status(groupBox2);
        status3->setObjectName(QStringLiteral("status3"));
        status3->setMinimumSize(QSize(80, 80));
        status3->setMaximumSize(QSize(80, 80));

        gridLayout_7->addWidget(status3, 1, 2, 1, 1);

        status1 = new Status(groupBox2);
        status1->setObjectName(QStringLiteral("status1"));
        status1->setMinimumSize(QSize(80, 80));
        status1->setMaximumSize(QSize(80, 80));

        gridLayout_7->addWidget(status1, 1, 0, 1, 1);

        label_2 = new QLabel(groupBox2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(label_2, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(label_3, 0, 2, 1, 1);

        label = new QLabel(groupBox2);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(label, 0, 0, 1, 1);

        label_4 = new QLabel(groupBox2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(label_4, 0, 3, 1, 1);

        status4 = new Status(groupBox2);
        status4->setObjectName(QStringLiteral("status4"));
        status4->setMinimumSize(QSize(80, 80));
        status4->setMaximumSize(QSize(80, 80));

        gridLayout_7->addWidget(status4, 1, 3, 1, 1);

        status2 = new Status(groupBox2);
        status2->setObjectName(QStringLiteral("status2"));
        status2->setMinimumSize(QSize(80, 80));
        status2->setMaximumSize(QSize(80, 80));

        gridLayout_7->addWidget(status2, 1, 1, 1, 1);


        gridLayout->addWidget(groupBox2, 0, 2, 1, 1);

        groupBox3 = new QGroupBox(centralWidget);
        groupBox3->setObjectName(QStringLiteral("groupBox3"));
        gridLayout_8 = new QGridLayout(groupBox3);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        serverIPLineEdit = new QLineEdit(groupBox3);
        serverIPLineEdit->setObjectName(QStringLiteral("serverIPLineEdit"));

        gridLayout_8->addWidget(serverIPLineEdit, 2, 2, 1, 1);

        label_7 = new QLabel(groupBox3);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_8->addWidget(label_7, 1, 1, 1, 1);

        connection = new Status(groupBox3);
        connection->setObjectName(QStringLiteral("connection"));
        connection->setMinimumSize(QSize(32, 32));
        connection->setMaximumSize(QSize(32, 32));

        gridLayout_8->addWidget(connection, 0, 0, 1, 1);

        disconnect = new QToolButton(groupBox3);
        disconnect->setObjectName(QStringLiteral("disconnect"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/image/button/image/disconnected.png"), QSize(), QIcon::Normal, QIcon::Off);
        disconnect->setIcon(icon6);
        disconnect->setIconSize(QSize(32, 32));
        disconnect->setAutoRaise(true);

        gridLayout_8->addWidget(disconnect, 3, 4, 1, 1);

        label_6 = new QLabel(groupBox3);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_8->addWidget(label_6, 1, 3, 1, 1);

        userNameLineEdit = new QLineEdit(groupBox3);
        userNameLineEdit->setObjectName(QStringLiteral("userNameLineEdit"));

        gridLayout_8->addWidget(userNameLineEdit, 1, 2, 1, 1);

        label_5 = new QLabel(groupBox3);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_8->addWidget(label_5, 2, 1, 1, 1);

        connect = new QToolButton(groupBox3);
        connect->setObjectName(QStringLiteral("connect"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/image/button/image/connected.png"), QSize(), QIcon::Normal, QIcon::Off);
        connect->setIcon(icon7);
        connect->setIconSize(QSize(32, 32));
        connect->setAutoRaise(true);

        gridLayout_8->addWidget(connect, 3, 5, 1, 1);

        portLineEdit = new QLineEdit(groupBox3);
        portLineEdit->setObjectName(QStringLiteral("portLineEdit"));

        gridLayout_8->addWidget(portLineEdit, 1, 4, 1, 2);

        display = new QLabel(groupBox3);
        display->setObjectName(QStringLiteral("display"));

        gridLayout_8->addWidget(display, 0, 2, 1, 4);


        gridLayout->addWidget(groupBox3, 5, 2, 1, 1);

        groupBox4 = new QGroupBox(centralWidget);
        groupBox4->setObjectName(QStringLiteral("groupBox4"));
        gridLayout_2 = new QGridLayout(groupBox4);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        move1 = new QLabel(groupBox4);
        move1->setObjectName(QStringLiteral("move1"));
        move1->setFont(font2);
        move1->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(move1, 0, 0, 1, 1);

        move2 = new QLabel(groupBox4);
        move2->setObjectName(QStringLiteral("move2"));
        move2->setFont(font2);
        move2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(move2, 0, 1, 1, 1);

        move4 = new QLabel(groupBox4);
        move4->setObjectName(QStringLiteral("move4"));
        move4->setFont(font2);
        move4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(move4, 0, 3, 1, 1);

        move3 = new QLabel(groupBox4);
        move3->setObjectName(QStringLiteral("move3"));
        move3->setFont(font2);
        move3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(move3, 0, 2, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        plusbtn_m4 = new QToolButton(groupBox4);
        plusbtn_m4->setObjectName(QStringLiteral("plusbtn_m4"));
        plusbtn_m4->setEnabled(true);
        plusbtn_m4->setMinimumSize(QSize(32, 32));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/image/button/image/plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        plusbtn_m4->setIcon(icon8);
        plusbtn_m4->setIconSize(QSize(64, 64));
        plusbtn_m4->setAutoRaise(true);

        horizontalLayout_5->addWidget(plusbtn_m4);

        minusbtn_m4 = new QToolButton(groupBox4);
        minusbtn_m4->setObjectName(QStringLiteral("minusbtn_m4"));
        minusbtn_m4->setMinimumSize(QSize(32, 32));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/image/button/image/minus.png"), QSize(), QIcon::Normal, QIcon::Off);
        minusbtn_m4->setIcon(icon9);
        minusbtn_m4->setIconSize(QSize(64, 64));
        minusbtn_m4->setAutoRaise(true);

        horizontalLayout_5->addWidget(minusbtn_m4);


        gridLayout_2->addLayout(horizontalLayout_5, 1, 3, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        plusbtn_m3 = new QToolButton(groupBox4);
        plusbtn_m3->setObjectName(QStringLiteral("plusbtn_m3"));
        plusbtn_m3->setEnabled(true);
        plusbtn_m3->setMinimumSize(QSize(32, 32));
        plusbtn_m3->setIcon(icon8);
        plusbtn_m3->setIconSize(QSize(64, 64));
        plusbtn_m3->setAutoRaise(true);

        horizontalLayout_4->addWidget(plusbtn_m3);

        minusbtn_m3 = new QToolButton(groupBox4);
        minusbtn_m3->setObjectName(QStringLiteral("minusbtn_m3"));
        minusbtn_m3->setMinimumSize(QSize(32, 32));
        minusbtn_m3->setIcon(icon9);
        minusbtn_m3->setIconSize(QSize(64, 64));
        minusbtn_m3->setAutoRaise(true);

        horizontalLayout_4->addWidget(minusbtn_m3);


        gridLayout_2->addLayout(horizontalLayout_4, 1, 2, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        plusbtn_m2 = new QToolButton(groupBox4);
        plusbtn_m2->setObjectName(QStringLiteral("plusbtn_m2"));
        plusbtn_m2->setEnabled(true);
        plusbtn_m2->setMinimumSize(QSize(32, 32));
        plusbtn_m2->setIcon(icon8);
        plusbtn_m2->setIconSize(QSize(64, 64));
        plusbtn_m2->setAutoRaise(true);

        horizontalLayout_2->addWidget(plusbtn_m2);

        minusbtn_m2 = new QToolButton(groupBox4);
        minusbtn_m2->setObjectName(QStringLiteral("minusbtn_m2"));
        minusbtn_m2->setMinimumSize(QSize(32, 32));
        minusbtn_m2->setIcon(icon9);
        minusbtn_m2->setIconSize(QSize(64, 64));
        minusbtn_m2->setAutoRaise(true);

        horizontalLayout_2->addWidget(minusbtn_m2);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        plusbtn_m1 = new QToolButton(groupBox4);
        plusbtn_m1->setObjectName(QStringLiteral("plusbtn_m1"));
        plusbtn_m1->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(plusbtn_m1->sizePolicy().hasHeightForWidth());
        plusbtn_m1->setSizePolicy(sizePolicy);
        plusbtn_m1->setMinimumSize(QSize(32, 32));
        plusbtn_m1->setContextMenuPolicy(Qt::DefaultContextMenu);
        plusbtn_m1->setAutoFillBackground(false);
        plusbtn_m1->setIcon(icon8);
        plusbtn_m1->setIconSize(QSize(64, 64));
        plusbtn_m1->setAutoRaise(true);

        horizontalLayout_3->addWidget(plusbtn_m1);

        minusbtn_m1 = new QToolButton(groupBox4);
        minusbtn_m1->setObjectName(QStringLiteral("minusbtn_m1"));
        minusbtn_m1->setMinimumSize(QSize(32, 32));
        minusbtn_m1->setIcon(icon9);
        minusbtn_m1->setIconSize(QSize(64, 64));
        minusbtn_m1->setAutoRaise(true);

        horizontalLayout_3->addWidget(minusbtn_m1);


        gridLayout_2->addLayout(horizontalLayout_3, 1, 0, 1, 1);


        gridLayout->addWidget(groupBox4, 1, 2, 1, 1);

        setting = new QGroupBox(centralWidget);
        setting->setObjectName(QStringLiteral("setting"));
        gridLayout_5 = new QGridLayout(setting);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer, 0, 0, 1, 1);

        label_9 = new QLabel(setting);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_5->addWidget(label_9, 2, 5, 1, 1);

        dial = new QDial(setting);
        dial->setObjectName(QStringLiteral("dial"));

        gridLayout_5->addWidget(dial, 0, 2, 1, 1);

        horizontalSlider = new QSlider(setting);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout_5->addWidget(horizontalSlider, 1, 5, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_2, 0, 3, 1, 1);

        verticalSlider = new QSlider(setting);
        verticalSlider->setObjectName(QStringLiteral("verticalSlider"));
        verticalSlider->setOrientation(Qt::Vertical);

        gridLayout_5->addWidget(verticalSlider, 0, 4, 2, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer, 0, 5, 1, 1);

        pushButton_4 = new QPushButton(setting);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        gridLayout_5->addWidget(pushButton_4, 1, 0, 1, 1);

        label_8 = new QLabel(setting);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_8, 1, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_3, 0, 1, 1, 1);


        gridLayout->addWidget(setting, 5, 0, 1, 2);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMinimumSize(QSize(1100, 500));
        horizontalLayout_12 = new QHBoxLayout(groupBox);
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        model = new Model(groupBox);
        model->setObjectName(QStringLiteral("model"));
        model->setMinimumSize(QSize(1000, 0));

        horizontalLayout_12->addWidget(model);


        gridLayout->addWidget(groupBox, 0, 0, 5, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1623, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "OPSystem", Q_NULLPTR));
        groupBox1->setTitle(QApplication::translate("MainWindow", "\351\253\230\347\272\247\346\216\247\345\210\266", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "\350\207\252\345\212\250\351\200\201\344\270\235\357\274\2103\357\274\2144\357\274\211", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "\346\227\213\350\275\254\345\257\274\347\256\241\357\274\2101\357\274\2142\357\274\211", Q_NULLPTR));
        toolButton_2->setText(QApplication::translate("MainWindow", "\346\211\247\350\241\214", Q_NULLPTR));
        toolButton_3->setText(QApplication::translate("MainWindow", "\346\232\202\345\201\234", Q_NULLPTR));
        toolButton_4->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242", Q_NULLPTR));
        radioButton_3->setText(QApplication::translate("MainWindow", "\351\241\272\346\227\266\351\222\210", Q_NULLPTR));
        radioButton_4->setText(QApplication::translate("MainWindow", "\351\200\206\346\227\266\351\222\210", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("MainWindow", "3\357\274\2144\345\217\267\346\211\213\345\220\214\346\255\245", Q_NULLPTR));
        radioButton->setText(QApplication::translate("MainWindow", "\351\200\201\344\270\235", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("MainWindow", "\351\200\200\344\270\235", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("MainWindow", "\346\227\213\350\275\254\345\257\274\344\270\235\357\274\2103\357\274\2144\357\274\211", Q_NULLPTR));
        toolButton->setText(QApplication::translate("MainWindow", "\345\244\215\344\275\215", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "\350\207\252\345\212\250\351\200\201\347\256\241\357\274\2101\357\274\2142\357\274\211", Q_NULLPTR));
        checkBox->setText(QApplication::translate("MainWindow", "1\357\274\2142\345\217\267\346\211\213\345\220\214\346\255\245", Q_NULLPTR));
        groupBox6->setTitle(QApplication::translate("MainWindow", "\345\244\271\346\214\201\346\216\247\345\210\266", Q_NULLPTR));
        occb1->setText(QApplication::translate("MainWindow", "\345\244\271\346\214\201/\346\235\276\345\274\200", Q_NULLPTR));
        occb4->setText(QApplication::translate("MainWindow", "\345\244\271\346\214\201/\346\235\276\345\274\200", Q_NULLPTR));
        occb2->setText(QApplication::translate("MainWindow", "\345\244\271\346\214\201/\346\235\276\345\274\200", Q_NULLPTR));
        occb3->setText(QApplication::translate("MainWindow", "\345\244\271\346\214\201/\346\235\276\345\274\200", Q_NULLPTR));
        groupBox5->setTitle(QApplication::translate("MainWindow", "\346\227\213\350\275\254\346\216\247\345\210\266", Q_NULLPTR));
        rotate4->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        rotate2->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        rotate3->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        plusbtn_r2->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        minusbtn_r2->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        plusbtn_r3->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        minusbtn_r3->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        plusbtn_r4->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        minusbtn_r4->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        plusbtn_r1->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        minusbtn_r1->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        rotate1->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        groupBox2->setTitle(QApplication::translate("MainWindow", "\345\275\223\345\211\215\347\212\266\346\200\201", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\344\272\214\345\217\267\346\211\213", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\344\270\211\345\217\267\346\211\213", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\344\270\200\345\217\267\346\211\213", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "\345\233\233\345\217\267\346\211\213", Q_NULLPTR));
        groupBox3->setTitle(QApplication::translate("MainWindow", "\347\275\221\347\273\234\350\277\236\346\216\245", Q_NULLPTR));
        serverIPLineEdit->setText(QApplication::translate("MainWindow", "192.168.180.129", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "\346\223\215\344\275\234\345\221\230 \357\274\232", Q_NULLPTR));
        disconnect->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "\347\253\257\345\217\243 \357\274\232", Q_NULLPTR));
        userNameLineEdit->setText(QApplication::translate("MainWindow", "jim", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "\346\234\215\345\212\241\345\231\250\345\234\260\345\235\200 \357\274\232 ", Q_NULLPTR));
        connect->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        portLineEdit->setText(QApplication::translate("MainWindow", "8010", Q_NULLPTR));
        display->setText(QApplication::translate("MainWindow", "OffLine !", Q_NULLPTR));
        groupBox4->setTitle(QApplication::translate("MainWindow", "\345\211\215\350\277\233\345\220\216\351\200\200\346\216\247\345\210\266", Q_NULLPTR));
        move1->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        move2->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        move4->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        move3->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        plusbtn_m4->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        minusbtn_m4->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        plusbtn_m3->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        minusbtn_m3->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        plusbtn_m2->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        minusbtn_m2->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        plusbtn_m1->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        minusbtn_m1->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        setting->setTitle(QApplication::translate("MainWindow", "\346\250\241\345\236\213\346\230\276\347\244\272\346\216\247\345\210\266", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "\346\227\213\350\275\254\350\260\203\350\212\202", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "\345\210\235\345\247\213\344\275\215\347\275\256", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "\350\267\235\347\246\273\350\260\203\350\212\202", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "\346\250\241\345\236\213\346\230\276\347\244\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
