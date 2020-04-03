/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QPushButton *button7;
    QPushButton *button8;
    QPushButton *button9;
    QPushButton *multButton;
    QPushButton *daysButton;
    QPushButton *hoursButton;
    QPushButton *minutesButton;
    QPushButton *secondsButton;
    QPushButton *button6;
    QPushButton *button4;
    QPushButton *button5;
    QPushButton *subButton;
    QPushButton *button0;
    QPushButton *button3;
    QPushButton *button1;
    QPushButton *pointButton;
    QPushButton *plusminusButton;
    QPushButton *devButton;
    QPushButton *button2;
    QPushButton *addButton;
    QPushButton *clearButton;
    QPushButton *equalButton;
    QLabel *daysLabel;
    QLabel *hoursLabel;
    QLabel *minutesLabel;
    QLabel *secondsLabel;
    QLabel *millisecondsLabel;
    QPushButton *millisecondsButton;
    QPushButton *convertButton;
    QLabel *infoText;
    QPushButton *infoButton;
    QLabel *label_2;
    QLabel *infoText_2;
    QLabel *infoText_3;
    QLabel *infoText_4;
    QLabel *infoText_5;
    QLabel *infoText_6;
    QLabel *infoText_7;
    QLabel *infoText_8;
    QLabel *infoText_9;
    QLabel *infoText_10;
    QLabel *infoText_11;
    QLabel *close;
    QPushButton *closeButton;
    QLabel *infoText_12;
    QLabel *label_3;
    QPushButton *offButton;
    QLabel *onSwitch;
    QLabel *offSwitch;
    QLabel *daysGlow;
    QLabel *hoursGlow;
    QLabel *minutesGlow;
    QLabel *secondsGlow;
    QLabel *millisecondsGlow;
    QLabel *days;
    QLabel *hours;
    QLabel *minutes;
    QLabel *seconds;
    QLabel *milliseconds;
    QLabel *historyImage;
    QPushButton *history;
    QLabel *saveImage;
    QPushButton *saveButton;
    QLabel *line;
    QLabel *history2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(541, 662);
        MainWindow->setWindowOpacity(1);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QLatin1String("QMainWindow{\n"
"background-color: #4d4d4d\n"
"}"));
        MainWindow->setDocumentMode(false);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(-20, 210, 521, 41));
        QFont font;
        font.setPointSize(24);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 5pxdark  gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #808080, stop: 1 #696969	);\n"
"}\n"
"\n"
"/* End Digits 0-9 Stylesheet */\n"
"\n"
"/* (Clear,+/-,%,. buttons) Unary Operations Buttons Stylesheet */\n"
"\n"
"QPushButton {\n"
"	background-color: rgb(71, 71, 71);\n"
"	  border: 5px dark  gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0#808080, stop: 1#696969	);\n"
"}\n"
"/* End Unary Operations Buttons Stylesheet */\n"
"\n"
"/* (Orange buttons) Operations Buttons Stylesheet */\n"
"QPushButton {\n"
"  background-color: rgb(71, 71, 71);\n"
"  color: gray; \n"
"  border: 5px dark  gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #808080, stop: 1 #696969	)"
                        ";\n"
"}\n"
"\n"
"/* (Label at top) Label Stylesheet */\n"
"\n"
"QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 5px dark  gray;\n"
"	color: rgb(221, 221, 221);\n"
"}\n"
"\n"
"background-color :dark  gray;\n"
""));
        button7 = new QPushButton(centralWidget);
        button7->setObjectName(QStringLiteral("button7"));
        button7->setGeometry(QRect(10, 380, 101, 61));
        button7->setFont(font);
        button7->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 5px white;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #808080, stop: 1 #696969	);\n"
"}\n"
"\n"
"/* End Digits 0-9 Stylesheet */\n"
"\n"
"/* (Clear,+/-,%,. buttons) Unary Operations Buttons Stylesheet */\n"
"\n"
"QPushButton {\n"
"	background-color: rgb(38, 38, 38);\n"
"	  border: 5px dark  gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0#808080, stop: 1#696969	);\n"
"}\n"
"/* End Unary Operations Buttons Stylesheet */\n"
"\n"
"/* (Orange buttons) Operations Buttons Stylesheet */\n"
"QPushButton {\n"
"  background-color: rgb(38, 38, 38);\n"
"  color: white; \n"
"  border: 5px white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #242424, stop: 1 #2d2d2d	);\n"
"}\n"
""
                        "\n"
"/* (Label at top) Label Stylesheet */\n"
"\n"
"QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 5px white;\n"
"}\n"
"\n"
"background-color :dark  gray;\n"
""));
        button8 = new QPushButton(centralWidget);
        button8->setObjectName(QStringLiteral("button8"));
        button8->setGeometry(QRect(120, 380, 101, 61));
        button8->setFont(font);
        button8->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 5px white;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #808080, stop: 1 #696969	);\n"
"}\n"
"\n"
"/* End Digits 0-9 Stylesheet */\n"
"\n"
"/* (Clear,+/-,%,. buttons) Unary Operations Buttons Stylesheet */\n"
"\n"
"QPushButton {\n"
"	background-color: rgb(38, 38, 38);\n"
"	  border: 5px dark  gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0#808080, stop: 1#696969	);\n"
"}\n"
"/* End Unary Operations Buttons Stylesheet */\n"
"\n"
"/* (Orange buttons) Operations Buttons Stylesheet */\n"
"QPushButton {\n"
"  background-color: rgb(38, 38, 38);\n"
"  color: white; \n"
"  border: 5px white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #242424, stop: 1 #2d2d2d	);\n"
"}\n"
""
                        "\n"
"/* (Label at top) Label Stylesheet */\n"
"\n"
"QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 5px white;\n"
"}\n"
"\n"
"background-color :dark  gray;\n"
""));
        button9 = new QPushButton(centralWidget);
        button9->setObjectName(QStringLiteral("button9"));
        button9->setGeometry(QRect(230, 380, 91, 61));
        button9->setFont(font);
        button9->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 5px white;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #808080, stop: 1 #696969	);\n"
"}\n"
"\n"
"/* End Digits 0-9 Stylesheet */\n"
"\n"
"/* (Clear,+/-,%,. buttons) Unary Operations Buttons Stylesheet */\n"
"\n"
"QPushButton {\n"
"	background-color: rgb(38, 38, 38);\n"
"	  border: 5px dark  gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0#808080, stop: 1#696969	);\n"
"}\n"
"/* End Unary Operations Buttons Stylesheet */\n"
"\n"
"/* (Orange buttons) Operations Buttons Stylesheet */\n"
"QPushButton {\n"
"  background-color: rgb(38, 38, 38);\n"
"  color: white; \n"
"  border: 5px white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #242424, stop: 1 #2d2d2d	);\n"
"}\n"
""
                        "\n"
