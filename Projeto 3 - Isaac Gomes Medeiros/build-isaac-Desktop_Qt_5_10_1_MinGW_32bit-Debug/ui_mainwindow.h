/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QSlider *HSraioX;
    QLCDNumber *lcdNumber_2;
    QSlider *HSraioZ;
    QLabel *label_4;
    QSlider *HSraioY;
    QFrame *line;
    QLCDNumber *lcdNumber_4;
    QLabel *label_7;
    QLCDNumber *lcdNumber_3;
    QFrame *line_2;
    QLabel *label_5;
    QLabel *label_3;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QSlider *HSraioEsfera;
    QLCDNumber *lcdNumber;
    QLabel *label_2;
    QLabel *label;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QSlider *HSX;
    QLCDNumber *lcdNumber_5;
    QSlider *HSZ;
    QSlider *HSY;
    QFrame *line_3;
    QLabel *label_8;
    QLCDNumber *lcdNumber_6;
    QLCDNumber *lcdNumber_7;
    QFrame *line_4;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_6;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_4;
    QLabel *label_11;
    QSlider *HSvermelho;
    QLabel *label_12;
    QSlider *HSverde;
    QLCDNumber *lcdNumber_10;
    QLCDNumber *lcdNumber_8;
    QLCDNumber *lcdNumber_13;
    QSlider *HSopacidade;
    QLCDNumber *lcdNumber_12;
    QLabel *label_17;
    QLabel *label_14;
    QLabel *label_13;
    QLCDNumber *lcdNumber_9;
    QLabel *label_16;
    QFrame *line_5;
    QSlider *HSazul;
    QFrame *line_6;
    QGroupBox *groupBox_2;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_15;
    QFrame *line_7;
    QSlider *HSdeslizar;
    QLCDNumber *lcdNumber_11;
    QFrame *line_8;
    QPushButton *buttonPXY;
    QPushButton *buttonPXZ;
    QPushButton *buttonPYZ;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QFrame *line_10;
    QPushButton *putVoxel;
    QPushButton *cutVoxel;
    QPushButton *putBox;
    QPushButton *cutBox;
    QPushButton *putSphere;
    QPushButton *cutSphere;
    QPushButton *putEllipse;
    QPushButton *cutEllipse;
    QWidget *gridLayoutWidget_5;
    QGridLayout *gridLayout_5;
    QWidget *widget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1189, 681);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(880, 70, 301, 551));
        gridLayoutWidget_2 = new QWidget(groupBox);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(30, 100, 261, 131));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        HSraioX = new QSlider(gridLayoutWidget_2);
        HSraioX->setObjectName(QStringLiteral("HSraioX"));
        HSraioX->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(HSraioX, 2, 1, 1, 1);

        lcdNumber_2 = new QLCDNumber(gridLayoutWidget_2);
        lcdNumber_2->setObjectName(QStringLiteral("lcdNumber_2"));

        gridLayout_2->addWidget(lcdNumber_2, 2, 2, 1, 1);

        HSraioZ = new QSlider(gridLayoutWidget_2);
        HSraioZ->setObjectName(QStringLiteral("HSraioZ"));
        HSraioZ->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(HSraioZ, 6, 1, 1, 1);

        label_4 = new QLabel(gridLayoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font;
        font.setFamily(QStringLiteral("MS Serif"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_4, 1, 1, 1, 1);

        HSraioY = new QSlider(gridLayoutWidget_2);
        HSraioY->setObjectName(QStringLiteral("HSraioY"));
        HSraioY->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(HSraioY, 4, 1, 1, 1);

        line = new QFrame(gridLayoutWidget_2);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 3, 1, 1, 1);

        lcdNumber_4 = new QLCDNumber(gridLayoutWidget_2);
        lcdNumber_4->setObjectName(QStringLiteral("lcdNumber_4"));

        gridLayout_2->addWidget(lcdNumber_4, 6, 2, 1, 1);

        label_7 = new QLabel(gridLayoutWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        QFont font1;
        font1.setFamily(QStringLiteral("MS Serif"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label_7->setFont(font1);

        gridLayout_2->addWidget(label_7, 6, 0, 1, 1);

        lcdNumber_3 = new QLCDNumber(gridLayoutWidget_2);
        lcdNumber_3->setObjectName(QStringLiteral("lcdNumber_3"));

        gridLayout_2->addWidget(lcdNumber_3, 4, 2, 1, 1);

        line_2 = new QFrame(gridLayoutWidget_2);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_2, 5, 1, 1, 1);

        label_5 = new QLabel(gridLayoutWidget_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font1);

        gridLayout_2->addWidget(label_5, 4, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        gridLayoutWidget = new QWidget(groupBox);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(30, 30, 261, 52));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        HSraioEsfera = new QSlider(gridLayoutWidget);
        HSraioEsfera->setObjectName(QStringLiteral("HSraioEsfera"));
        HSraioEsfera->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(HSraioEsfera, 1, 1, 1, 1);

        lcdNumber = new QLCDNumber(gridLayoutWidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));

        gridLayout->addWidget(lcdNumber, 1, 2, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font1);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        gridLayoutWidget_3 = new QWidget(groupBox);
        gridLayoutWidget_3->setObjectName(QStringLiteral("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(30, 250, 261, 128));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        HSX = new QSlider(gridLayoutWidget_3);
        HSX->setObjectName(QStringLiteral("HSX"));
        HSX->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(HSX, 1, 1, 1, 1);

        lcdNumber_5 = new QLCDNumber(gridLayoutWidget_3);
        lcdNumber_5->setObjectName(QStringLiteral("lcdNumber_5"));

        gridLayout_3->addWidget(lcdNumber_5, 1, 2, 1, 1);

        HSZ = new QSlider(gridLayoutWidget_3);
        HSZ->setObjectName(QStringLiteral("HSZ"));
        HSZ->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(HSZ, 5, 1, 1, 1);

        HSY = new QSlider(gridLayoutWidget_3);
        HSY->setObjectName(QStringLiteral("HSY"));
        HSY->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(HSY, 3, 1, 1, 1);

        line_3 = new QFrame(gridLayoutWidget_3);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_3, 2, 1, 1, 1);

        label_8 = new QLabel(gridLayoutWidget_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font1);

        gridLayout_3->addWidget(label_8, 1, 0, 1, 1);

        lcdNumber_6 = new QLCDNumber(gridLayoutWidget_3);
        lcdNumber_6->setObjectName(QStringLiteral("lcdNumber_6"));

        gridLayout_3->addWidget(lcdNumber_6, 5, 2, 1, 1);

        lcdNumber_7 = new QLCDNumber(gridLayoutWidget_3);
        lcdNumber_7->setObjectName(QStringLiteral("lcdNumber_7"));

        gridLayout_3->addWidget(lcdNumber_7, 3, 2, 1, 1);

        line_4 = new QFrame(gridLayoutWidget_3);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_4, 4, 1, 1, 1);

        label_9 = new QLabel(gridLayoutWidget_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font1);

        gridLayout_3->addWidget(label_9, 3, 0, 1, 1);

        label_10 = new QLabel(gridLayoutWidget_3);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font1);

        gridLayout_3->addWidget(label_10, 5, 0, 1, 1);

        label_6 = new QLabel(gridLayoutWidget_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_6, 0, 1, 1, 1);

        gridLayoutWidget_4 = new QWidget(groupBox);
        gridLayoutWidget_4->setObjectName(QStringLiteral("gridLayoutWidget_4"));
        gridLayoutWidget_4->setGeometry(QRect(30, 390, 261, 221));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(gridLayoutWidget_4);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font);
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_11, 0, 1, 1, 1);

        HSvermelho = new QSlider(gridLayoutWidget_4);
        HSvermelho->setObjectName(QStringLiteral("HSvermelho"));
        HSvermelho->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(HSvermelho, 1, 1, 1, 1);

        label_12 = new QLabel(gridLayoutWidget_4);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setFont(font1);

        gridLayout_4->addWidget(label_12, 1, 0, 1, 1);

        HSverde = new QSlider(gridLayoutWidget_4);
        HSverde->setObjectName(QStringLiteral("HSverde"));
        HSverde->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(HSverde, 3, 1, 1, 1);

        lcdNumber_10 = new QLCDNumber(gridLayoutWidget_4);
        lcdNumber_10->setObjectName(QStringLiteral("lcdNumber_10"));

        gridLayout_4->addWidget(lcdNumber_10, 3, 2, 1, 1);

        lcdNumber_8 = new QLCDNumber(gridLayoutWidget_4);
        lcdNumber_8->setObjectName(QStringLiteral("lcdNumber_8"));

        gridLayout_4->addWidget(lcdNumber_8, 1, 2, 1, 1);

        lcdNumber_13 = new QLCDNumber(gridLayoutWidget_4);
        lcdNumber_13->setObjectName(QStringLiteral("lcdNumber_13"));

        gridLayout_4->addWidget(lcdNumber_13, 5, 2, 1, 1);

        HSopacidade = new QSlider(gridLayoutWidget_4);
        HSopacidade->setObjectName(QStringLiteral("HSopacidade"));
        HSopacidade->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(HSopacidade, 5, 1, 1, 1);

        lcdNumber_12 = new QLCDNumber(gridLayoutWidget_4);
        lcdNumber_12->setObjectName(QStringLiteral("lcdNumber_12"));

        gridLayout_4->addWidget(lcdNumber_12, 6, 1, 1, 1);

        label_17 = new QLabel(gridLayoutWidget_4);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setFont(font1);

        gridLayout_4->addWidget(label_17, 5, 0, 1, 1);

        label_14 = new QLabel(gridLayoutWidget_4);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setFont(font1);

        gridLayout_4->addWidget(label_14, 4, 0, 1, 1);

        label_13 = new QLabel(gridLayoutWidget_4);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setFont(font1);

        gridLayout_4->addWidget(label_13, 3, 0, 1, 1);

        lcdNumber_9 = new QLCDNumber(gridLayoutWidget_4);
        lcdNumber_9->setObjectName(QStringLiteral("lcdNumber_9"));

        gridLayout_4->addWidget(lcdNumber_9, 4, 2, 1, 1);

        label_16 = new QLabel(gridLayoutWidget_4);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setFont(font1);

        gridLayout_4->addWidget(label_16, 7, 1, 1, 1);

        line_5 = new QFrame(gridLayoutWidget_4);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line_5, 2, 1, 1, 1);

        HSazul = new QSlider(gridLayoutWidget_4);
        HSazul->setObjectName(QStringLiteral("HSazul"));
        HSazul->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(HSazul, 4, 1, 1, 1);

        line_6 = new QFrame(groupBox);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setGeometry(QRect(120, 380, 96, 3));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 450, 851, 171));
        horizontalLayoutWidget_2 = new QWidget(groupBox_2);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(20, 70, 811, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_15 = new QLabel(horizontalLayoutWidget_2);
        label_15->setObjectName(QStringLiteral("label_15"));
        QFont font2;
        font2.setFamily(QStringLiteral("MS Serif"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        label_15->setFont(font2);

        horizontalLayout->addWidget(label_15);

        line_7 = new QFrame(horizontalLayoutWidget_2);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setFrameShape(QFrame::VLine);
        line_7->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_7);

        HSdeslizar = new QSlider(horizontalLayoutWidget_2);
        HSdeslizar->setObjectName(QStringLiteral("HSdeslizar"));
        HSdeslizar->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(HSdeslizar);

        lcdNumber_11 = new QLCDNumber(horizontalLayoutWidget_2);
        lcdNumber_11->setObjectName(QStringLiteral("lcdNumber_11"));

        horizontalLayout->addWidget(lcdNumber_11);


        horizontalLayout_2->addLayout(horizontalLayout);

        line_8 = new QFrame(horizontalLayoutWidget_2);
        line_8->setObjectName(QStringLiteral("line_8"));
        line_8->setFrameShape(QFrame::VLine);
        line_8->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line_8);

        buttonPXY = new QPushButton(groupBox_2);
        buttonPXY->setObjectName(QStringLiteral("buttonPXY"));
        buttonPXY->setGeometry(QRect(40, 30, 75, 23));
        buttonPXZ = new QPushButton(groupBox_2);
        buttonPXZ->setObjectName(QStringLiteral("buttonPXZ"));
        buttonPXZ->setGeometry(QRect(140, 30, 75, 23));
        buttonPYZ = new QPushButton(groupBox_2);
        buttonPYZ->setObjectName(QStringLiteral("buttonPYZ"));
        buttonPYZ->setGeometry(QRect(250, 30, 75, 23));
        horizontalLayoutWidget_4 = new QWidget(centralWidget);
        horizontalLayoutWidget_4->setObjectName(QStringLiteral("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(20, 10, 1161, 51));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        line_10 = new QFrame(horizontalLayoutWidget_4);
        line_10->setObjectName(QStringLiteral("line_10"));
        line_10->setFrameShape(QFrame::VLine);
        line_10->setFrameShadow(QFrame::Sunken);

        horizontalLayout_4->addWidget(line_10);

        putVoxel = new QPushButton(horizontalLayoutWidget_4);
        putVoxel->setObjectName(QStringLiteral("putVoxel"));

        horizontalLayout_4->addWidget(putVoxel);

        cutVoxel = new QPushButton(horizontalLayoutWidget_4);
        cutVoxel->setObjectName(QStringLiteral("cutVoxel"));

        horizontalLayout_4->addWidget(cutVoxel);

        putBox = new QPushButton(horizontalLayoutWidget_4);
        putBox->setObjectName(QStringLiteral("putBox"));

        horizontalLayout_4->addWidget(putBox);

        cutBox = new QPushButton(horizontalLayoutWidget_4);
        cutBox->setObjectName(QStringLiteral("cutBox"));

        horizontalLayout_4->addWidget(cutBox);

        putSphere = new QPushButton(horizontalLayoutWidget_4);
        putSphere->setObjectName(QStringLiteral("putSphere"));

        horizontalLayout_4->addWidget(putSphere);

        cutSphere = new QPushButton(horizontalLayoutWidget_4);
        cutSphere->setObjectName(QStringLiteral("cutSphere"));

        horizontalLayout_4->addWidget(cutSphere);

        putEllipse = new QPushButton(horizontalLayoutWidget_4);
        putEllipse->setObjectName(QStringLiteral("putEllipse"));

        horizontalLayout_4->addWidget(putEllipse);

        cutEllipse = new QPushButton(horizontalLayoutWidget_4);
        cutEllipse->setObjectName(QStringLiteral("cutEllipse"));

        horizontalLayout_4->addWidget(cutEllipse);

        gridLayoutWidget_5 = new QWidget(centralWidget);
        gridLayoutWidget_5->setObjectName(QStringLiteral("gridLayoutWidget_5"));
        gridLayoutWidget_5->setGeometry(QRect(20, 70, 851, 381));
        gridLayout_5 = new QGridLayout(gridLayoutWidget_5);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(gridLayoutWidget_5);
        widget->setObjectName(QStringLiteral("widget"));

        gridLayout_5->addWidget(widget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1189, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(HSdeslizar, SIGNAL(valueChanged(int)), lcdNumber_11, SLOT(display(int)));
        QObject::connect(HSazul, SIGNAL(valueChanged(int)), lcdNumber_9, SLOT(display(int)));
        QObject::connect(HSverde, SIGNAL(valueChanged(int)), lcdNumber_10, SLOT(display(int)));
        QObject::connect(HSvermelho, SIGNAL(valueChanged(int)), lcdNumber_8, SLOT(display(int)));
        QObject::connect(HSZ, SIGNAL(valueChanged(int)), lcdNumber_6, SLOT(display(int)));
        QObject::connect(HSY, SIGNAL(valueChanged(int)), lcdNumber_7, SLOT(display(int)));
        QObject::connect(HSX, SIGNAL(valueChanged(int)), lcdNumber_5, SLOT(display(int)));
        QObject::connect(HSraioZ, SIGNAL(valueChanged(int)), lcdNumber_4, SLOT(display(int)));
        QObject::connect(HSraioY, SIGNAL(valueChanged(int)), lcdNumber_3, SLOT(display(int)));
        QObject::connect(HSraioX, SIGNAL(valueChanged(int)), lcdNumber_2, SLOT(display(int)));
        QObject::connect(HSraioEsfera, SIGNAL(valueChanged(int)), lcdNumber, SLOT(display(int)));
        QObject::connect(HSopacidade, SIGNAL(valueChanged(int)), lcdNumber_13, SLOT(display(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Par\303\242metros", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Elipse", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Rz", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Ry", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Rx", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Esfera", nullptr));
        label->setText(QApplication::translate("MainWindow", "Raio", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "DimX", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "DimY", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "DimZ", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Caixa", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "Cor", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "RED", nullptr));
        label_17->setText(QApplication::translate("MainWindow", "OPACIDADE", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "BLUE", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "GREEN", nullptr));
        label_16->setText(QApplication::translate("MainWindow", "BLUE", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Visualiza\303\247\303\265es dos planos", nullptr));
        label_15->setText(QApplication::translate("MainWindow", "Deslizar", nullptr));
        buttonPXY->setText(QApplication::translate("MainWindow", "Plano XY", nullptr));
        buttonPXZ->setText(QApplication::translate("MainWindow", "Plano XZ", nullptr));
        buttonPYZ->setText(QApplication::translate("MainWindow", "PlanoYZ", nullptr));
        putVoxel->setText(QApplication::translate("MainWindow", "Colocar Voxel", nullptr));
        cutVoxel->setText(QApplication::translate("MainWindow", "Retirar Voxel", nullptr));
        putBox->setText(QApplication::translate("MainWindow", "Colocar Caixa", nullptr));
        cutBox->setText(QApplication::translate("MainWindow", "Retirar Caixa", nullptr));
        putSphere->setText(QApplication::translate("MainWindow", "Colocar Esfera", nullptr));
        cutSphere->setText(QApplication::translate("MainWindow", "Retirar Esfera", nullptr));
        putEllipse->setText(QApplication::translate("MainWindow", "Colocar Elipse", nullptr));
        cutEllipse->setText(QApplication::translate("MainWindow", "Retirar Elipse", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