"/* (Label at top) Label Stylesheet */\n"
"\n"
"QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 5px white;\n"
"}\n"
"\n"
"background-color :dark  gray;\n"
""));
        multButton = new QPushButton(centralWidget);
        multButton->setObjectName(QStringLiteral("multButton"));
        multButton->setGeometry(QRect(330, 380, 91, 61));
        QFont font1;
        font1.setPointSize(22);
        font1.setBold(true);
        font1.setWeight(75);
        multButton->setFont(font1);
        multButton->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: white;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #808080, stop: 1 #696969	);\n"
"}\n"
"\n"
"/* End Digits 0-9 Stylesheet */\n"
"\n"
"/* (Clear,+/-,%,. buttons) Unary Operations Buttons Stylesheet */\n"
"\n"
"QPushButton {\n"
"	background-color: rgb(146, 146, 146);\n"
"	  border: 5px dark  gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0#808080, stop: 1#696969	);\n"
"}\n"
"/* End Unary Operations Buttons Stylesheet */\n"
"\n"
"/* (Orange buttons) Operations Buttons Stylesheet */\n"
"QPushButton {\n"
"  background-color: rgb(146, 146, 146);\n"
"  color: white; \n"
"  border: 5px white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #929292, stop: 1 #a1a1a1	);\n"
""
                        "}\n"
"\n"
"/* (Label at top) Label Stylesheet */\n"
"\n"
"QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 5px white;\n"
"}\n"
"\n"
"background-color :white;\n"
""));
        daysButton = new QPushButton(centralWidget);
        daysButton->setObjectName(QStringLiteral("daysButton"));
        daysButton->setGeometry(QRect(430, 310, 101, 61));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        daysButton->setFont(font2);
        daysButton->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(255, 255, 255, 0);\n"
"}\n"
"\n"
""));
        hoursButton = new QPushButton(centralWidget);
        hoursButton->setObjectName(QStringLiteral("hoursButton"));
        hoursButton->setGeometry(QRect(430, 380, 101, 61));
        hoursButton->setFont(font2);
        hoursButton->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(255, 255, 255, 0);\n"
"}\n"
"\n"
""));
        minutesButton = new QPushButton(centralWidget);
        minutesButton->setObjectName(QStringLiteral("minutesButton"));
        minutesButton->setGeometry(QRect(430, 450, 101, 61));
        minutesButton->setFont(font2);
        minutesButton->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(255, 255, 255, 0);\n"
"}\n"
"\n"
""));
        secondsButton = new QPushButton(centralWidget);
        secondsButton->setObjectName(QStringLiteral("secondsButton"));
        secondsButton->setGeometry(QRect(430, 520, 101, 61));
        secondsButton->setFont(font2);
        secondsButton->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(255, 255, 255, 0);\n"
"}\n"
"\n"
""));
        button6 = new QPushButton(centralWidget);
        button6->setObjectName(QStringLiteral("button6"));
        button6->setGeometry(QRect(230, 450, 91, 61));
        button6->setFont(font);
        button6->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 5px white;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #808080, stop: 1 #696969	);\n"
"}\n"
"\n"
"/* End Digits 0-9 Stylesheet */\n"
"\n"
"/* (Clear,+/-,%,. buttons) Unary Operations Buttons Stylesheet */\n"
"\n"
"QPushButton {\n"
"	background-color: rgb(38, 38, 38);\n"
"	  border: 5px dark  gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0#808080, stop: 1#696969	);\n"
"}\n"
"/* End Unary Operations Buttons Stylesheet */\n"
"\n"
"/* (Orange buttons) Operations Buttons Stylesheet */\n"
"QPushButton {\n"
"  background-color: rgb(38, 38, 38);\n"
"  color: white; \n"
"  border: 5px white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #242424, stop: 1 #2d2d2d	);\n"
"}\n"
""
                        "\n"
"/* (Label at top) Label Stylesheet */\n"
"\n"
"QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 5px white;\n"
"}\n"
"\n"
"background-color :dark  gray;\n"
""));
        button4 = new QPushButton(centralWidget);
        button4->setObjectName(QStringLiteral("button4"));
        button4->setGeometry(QRect(10, 450, 101, 61));
        button4->setFont(font);
        button4->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 5px white;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #808080, stop: 1 #696969	);\n"
"}\n"
"\n"
"/* End Digits 0-9 Stylesheet */\n"
"\n"
"/* (Clear,+/-,%,. buttons) Unary Operations Buttons Stylesheet */\n"
"\n"
"QPushButton {\n"
"	background-color: rgb(38, 38, 38);\n"
"	  border: 5px dark  gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0#808080, stop: 1#696969	);\n"
"}\n"
"/* End Unary Operations Buttons Stylesheet */\n"
"\n"
"/* (Orange buttons) Operations Buttons Stylesheet */\n"
"QPushButton {\n"
"  background-color: rgb(38, 38, 38);\n"
"  color: white; \n"
"  border: 5px white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #242424, stop: 1 #2d2d2d	);\n"
"}\n"
""
                        "\n"
"/* (Label at top) Label Stylesheet */\n"
"\n"
"QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 5px white;\n"
"}\n"
"\n"
"background-color :dark  gray;\n"
""));
        button5 = new QPushButton(centralWidget);
        button5->setObjectName(QStringLiteral("button5"));
        button5->setGeometry(QRect(120, 450, 101, 61));
        button5->setFont(font);
        button5->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 5px white;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #808080, stop: 1 #696969	);\n"
"}\n"
"\n"
"/* End Digits 0-9 Stylesheet */\n"
"\n"
"/* (Clear,+/-,%,. buttons) Unary Operations Buttons Stylesheet */\n"
"\n"
"QPushButton {\n"
"	background-color: rgb(38, 38, 38);\n"
"	  border: 5px dark  gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0#808080, stop: 1#696969	);\n"
"}\n"
"/* End Unary Operations Buttons Stylesheet */\n"
"\n"
"/* (Orange buttons) Operations Buttons Stylesheet */\n"
"QPushButton {\n"
"  background-color: rgb(38, 38, 38);\n"
"  color: white; \n"
"  border: 5px white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #242424, stop: 1 #2d2d2d	);\n"
"}\n"
""
                        "\n"
"/* (Label at top) Label Stylesheet */\n"
"\n"
"QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 5px white;\n"
"}\n"
"\n"
"background-color :dark  gray;\n"
""));
        subButton = new QPushButton(centralWidget);
        subButton->setObjectName(QStringLiteral("subButton"));
        subButton->setGeometry(QRect(330, 450, 91, 61));
        subButton->setFont(font1);
        subButton->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: white;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #808080, stop: 1 #696969	);\n"
"}\n"
"\n"
"/* End Digits 0-9 Stylesheet */\n"
"\n"
"/* (Clear,+/-,%,. buttons) Unary Operations Buttons Stylesheet */\n"
"\n"
"QPushButton {\n"
"	background-color: rgb(146, 146, 146);\n"
"	  border: 5px dark  gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0#808080, stop: 1#696969	);\n"
"}\n"
"/* End Unary Operations Buttons Stylesheet */\n"
"\n"
"/* (Orange buttons) Operations Buttons Stylesheet */\n"
"QPushButton {\n"
"  background-color: rgb(146, 146, 146);\n"
"  color: white; \n"
"  border: 5px white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #929292, stop: 1 #a1a1a1	);\n"
""
                        "}\n"
"\n"
"/* (Label at top) Label Stylesheet */\n"
"\n"
"QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 5px white;\n"
"}\n"
"\n"
"background-color :white;\n"
""));
        button0 = new QPushButton(centralWidget);
        button0->setObjectName(QStringLiteral("button0"));
        button0->setGeometry(QRect(120, 590, 101, 61));
        button0->setFont(font);
        button0->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 5px white;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #808080, stop: 1 #696969	);\n"
"}\n"
"\n"
"/* End Digits 0-9 Stylesheet */\n"
"\n"
"/* (Clear,+/-,%,. buttons) Unary Operations Buttons Stylesheet */\n"
"\n"
"QPushButton {\n"
"	background-color: rgb(38, 38, 38);\n"
"	  border: 5px dark  gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0#808080, stop: 1#696969	);\n"
"}\n"
"/* End Unary Operations Buttons Stylesheet */\n"
"\n"
"/* (Orange buttons) Operations Buttons Stylesheet */\n"
"QPushButton {\n"
"  background-color: rgb(38, 38, 38);\n"
"  color: white; \n"
"  border: 5px white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #242424, stop: 1 #2d2d2d	);\n"
"}\n"
""
                        "\n"
"/* (Label at top) Label Stylesheet */\n"
"\n"
"QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 5px white;\n"
"}\n"
"\n"
"background-color :dark  gray;\n"
""));
        button3 = new QPushButton(centralWidget);
        button3->setObjectName(QStringLiteral("button3"));
        button3->setGeometry(QRect(230, 520, 91, 61));
        button3->setFont(font);
        button3->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 5px white;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #808080, stop: 1 #696969	);\n"
"}\n"
"\n"
"/* End Digits 0-9 Stylesheet */\n"
"\n"
"/* (Clear,+/-,%,. buttons) Unary Operations Buttons Stylesheet */\n"
"\n"
"QPushButton {\n"
"	background-color: rgb(38, 38, 38);\n"
"	  border: 5px dark  gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0#808080, stop: 1#696969	);\n"
"}\n"
"/* End Unary Operations Buttons Stylesheet */\n"
"\n"
"/* (Orange buttons) Operations Buttons Stylesheet */\n"
"QPushButton {\n"
"  background-color: rgb(38, 38, 38);\n"
"  color: white; \n"
"  border: 5px white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #242424, stop: 1 #2d2d2d	);\n"
"}\n"
""
                        "\n"
"/* (Label at top) Label Stylesheet */\n"
"\n"
"QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 5px white;\n"
"}\n"
"\n"
"background-color :dark  gray;\n"
""));
        button1 = new QPushButton(centralWidget);
        button1->setObjectName(QStringLiteral("button1"));
        button1->setGeometry(QRect(10, 520, 101, 61));
        button1->setFont(font);
        button1->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 5px white;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #808080, stop: 1 #696969	);\n"
"}\n"
"\n"
"/* End Digits 0-9 Stylesheet */\n"
"\n"
"/* (Clear,+/-,%,. buttons) Unary Operations Buttons Stylesheet */\n"
"\n"
"QPushButton {\n"
"	background-color: rgb(38, 38, 38);\n"
"	  border: 5px dark  gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0#808080, stop: 1#696969	);\n"
"}\n"
"/* End Unary Operations Buttons Stylesheet */\n"
"\n"
"/* (Orange buttons) Operations Buttons Stylesheet */\n"
"QPushButton {\n"
"  background-color: rgb(38, 38, 38);\n"
"  color: white; \n"
"  border: 5px white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #242424, stop: 1 #2d2d2d	);\n"
"}\n"
""
                        "\n"
"/* (Label at top) Label Stylesheet */\n"
"\n"
"QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 5px white;\n"
"}\n"
"\n"
"background-color :dark  gray;\n"
""));
        pointButton = new QPushButton(centralWidget);
        pointButton->setObjectName(QStringLiteral("pointButton"));
        pointButton->setGeometry(QRect(10, 590, 101, 61));
        pointButton->setFont(font1);
        pointButton->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: white;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #808080, stop: 1 #696969	);\n"
"}\n"
"\n"
"/* End Digits 0-9 Stylesheet */\n"
"\n"
"/* (Clear,+/-,%,. buttons) Unary Operations Buttons Stylesheet */\n"
"\n"
"QPushButton {\n"
"	background-color: rgb(146, 146, 146);\n"
"	  border: 5px dark  gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0#808080, stop: 1#696969	);\n"
"}\n"
"/* End Unary Operations Buttons Stylesheet */\n"
"\n"
"/* (Orange buttons) Operations Buttons Stylesheet */\n"
"QPushButton {\n"
"  background-color: rgb(146, 146, 146);\n"
"  color: white; \n"
"  border: 5px white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #929292, stop: 1 #a1a1a1	);\n"
""
                        "}\n"
"\n"
"/* (Label at top) Label Stylesheet */\n"
"\n"
"QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 5px white;\n"
"}\n"
"\n"
"background-color :white;\n"
""));
        plusminusButton = new QPushButton(centralWidget);
        plusminusButton->setObjectName(QStringLiteral("plusminusButton"));
        plusminusButton->setGeometry(QRect(230, 590, 91, 61));
        plusminusButton->setFont(font1);
        plusminusButton->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: white;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #808080, stop: 1 #696969	);\n"
"}\n"
"\n"
"/* End Digits 0-9 Stylesheet */\n"
"\n"
"/* (Clear,+/-,%,. buttons) Unary Operations Buttons Stylesheet */\n"
"\n"
"QPushButton {\n"
"	background-color: rgb(146, 146, 146);\n"
"	  border: 5px dark  gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0#808080, stop: 1#696969	);\n"
"}\n"
"/* End Unary Operations Buttons Stylesheet */\n"
"\n"
"/* (Orange buttons) Operations Buttons Stylesheet */\n"
"QPushButton {\n"
"  background-color: rgb(146, 146, 146);\n"
"  color: white; \n"
"  border: 5px white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #929292, stop: 1 #a1a1a1	);\n"
""
                        "}\n"
"\n"
"/* (Label at top) Label Stylesheet */\n"
"\n"
"QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 5px white;\n"
"}\n"
"\n"
"background-color :white;\n"
""));
        devButton = new QPushButton(centralWidget);
        devButton->setObjectName(QStringLiteral("devButton"));
        devButton->setGeometry(QRect(330, 590, 91, 61));
        devButton->setFont(font1);
        devButton->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: white;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #808080, stop: 1 #696969	);\n"
"}\n"
"\n"
"/* End Digits 0-9 Stylesheet */\n"
"\n"
"/* (Clear,+/-,%,. buttons) Unary Operations Buttons Stylesheet */\n"
"\n"
"QPushButton {\n"
"	background-color: rgb(146, 146, 146);\n"
"	  border: 5px dark  gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0#808080, stop: 1#696969	);\n"
"}\n"
"/* End Unary Operations Buttons Stylesheet */\n"
"\n"
"/* (Orange buttons) Operations Buttons Stylesheet */\n"
"QPushButton {\n"
"  background-color: rgb(146, 146, 146);\n"
"  color: white; \n"
"  border: 5px white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #929292, stop: 1 #a1a1a1	);\n"
""
                        "}\n"
"\n"
"/* (Label at top) Label Stylesheet */\n"
"\n"
"QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 5px white;\n"
"}\n"
"\n"
"background-color :white;\n"
""));
        button2 = new QPushButton(centralWidget);
        button2->setObjectName(QStringLiteral("button2"));
        button2->setGeometry(QRect(120, 520, 101, 61));
        button2->setFont(font);
        button2->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 5px white;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #808080, stop: 1 #696969	);\n"
"}\n"
"\n"
"/* End Digits 0-9 Stylesheet */\n"
"\n"
"/* (Clear,+/-,%,. buttons) Unary Operations Buttons Stylesheet */\n"
"\n"
"QPushButton {\n"
"	background-color: rgb(38, 38, 38);\n"
"	  border: 5px dark  gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0#808080, stop: 1#696969	);\n"
"}\n"
"/* End Unary Operations Buttons Stylesheet */\n"
"\n"
"/* (Orange buttons) Operations Buttons Stylesheet */\n"
"QPushButton {\n"
"  background-color: rgb(38, 38, 38);\n"
"  color: white; \n"
"  border: 5px white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #242424, stop: 1 #2d2d2d	);\n"
"}\n"
""
                        "\n"
"/* (Label at top) Label Stylesheet */\n"
"\n"
"QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 5px white;\n"
"}\n"
"\n"
"background-color :dark  gray;\n"
""));
        addButton = new QPushButton(centralWidget);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setGeometry(QRect(330, 520, 91, 61));
        addButton->setFont(font1);
        addButton->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: white;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #808080, stop: 1 #696969	);\n"
"}\n"
"\n"
"/* End Digits 0-9 Stylesheet */\n"
"\n"
"/* (Clear,+/-,%,. buttons) Unary Operations Buttons Stylesheet */\n"
"\n"
"QPushButton {\n"
"	background-color: rgb(146, 146, 146);\n"
"	  border: 5px dark  gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0#808080, stop: 1#696969	);\n"
"}\n"
"/* End Unary Operations Buttons Stylesheet */\n"
"\n"
"/* (Orange buttons) Operations Buttons Stylesheet */\n"
"QPushButton {\n"
"  background-color: rgb(146, 146, 146);\n"
"  color: white; \n"
"  border: 5px white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #929292, stop: 1 #a1a1a1	);\n"
""
                        "}\n"
"\n"
"/* (Label at top) Label Stylesheet */\n"
"\n"
"QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 5px white;\n"
"}\n"
"\n"
"background-color :white;\n"
""));
        clearButton = new QPushButton(centralWidget);
        clearButton->setObjectName(QStringLiteral("clearButton"));
        clearButton->setGeometry(QRect(10, 310, 211, 61));
        clearButton->setFont(font1);
        clearButton->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: white;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #808080, stop: 1 #696969	);\n"
"}\n"
"\n"
"/* End Digits 0-9 Stylesheet */\n"
"\n"
"/* (Clear,+/-,%,. buttons) Unary Operations Buttons Stylesheet */\n"
"\n"
"QPushButton {\n"
"	background-color: rgb(146, 146, 146);\n"
"	  border: 5px dark  gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0#808080, stop: 1#696969	);\n"
"}\n"
"/* End Unary Operations Buttons Stylesheet */\n"
"\n"
"/* (Orange buttons) Operations Buttons Stylesheet */\n"
"QPushButton {\n"
"  background-color: rgb(146, 146, 146);\n"
"  color: white; \n"
"  border: 5px white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #929292, stop: 1 #a1a1a1	);\n"
""
                        "}\n"
"\n"
"/* (Label at top) Label Stylesheet */\n"
"\n"
"QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 5px white;\n"
"}\n"
"\n"
"background-color :white;\n"
""));
        equalButton = new QPushButton(centralWidget);
        equalButton->setObjectName(QStringLiteral("equalButton"));
        equalButton->setGeometry(QRect(230, 310, 191, 61));
        equalButton->setFont(font1);
        equalButton->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: white;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #808080, stop: 1 #696969	);\n"
"}\n"
"\n"
"/* End Digits 0-9 Stylesheet */\n"
"\n"
"/* (Clear,+/-,%,. buttons) Unary Operations Buttons Stylesheet */\n"
"\n"
"QPushButton {\n"
"	background-color: rgb(146, 146, 146);\n"
"	  border: 5px dark  gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0#808080, stop: 1#696969	);\n"
"}\n"
"/* End Unary Operations Buttons Stylesheet */\n"
"\n"
"/* (Orange buttons) Operations Buttons Stylesheet */\n"
"QPushButton {\n"
"  background-color: rgb(146, 146, 146);\n"
"  color: white; \n"
"  border: 5px white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #929292, stop: 1 #a1a1a1	);\n"
""
                        "}\n"
"\n"
"/* (Label at top) Label Stylesheet */\n"
"\n"
"QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 5px white;\n"
"}\n"
"\n"
"background-color :white;\n"
""));
        daysLabel = new QLabel(centralWidget);
        daysLabel->setObjectName(QStringLiteral("daysLabel"));
        daysLabel->setGeometry(QRect(20, 0, 511, 31));
        QFont font3;
        font3.setPointSize(16);
        font3.setBold(true);
        font3.setWeight(75);
        daysLabel->setFont(font3);
        daysLabel->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 5pxdark  gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #808080, stop: 1 #696969	);\n"
"}\n"
"\n"
"/* End Digits 0-9 Stylesheet */\n"
"\n"
"/* (Clear,+/-,%,. buttons) Unary Operations Buttons Stylesheet */\n"
"\n"
"QPushButton {\n"
"	background-color: rgb(71, 71, 71);\n"
"	  border: 5px dark  gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0#808080, stop: 1#696969	);\n"
"}\n"
"/* End Unary Operations Buttons Stylesheet */\n"
"\n"
"/* (Orange buttons) Operations Buttons Stylesheet */\n"
"QPushButton {\n"
"  background-color: rgb(71, 71, 71);\n"
"  color: gray; \n"
"  border: 5px dark  gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #808080, stop: 1 #696969	)"
                        ";\n"
"}\n"
"\n"
"/* (Label at top) Label Stylesheet */\n"
"\n"
"QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 5px dark  gray;\n"
"	color: rgb(221, 221, 221);\n"
"}\n"
"\n"
"background-color :dark  gray;\n"
""));
        daysLabel->setScaledContents(true);
        hoursLabel = new QLabel(centralWidget);
        hoursLabel->setObjectName(QStringLiteral("hoursLabel"));
        hoursLabel->setGeometry(QRect(20, 40, 511, 21));
        hoursLabel->setFont(font3);
        hoursLabel->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 5pxdark  gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #808080, stop: 1 #696969	);\n"
"}\n"
"\n"
"/* End Digits 0-9 Stylesheet */\n"
"\n"
"/* (Clear,+/-,%,. buttons) Unary Operations Buttons Stylesheet */\n"
"\n"
"QPushButton {\n"
"	background-color: rgb(71, 71, 71);\n"
"	  border: 5px dark  gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0#808080, stop: 1#696969	);\n"
"}\n"
"/* End Unary Operations Buttons Stylesheet */\n"
"\n"
"/* (Orange buttons) Operations Buttons Stylesheet */\n"
"QPushButton {\n"
"  background-color: rgb(71, 71, 71);\n"
"  color: gray; \n"
"  border: 5px dark  gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #808080, stop: 1 #696969	)"
                        ";\n"
"}\n"
"\n"
"/* (Label at top) Label Stylesheet */\n"
"\n"
"QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 5px dark  gray;\n"
"	color: rgb(221, 221, 221);\n"
"}\n"
"\n"
"background-color :dark  gray;\n"
""));
        hoursLabel->setScaledContents(true);
        minutesLabel = new QLabel(centralWidget);
        minutesLabel->setObjectName(QStringLiteral("minutesLabel"));
        minutesLabel->setGeometry(QRect(20, 80, 511, 21));
        minutesLabel->setFont(font3);
        minutesLabel->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 5pxdark  gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #808080, stop: 1 #696969	);\n"
"}\n"
"\n"
"/* End Digits 0-9 Stylesheet */\n"
"\n"
"/* (Clear,+/-,%,. buttons) Unary Operations Buttons Stylesheet */\n"
"\n"
"QPushButton {\n"
"	background-color: rgb(71, 71, 71);\n"
"	  border: 5px dark  gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0#808080, stop: 1#696969	);\n"
"}\n"
"/* End Unary Operations Buttons Stylesheet */\n"
"\n"
"/* (Orange buttons) Operations Buttons Stylesheet */\n"
"QPushButton {\n"
"  background-color: rgb(71, 71, 71);\n"
"  color: gray; \n"
"  border: 5px dark  gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #808080, stop: 1 #696969	)"
                        ";\n"
"}\n"
"\n"
"/* (Label at top) Label Stylesheet */\n"
"\n"
"QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 5px dark  gray;\n"
"	color: rgb(221, 221, 221);\n"
"}\n"
"\n"
"background-color :dark  gray;\n"
""));
        minutesLabel->setScaledContents(true);
        secondsLabel = new QLabel(centralWidget);
        secondsLabel->setObjectName(QStringLiteral("secondsLabel"));
        secondsLabel->setGeometry(QRect(10, 120, 521, 21));
        secondsLabel->setFont(font3);
        secondsLabel->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 5pxdark  gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #808080, stop: 1 #696969	);\n"
"}\n"
"\n"
"/* End Digits 0-9 Stylesheet */\n"
"\n"
"/* (Clear,+/-,%,. buttons) Unary Operations Buttons Stylesheet */\n"
"\n"
"QPushButton {\n"
"	background-color: rgb(71, 71, 71);\n"
"	  border: 5px dark  gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0#808080, stop: 1#696969	);\n"
"}\n"
"/* End Unary Operations Buttons Stylesheet */\n"
"\n"
"/* (Orange buttons) Operations Buttons Stylesheet */\n"
"QPushButton {\n"
"  background-color: rgb(71, 71, 71);\n"
"  color: gray; \n"
"  border: 5px dark  gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #808080, stop: 1 #696969	)"
                        ";\n"
"}\n"
"\n"
"/* (Label at top) Label Stylesheet */\n"
"\n"
"QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 5px dark  gray;\n"
"	color: rgb(221, 221, 221);\n"
"}\n"
"\n"
"background-color :dark  gray;\n"
""));
        secondsLabel->setScaledContents(true);
        millisecondsLabel = new QLabel(centralWidget);
        millisecondsLabel->setObjectName(QStringLiteral("millisecondsLabel"));
        millisecondsLabel->setGeometry(QRect(20, 160, 511, 21));
        millisecondsLabel->setFont(font3);
        millisecondsLabel->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 5pxdark  gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #808080, stop: 1 #696969	);\n"
"}\n"
"\n"
"/* End Digits 0-9 Stylesheet */\n"
"\n"
"/* (Clear,+/-,%,. buttons) Unary Operations Buttons Stylesheet */\n"
"\n"
"QPushButton {\n"
"	background-color: rgb(71, 71, 71);\n"
"	  border: 5px dark  gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0#808080, stop: 1#696969	);\n"
"}\n"
"/* End Unary Operations Buttons Stylesheet */\n"
"\n"
"/* (Orange buttons) Operations Buttons Stylesheet */\n"
"QPushButton {\n"
"  background-color: rgb(71, 71, 71);\n"
"  color: gray; \n"
"  border: 5px dark  gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #808080, stop: 1 #696969	)"
                        ";\n"
"}\n"
"\n"
"/* (Label at top) Label Stylesheet */\n"
"\n"
"QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 5px dark  gray;\n"
"	color: rgb(221, 221, 221);\n"
"}\n"
"\n"
"background-color :dark  gray;\n"
""));
        millisecondsLabel->setScaledContents(true);
        millisecondsButton = new QPushButton(centralWidget);
        millisecondsButton->setObjectName(QStringLiteral("millisecondsButton"));
        millisecondsButton->setGeometry(QRect(430, 590, 101, 61));
        millisecondsButton->setFont(font2);
        millisecondsButton->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(255, 255, 255, 0);\n"
"}\n"
"\n"
""));
        convertButton = new QPushButton(centralWidget);
        convertButton->setObjectName(QStringLiteral("convertButton"));
        convertButton->setGeometry(QRect(490, 260, 21, 41));
        convertButton->setFont(font3);
        convertButton->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(255, 255, 255, 0);\n"
"}\n"
"\n"
"\n"
""));
        infoText = new QLabel(centralWidget);
        infoText->setObjectName(QStringLiteral("infoText"));
        infoText->setGeometry(QRect(10, 1, 221, 20));
        QFont font4;
        font4.setPointSize(9);
        font4.setBold(true);
        font4.setWeight(75);
        infoText->setFont(font4);
        infoText->setStyleSheet(QLatin1String("QLabel {\n"
"  qproperty-alignment: 'AlignTop | AlignLeft';\n"
"  border: 5px dark  gray;\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        infoButton = new QPushButton(centralWidget);
        infoButton->setObjectName(QStringLiteral("infoButton"));
        infoButton->setGeometry(QRect(10, 260, 41, 41));
        QFont font5;
        font5.setFamily(QStringLiteral("MS Reference Sans Serif"));
        font5.setPointSize(11);
        font5.setBold(false);
        font5.setWeight(50);
        infoButton->setFont(font5);
        infoButton->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(255, 255, 255, 0);\n"
"}\n"
"\n"
""));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 260, 41, 41));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/Images/Webp.net-resizeimage (1).png")));
        infoText_2 = new QLabel(centralWidget);
        infoText_2->setObjectName(QStringLiteral("infoText_2"));
        infoText_2->setGeometry(QRect(10, 20, 231, 21));
        infoText_2->setFont(font4);
        infoText_2->setStyleSheet(QLatin1String("QLabel {\n"
"  qproperty-alignment: 'AlignTop | AlignLeft';\n"
"  border: 5px dark  gray;\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        infoText_3 = new QLabel(centralWidget);
        infoText_3->setObjectName(QStringLiteral("infoText_3"));
        infoText_3->setGeometry(QRect(10, 40, 221, 16));
        infoText_3->setFont(font4);
        infoText_3->setStyleSheet(QLatin1String("QLabel {\n"
"  qproperty-alignment: 'AlignTop | AlignLeft';\n"
"  border: 5px dark  gray;\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        infoText_4 = new QLabel(centralWidget);
        infoText_4->setObjectName(QStringLiteral("infoText_4"));
        infoText_4->setGeometry(QRect(10, 60, 231, 16));
        infoText_4->setFont(font4);
        infoText_4->setStyleSheet(QLatin1String("QLabel {\n"
"  qproperty-alignment: 'AlignTop | AlignLeft';\n"
"  border: 5px dark  gray;\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        infoText_5 = new QLabel(centralWidget);
        infoText_5->setObjectName(QStringLiteral("infoText_5"));
        infoText_5->setGeometry(QRect(10, 80, 221, 16));
        infoText_5->setFont(font4);
        infoText_5->setStyleSheet(QLatin1String("QLabel {\n"
"  qproperty-alignment: 'AlignTop | AlignLeft';\n"
"  border: 5px dark  gray;\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        infoText_6 = new QLabel(centralWidget);
        infoText_6->setObjectName(QStringLiteral("infoText_6"));
        infoText_6->setGeometry(QRect(10, 100, 221, 16));
        infoText_6->setFont(font4);
        infoText_6->setStyleSheet(QLatin1String("QLabel {\n"
"  qproperty-alignment: 'AlignTop | AlignLeft';\n"
"  border: 5px dark  gray;\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        infoText_7 = new QLabel(centralWidget);
        infoText_7->setObjectName(QStringLiteral("infoText_7"));
        infoText_7->setGeometry(QRect(10, 120, 221, 16));
        infoText_7->setFont(font4);
        infoText_7->setStyleSheet(QLatin1String("QLabel {\n"
"  qproperty-alignment: 'AlignTop | AlignLeft';\n"
"  border: 5px dark  gray;\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        infoText_8 = new QLabel(centralWidget);
        infoText_8->setObjectName(QStringLiteral("infoText_8"));
        infoText_8->setGeometry(QRect(10, 140, 221, 16));
        infoText_8->setFont(font4);
        infoText_8->setStyleSheet(QLatin1String("QLabel {\n"
"  qproperty-alignment: 'AlignTop | AlignLeft';\n"
"  border: 5px dark  gray;\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        infoText_9 = new QLabel(centralWidget);
        infoText_9->setObjectName(QStringLiteral("infoText_9"));
        infoText_9->setGeometry(QRect(10, 160, 221, 16));
        infoText_9->setFont(font4);
        infoText_9->setStyleSheet(QLatin1String("QLabel {\n"
"  qproperty-alignment: 'AlignTop | AlignLeft';\n"
"  border: 5px dark  gray;\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        infoText_10 = new QLabel(centralWidget);
        infoText_10->setObjectName(QStringLiteral("infoText_10"));
        infoText_10->setGeometry(QRect(10, 180, 221, 16));
        infoText_10->setFont(font4);
        infoText_10->setStyleSheet(QLatin1String("QLabel {\n"
"  qproperty-alignment: 'AlignTop | AlignLeft';\n"
"  border: 5px dark  gray;\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        infoText_11 = new QLabel(centralWidget);
        infoText_11->setObjectName(QStringLiteral("infoText_11"));
        infoText_11->setGeometry(QRect(10, 200, 221, 16));
        infoText_11->setFont(font4);
        infoText_11->setStyleSheet(QLatin1String("QLabel {\n"
"  qproperty-alignment: 'AlignTop | AlignLeft';\n"
"  border: 5px dark  gray;\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        close = new QLabel(centralWidget);
        close->setObjectName(QStringLiteral("close"));
        close->setGeometry(QRect(0, 0, 16, 21));
        closeButton = new QPushButton(centralWidget);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        closeButton->setGeometry(QRect(0, 0, 16, 21));
        closeButton->setFont(font5);
        closeButton->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(255, 255, 255, 0);\n"
"}\n"
"\n"
""));
        infoText_12 = new QLabel(centralWidget);
        infoText_12->setObjectName(QStringLiteral("infoText_12"));
        infoText_12->setGeometry(QRect(10, 220, 211, 16));
        infoText_12->setFont(font4);
        infoText_12->setStyleSheet(QLatin1String("QLabel {\n"
"  qproperty-alignment: 'AlignTop | AlignLeft';\n"
"  border: 5px dark  gray;\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 260, 521, 41));
        QFont font6;
        font6.setPointSize(20);
        font6.setBold(true);
        font6.setWeight(75);
        label_3->setFont(font6);
        label_3->setStyleSheet(QLatin1String("QLabel {\n"
"	background-color: rgb(104, 104, 104);\n"
" qproperty-alignment: 'AlignCenter';\n"
"	color: rgb(255, 255, 255);\n"
"  border: 5px white;\n"
"}\n"
"\n"
"background-color :dark  gray;\n"
""));
        offButton = new QPushButton(centralWidget);
        offButton->setObjectName(QStringLiteral("offButton"));
        offButton->setGeometry(QRect(510, 260, 21, 41));
        offButton->setFont(font3);
        offButton->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(255, 255, 255, 0);\n"
"}\n"
"\n"
"\n"
""));
        onSwitch = new QLabel(centralWidget);
        onSwitch->setObjectName(QStringLiteral("onSwitch"));
        onSwitch->setGeometry(QRect(460, 270, 101, 51));
        onSwitch->setStyleSheet(QLatin1String("QLabel {\n"
" qproperty-alignment: 'AlignCenter';\n"
"}"));
        offSwitch = new QLabel(centralWidget);
        offSwitch->setObjectName(QStringLiteral("offSwitch"));
        offSwitch->setGeometry(QRect(460, 240, 101, 51));
        offSwitch->setStyleSheet(QLatin1String("QLabel {\n"
" qproperty-alignment: 'AlignCenter';\n"
"}"));
        offSwitch->setPixmap(QPixmap(QString::fromUtf8(":/Images/offswitch.png")));
        daysGlow = new QLabel(centralWidget);
        daysGlow->setObjectName(QStringLiteral("daysGlow"));
        daysGlow->setGeometry(QRect(430, 320, 91, 71));
        hoursGlow = new QLabel(centralWidget);
        hoursGlow->setObjectName(QStringLiteral("hoursGlow"));
        hoursGlow->setGeometry(QRect(430, 390, 91, 71));
        minutesGlow = new QLabel(centralWidget);
        minutesGlow->setObjectName(QStringLiteral("minutesGlow"));
        minutesGlow->setGeometry(QRect(430, 460, 91, 71));
        secondsGlow = new QLabel(centralWidget);
        secondsGlow->setObjectName(QStringLiteral("secondsGlow"));
        secondsGlow->setGeometry(QRect(430, 530, 91, 71));
        millisecondsGlow = new QLabel(centralWidget);
        millisecondsGlow->setObjectName(QStringLiteral("millisecondsGlow"));
        millisecondsGlow->setGeometry(QRect(430, 600, 91, 71));
        days = new QLabel(centralWidget);
        days->setObjectName(QStringLiteral("days"));
        days->setGeometry(QRect(430, 310, 101, 61));
        days->setFont(font2);
        days->setStyleSheet(QLatin1String("QLabel {\n"
"  qproperty-alignment: 'AlignCenter';\n"
"  border: 5px white;\n"
" background-color: rgb(48, 48, 48);\n"
"	color : rgb(255, 255, 255);\n"
"}\n"
"\n"
"background-color :dark  gray;\n"
"\n"
""));
        hours = new QLabel(centralWidget);
        hours->setObjectName(QStringLiteral("hours"));
        hours->setGeometry(QRect(430, 380, 101, 61));
        hours->setFont(font2);
        hours->setStyleSheet(QLatin1String("QLabel {\n"
"  qproperty-alignment: 'AlignCenter';\n"
"  border: 5px white;\n"
" background-color: rgb(48, 48, 48);\n"
"	color : rgb(255, 255, 255);\n"
"}\n"
"\n"
"background-color :dark  gray;\n"
"\n"
""));
        minutes = new QLabel(centralWidget);
        minutes->setObjectName(QStringLiteral("minutes"));
        minutes->setGeometry(QRect(430, 450, 101, 61));
        minutes->setFont(font2);
        minutes->setStyleSheet(QLatin1String("QLabel {\n"
"  qproperty-alignment: 'AlignCenter';\n"
"  border: 5px white;\n"
" background-color: rgb(48, 48, 48);\n"
"	color : rgb(255, 255, 255);\n"
"}\n"
"\n"
"background-color :dark  gray;\n"
"\n"
""));
        seconds = new QLabel(centralWidget);
        seconds->setObjectName(QStringLiteral("seconds"));
        seconds->setGeometry(QRect(430, 520, 101, 61));
        seconds->setFont(font2);
        seconds->setStyleSheet(QLatin1String("QLabel {\n"
"  qproperty-alignment: 'AlignCenter';\n"
"  border: 5px white;\n"
" background-color: rgb(48, 48, 48);\n"
"	color : rgb(255, 255, 255);\n"
"}\n"
"\n"
"background-color :dark  gray;\n"
"\n"
""));
        milliseconds = new QLabel(centralWidget);
        milliseconds->setObjectName(QStringLiteral("milliseconds"));
        milliseconds->setGeometry(QRect(430, 590, 101, 61));
        milliseconds->setFont(font2);
        milliseconds->setStyleSheet(QLatin1String("QLabel {\n"
"  qproperty-alignment: 'AlignCenter';\n"
"  border: 5px white;\n"
" background-color: rgb(48, 48, 48);\n"
"	color : rgb(255, 255, 255);\n"
"}\n"
"\n"
"background-color :dark  gray;\n"
"\n"
""));
        historyImage = new QLabel(centralWidget);
        historyImage->setObjectName(QStringLiteral("historyImage"));
        historyImage->setGeometry(QRect(10, 210, 31, 51));
        historyImage->setPixmap(QPixmap(QString::fromUtf8(":/Images/history(2).png")));
        history = new QPushButton(centralWidget);
        history->setObjectName(QStringLiteral("history"));
        history->setGeometry(QRect(10, 220, 31, 31));
        history->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(255, 255, 255, 0);\n"
"}\n"
"\n"
""));
        saveImage = new QLabel(centralWidget);
        saveImage->setObjectName(QStringLiteral("saveImage"));
        saveImage->setGeometry(QRect(490, 210, 51, 41));
        saveButton = new QPushButton(centralWidget);
        saveButton->setObjectName(QStringLiteral("saveButton"));
        saveButton->setGeometry(QRect(500, 210, 41, 41));
        saveButton->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(255, 255, 255, 0);\n"
"}\n"
"\n"
""));
        line = new QLabel(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(490, 210, 41, 41));
        line->setPixmap(QPixmap(QString::fromUtf8(":/Images/line(2).png")));
        history2 = new QLabel(centralWidget);
        history2->setObjectName(QStringLiteral("history2"));
        history2->setGeometry(QRect(16, 190, 501, 21));
        QFont font7;
        font7.setFamily(QStringLiteral("Bookman Old Style"));
        font7.setPointSize(12);
        font7.setBold(true);
        font7.setWeight(75);
        history2->setFont(font7);
        history2->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 5pxdark  gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #808080, stop: 1 #696969	);\n"
"}\n"
"\n"
"/* End Digits 0-9 Stylesheet */\n"
"\n"
"/* (Clear,+/-,%,. buttons) Unary Operations Buttons Stylesheet */\n"
"\n"
"QPushButton {\n"
"	background-color: rgb(71, 71, 71);\n"
"	  border: 5px dark  gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0#808080, stop: 1#696969	);\n"
"}\n"
"/* End Unary Operations Buttons Stylesheet */\n"
"\n"
"/* (Orange buttons) Operations Buttons Stylesheet */\n"
"QPushButton {\n"
"  background-color: rgb(71, 71, 71);\n"
"  color: gray; \n"
"  border: 5px dark  gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #808080, stop: 1 #696969	)"
                        ";\n"
"}\n"
"\n"
"/* (Label at top) Label Stylesheet */\n"
"\n"
"QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 5px dark  gray;\n"
"	color: rgb(221, 221, 221);\n"
"}\n"
"\n"
"background-color :dark  gray;\n"
""));
        MainWindow->setCentralWidget(centralWidget);
        line->raise();
        label_3->raise();
        button7->raise();
        button8->raise();
        button9->raise();
        multButton->raise();
        button6->raise();
        button4->raise();
        button5->raise();
        subButton->raise();
        button0->raise();
        button3->raise();
        button1->raise();
        pointButton->raise();
        plusminusButton->raise();
        devButton->raise();
        button2->raise();
        addButton->raise();
        clearButton->raise();
        equalButton->raise();
        daysLabel->raise();
        hoursLabel->raise();
        minutesLabel->raise();
        secondsLabel->raise();
        millisecondsLabel->raise();
        label->raise();
        infoText->raise();
        label_2->raise();
        infoButton->raise();
        infoText_2->raise();
        infoText_3->raise();
        infoText_4->raise();
        infoText_5->raise();
        infoText_6->raise();
        infoText_7->raise();
        infoText_10->raise();
        infoText_11->raise();
        close->raise();
        closeButton->raise();
        infoText_12->raise();
        onSwitch->raise();
        offSwitch->raise();
        convertButton->raise();
        offButton->raise();
        days->raise();
        hours->raise();
        minutes->raise();
        seconds->raise();
        milliseconds->raise();
        daysGlow->raise();
        hoursGlow->raise();
        minutesGlow->raise();
        secondsGlow->raise();
        minutesButton->raise();
        daysButton->raise();
        secondsButton->raise();
        hoursButton->raise();
        millisecondsGlow->raise();
        millisecondsButton->raise();
        historyImage->raise();
        history->raise();
        saveImage->raise();
        saveButton->raise();
        history2->raise();
        infoText_8->raise();
        infoText_9->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Time Table", nullptr));
        label->setText(QApplication::translate("MainWindow", "  0", nullptr));
        button7->setText(QApplication::translate("MainWindow", "7", nullptr));
        button8->setText(QApplication::translate("MainWindow", "8", nullptr));
        button9->setText(QApplication::translate("MainWindow", "9", nullptr));
        multButton->setText(QApplication::translate("MainWindow", "*", nullptr));
        daysButton->setText(QString());
        hoursButton->setText(QString());
        minutesButton->setText(QString());
        secondsButton->setText(QString());
        button6->setText(QApplication::translate("MainWindow", "6", nullptr));
        button4->setText(QApplication::translate("MainWindow", "4", nullptr));
        button5->setText(QApplication::translate("MainWindow", "5", nullptr));
        subButton->setText(QApplication::translate("MainWindow", "-", nullptr));
        button0->setText(QApplication::translate("MainWindow", "0", nullptr));
        button3->setText(QApplication::translate("MainWindow", "3", nullptr));
        button1->setText(QApplication::translate("MainWindow", "1", nullptr));
        pointButton->setText(QApplication::translate("MainWindow", ".", nullptr));
        plusminusButton->setText(QApplication::translate("MainWindow", "+/-", nullptr));
        devButton->setText(QApplication::translate("MainWindow", "/", nullptr));
        button2->setText(QApplication::translate("MainWindow", "2", nullptr));
        addButton->setText(QApplication::translate("MainWindow", "+", nullptr));
        clearButton->setText(QApplication::translate("MainWindow", "CE", nullptr));
        equalButton->setText(QApplication::translate("MainWindow", "=", nullptr));
        daysLabel->setText(QApplication::translate("MainWindow", "0 Days", nullptr));
        hoursLabel->setText(QApplication::translate("MainWindow", " 0 Hours", nullptr));
        minutesLabel->setText(QApplication::translate("MainWindow", "0 Minutes", nullptr));
        secondsLabel->setText(QApplication::translate("MainWindow", "0 Seconds", nullptr));
        millisecondsLabel->setText(QApplication::translate("MainWindow", "0 Milliseconds", nullptr));
        millisecondsButton->setText(QString());
        convertButton->setText(QString());
        infoText->setText(QString());
        infoButton->setText(QString());
        label_2->setText(QString());
        infoText_2->setText(QString());
        infoText_3->setText(QString());
        infoText_4->setText(QString());
        infoText_5->setText(QString());
        infoText_6->setText(QString());
        infoText_7->setText(QString());
        infoText_8->setText(QString());
        infoText_9->setText(QString());
        infoText_10->setText(QString());
        infoText_11->setText(QString());
        close->setText(QString());
        closeButton->setText(QString());
        infoText_12->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "DIRECT CONVERSION", nullptr));
        offButton->setText(QString());
        onSwitch->setText(QString());
        offSwitch->setText(QString());
        daysGlow->setText(QString());
        hoursGlow->setText(QString());
        minutesGlow->setText(QString());
        secondsGlow->setText(QString());
        millisecondsGlow->setText(QString());
        days->setText(QApplication::translate("MainWindow", "DAYS", nullptr));
        hours->setText(QApplication::translate("MainWindow", "HOURS", nullptr));
        minutes->setText(QApplication::translate("MainWindow", "MINUTES", nullptr));
        seconds->setText(QApplication::translate("MainWindow", "SECONDS", nullptr));
        milliseconds->setText(QApplication::translate("MainWindow", "MILLISECONDS", nullptr));
        historyImage->setText(QString());
        history->setText(QString());
        saveImage->setText(QString());
        saveButton->setText(QString());
        line->setText(QString());
        history2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
