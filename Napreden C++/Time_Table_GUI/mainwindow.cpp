#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QKeyEvent>
#include <QDebug>
#include <iostream>
#include <fstream>
#include <float.h>
#include <sstream>
#include <cmath>
#include <cstdint>
#include <iomanip>
#include <direct.h>
#include <string>
#include <string.h>
#include <experimental/filesystem>
#include "ui_mainwindow.h"

using namespace std;

#ifdef  USE_FLOAT128
    typedef __float128  long_double_t;
#else
    typedef long double long_double_t;
#endif

int digits(long_double_t x)
{
    stringstream sso;
    sso<< abs( x - (int)x );
    string num;
    sso>>num;
    int result = num.length()-2;
    return result;
}

int digits2(int x2)
{
    long long int digit = 1;
    while (x2 >= 0){
    digit *= 10;
    x2 -= 1;}
    return digit;
}

int digits3(int x3)
{
    int result2 = 0;
    while( x3 ){
        x3/=10;
        result2++; }
    return result2;
}

long_double_t decimal(long_double_t x)
{
  x -= (long long int) x;
  return x;
}

QString path(string image)
{
    QString name = qgetenv("USER");
    if (name.isEmpty()) name = qgetenv("USERNAME"); string slash = "\\";
    string pathTest = "C:" + string(slash) + "Users" + string(slash) + string(name.toStdString().c_str()) + string(slash) + "Documents" + string(slash) + "Documents" + string(slash) + "Time_Table_GUI" + string(slash) + string(image);
    QString pathGet = QString::fromStdString(pathTest);
    return pathGet;
}

namespace Ui
{
    class WidgetUnits;
}

long long int chs, chsMain, chs2, chs3, n, sum3, compare=100000000, maxNum, nnsMain, mcrsMain, mlsMain, sMain, mMain, hMain, dMain, yearEntered, yearDiferance, monthDiferance, dayDiferance, i = 0, month2, monthEntered,
        dayEntered, dayEnteredOriginal, DayInMonthCheck, chsInYear, chsInYear2, yearMain, monthMain, yearCompare, monthCompare, cmpr = 4, LeapYearCode = 0, MonthCode = 0, YearCode=0, CenturyCode=0, dayDiferanceOriginal;
            long_double_t firstNum, sum2=0.00, sum=0.00, num[1000], sumMLDirect, sumSDirect, sumMDirect, sumHDirect, sumDDirect, sumYDirect, sumLYDirect, sumMCRDirect, sumNNSDirect, sumOriginal=0.00, totalDiferanceLeapYear,
            totalDiferanceDay, totalDiferanceHour, totalDiferanceMinutes, totalDiferanceSeconds, totalDiferanceMilliseconds, totalDiferanceMicroseconds, totalDiferanceNanoseconds, totalDiferanceYear;
                QString checkerGet2, sS, sM, sH, sD, yC, mC, dC, sMs, sMcrs, sNns, sS2, sM2, sH2, sD2, sMs2, sMcrs2, sNns2, c, c2, c3, c4, c5, c6, c62, c7, c72, cMcrs, cNns, add, prefix, yearprefix, PrefixHere, DayInMonth,
                timePrefix, timePrefix2, presetInfo1 = "STANDARD", presetInfo2 = "ADVANCED", presetInfo3 = "SCIENTIFIC", presetGet, outputInfo1 = "NORMAL", outputInfo2 = "SCIENTIFIC", outputInfo3 = "AUTO", outputGet;
                    bool a, check, userEnteredSecondNumber = false, daysEnteredByUser = false;
                    string operationEntered;


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->button0, SIGNAL(released()),this,SLOT(number_push()));
    connect(ui->button1, SIGNAL(released()),this,SLOT(number_push()));
    connect(ui->button2, SIGNAL(released()),this,SLOT(number_push()));
    connect(ui->button3, SIGNAL(released()),this,SLOT(number_push()));
    connect(ui->button4, SIGNAL(released()),this,SLOT(number_push()));
    connect(ui->button5, SIGNAL(released()),this,SLOT(number_push()));
    connect(ui->button6, SIGNAL(released()),this,SLOT(number_push()));
    connect(ui->button7, SIGNAL(released()),this,SLOT(number_push()));
    connect(ui->button8, SIGNAL(released()),this,SLOT(number_push()));
    connect(ui->button9, SIGNAL(released()),this,SLOT(number_push()));

    connect(ui->plusminusButton, SIGNAL(released()),this,SLOT(unary_operation_pressed()));

    connect(ui->addButton, SIGNAL(released()),this,SLOT(binary_operation_pressed()));
    connect(ui->subButton, SIGNAL(released()),this,SLOT(binary_operation_pressed()));
    connect(ui->multButton, SIGNAL(released()),this,SLOT(binary_operation_pressed()));
    connect(ui->devButton, SIGNAL(released()),this,SLOT(binary_operation_pressed()));

    ui->addButton->setCheckable(true);
    ui->subButton->setCheckable(true);
    ui->multButton->setCheckable(true);
    ui->devButton->setCheckable(true);
    ui->equalButton->setCheckable(true);
    ui->daysButton->setCheckable(true);
    ui->hoursButton->setCheckable(true);
    ui->minutesButton->setCheckable(true);
    ui->secondsButton->setCheckable(true);
    ui->millisecondsButton->setCheckable(true);
    ui->convertButton->setCheckable(true);

    string resultGet, numberGet, number2Get, operationGet2;

    ifstream folderCheck("C:\\CalculatorData\\check.txt");
    if(folderCheck.is_open() == false){ mkdir("C:\\CalculatorData"); ofstream folder; folder.open("C:\\CalculatorData\\check.txt"); }

    ifstream result2("C:\\CalculatorData\\result.txt");
    while(getline(result2, resultGet));
    QString resultGetMain = QString::fromStdString(resultGet);

    ifstream numberGet1("C:\\CalculatorData\\number1.txt");
    while(getline(numberGet1, numberGet));
    QString numberGetMain = QString::fromStdString(numberGet);

    ifstream number2Get1("C:\\CalculatorData\\number2.txt");
    while(getline(number2Get1, number2Get));
    QString number2GetMain = QString::fromStdString(number2Get);

    ifstream operationGet("C:\\CalculatorData\\operation.txt");
    while(getline(operationGet, operationGet2));
    QString operationGetMain = QString::fromStdString(operationGet2);

    string convertInfoGet1 = "on", convertInfoGet2 = "off", convertInfoGetMain;
    ifstream convertInfoGet("C:\\CalculatorData\\convertInfo.txt");
    while(getline(convertInfoGet, convertInfoGetMain));
    if(convertInfoGetMain == convertInfoGet1 ){ ui->convertButton->animateClick(); }
    if(convertInfoGetMain == convertInfoGet2 ){ ui->offButton->animateClick(); }

    if(numberGet1.is_open() == true && number2Get1.is_open() == true && operationGet.is_open() == true){
    ui->history2->setText( " Previously Entered : " + numberGetMain + operationGetMain + number2GetMain + " = " + resultGetMain );}
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::number_push()
{
    QPixmap pixmap(" ");
    ui->close->setPixmap(pixmap);
    ui->infoText->setText( " ");
    ui->infoText_2->setText( " ");
    ui->infoText_3->setText( " ");
    ui->infoText_4->setText( " ");
    ui->infoText_5->setText( " ");
    ui->infoText_6->setText( " ");
    ui->infoText_7->setText( " ");
    ui->infoText_8->setText( " ");
    ui->infoText_9->setText( " ");
    ui->infoText_10->setText( " ");
    ui->infoText_11->setText( " ");
    ui->infoText_12->setText( " ");
    QPixmap pixmapMillisecond(" "); QPixmap pixmapDay(" "), pixmapMinute(" "), pixmapHour(" "), pixmapSecond(" ");
    ui->daysGlow->setPixmap(pixmapDay); ui->secondsGlow->setPixmap(pixmapSecond); ui->minutesGlow->setPixmap(pixmapMinute);
    ui->hoursGlow->setPixmap(pixmapHour); ui->millisecondsGlow->setPixmap(pixmapMillisecond); ui->millisecondsGlow->setPixmap(pixmapMillisecond); QPixmap pixmapSave(" ");
    ui->saveImage->setPixmap(pixmapSave); string image1 = "line(2).png"; QPixmap pixmapLine(path(image1)); ui->line->setPixmap(pixmapLine);

    if((ui->secondsButton->isChecked()) || (ui->millisecondsButton->isChecked()) || (ui->minutesButton->isChecked()) ||
      (ui->hoursButton->isChecked()) || (ui->daysButton->isChecked()) ){
        ui->secondsButton->setChecked(false);  ui->millisecondsButton->setChecked(false);  ui->minutesButton->setChecked(false);
        ui->hoursButton->setChecked(false);  ui->daysButton->setChecked(false);
        ui->label->setText("0");
        ui->daysLabel->setText("0 Days");
        ui->hoursLabel->setText("0 Hours");
        ui->minutesLabel->setText("0 Minutes");
        ui->secondsLabel->setText("0 Seconds");
        ui->millisecondsLabel->setText("0 Milliseconds");}

    QPushButton * button = (QPushButton*)sender();

    double labelNumber; QString newLabel;

    if(ui->equalButton->isChecked() ){ userEnteredSecondNumber = false; ui->label->setText("0"); ui->equalButton->setChecked(false); }

    if((ui->addButton->isChecked() || ui->subButton->isChecked() ||
       ui->multButton->isChecked() || ui->devButton->isChecked())
       && (!userEnteredSecondNumber))
    {
        labelNumber = button->text().toDouble();
        userEnteredSecondNumber = true;
    }

    else
    {
         if (ui->label->text().contains('.') && button->text() == "0")
         {
             newLabel = (ui->label->text() + button->text());
         }
         else
         {
            labelNumber = (ui->label->text() + button->text()).toDouble();
            newLabel = QString::number(labelNumber,'g',15);
         }
    }

    if(ui->addButton->isChecked() || ui->subButton->isChecked() || ui->multButton->isChecked() || ui->devButton->isChecked() )
    {
        long_double_t numberEntered2 = newLabel.toDouble();
        ofstream number2("C:\\CalculatorData\\number2.txt");
        number2<<numberEntered2;
    }
        else
        {
            long_double_t numberEntered1 = newLabel.toDouble();
            ofstream number1("C:\\CalculatorData\\number1.txt");
            number1<<numberEntered1;
        }

    ui->label->setText(newLabel);
}

void MainWindow::on_pointButton_released()
{
    QPixmap pixmap(" ");
    ui->close->setPixmap(pixmap);
    ui->infoText->setText( " ");
    ui->infoText_2->setText( " ");
    ui->infoText_3->setText( " ");
    ui->infoText_4->setText( " ");
    ui->infoText_5->setText( " ");
    ui->infoText_6->setText( " ");
    ui->infoText_7->setText( " ");
    ui->infoText_8->setText( " ");
    ui->infoText_9->setText( " ");
    ui->infoText_10->setText( " ");
    ui->infoText_11->setText( " ");
    ui->infoText_12->setText( " ");
    ui->label->setText(ui->label->text() + ".");
}

void MainWindow::unary_operation_pressed()
{    QPixmap pixmap(" ");
     ui->close->setPixmap(pixmap);
     ui->infoText->setText( " ");
     ui->infoText_2->setText( " ");
     ui->infoText_3->setText( " ");
     ui->infoText_4->setText( " ");
     ui->infoText_5->setText( " ");
     ui->infoText_6->setText( " ");
     ui->infoText_7->setText( " ");
     ui->infoText_8->setText( " ");
     ui->infoText_9->setText( " ");
     ui->infoText_10->setText( " ");
     ui->infoText_11->setText( " ");
     ui->infoText_12->setText( " ");
    QPushButton * button = (QPushButton*) sender();
    double labelNumber; QString newLabel;

    if(button->text() == "+/-")
    {
        labelNumber = ui->label->text().toDouble();
        labelNumber = labelNumber * -1;
        newLabel = QString::number(labelNumber, 'g',15);
        ui->label->setText(newLabel);
    }
}

void MainWindow::on_clearButton_released()
{
    ui->addButton->setChecked(false);
    ui->subButton->setChecked(false);
    ui->multButton->setChecked(false);
    ui->devButton->setChecked(false);
    ui->equalButton->setChecked(false);

    userEnteredSecondNumber = false;

    ui->label->setText("0");
    ui->daysLabel->setText("0 Days");
    ui->hoursLabel->setText("0 Hours");
    ui->minutesLabel->setText("0 Minutes");
    ui->secondsLabel->setText("0 Seconds");
    ui->millisecondsLabel->setText("0 Milliseconds");

    string resultGet, numberGet, number2Get, operationGet2;

    ifstream result2("C:\\CalculatorData\\result.txt");
    while(getline(result2, resultGet));
    QString resultGetMain = QString::fromStdString(resultGet);

    ifstream numberGet1("C:\\CalculatorData\\number1.txt");
    while(getline(numberGet1, numberGet));
    QString numberGetMain = QString::fromStdString(numberGet);

    ifstream number2Get1("C:\\CalculatorData\\number2.txt");
    while(getline(number2Get1, number2Get));
    QString number2GetMain = QString::fromStdString(number2Get);

    ifstream operationGet("C:\\CalculatorData\\operation.txt");
    while(getline(operationGet, operationGet2));
    QString operationGetMain = QString::fromStdString(operationGet2);

    ui->history2->setText( " Previously Entered : " + numberGetMain + operationGetMain + number2GetMain + " = " + resultGetMain );

    QPixmap pixmapMillisecond(" "); QPixmap pixmapDay(" "), pixmapMinute(" "), pixmapHour(" "), pixmapSecond(" ");
    ui->daysGlow->setPixmap(pixmapDay); ui->secondsGlow->setPixmap(pixmapSecond); ui->minutesGlow->setPixmap(pixmapMinute);
    ui->hoursGlow->setPixmap(pixmapHour); ui->millisecondsGlow->setPixmap(pixmapMillisecond); ui->millisecondsGlow->setPixmap(pixmapMillisecond); QPixmap pixmapSave(" ");
    ui->saveImage->setPixmap(pixmapSave); string image1 = "line(2).png"; QPixmap pixmapLine(path(image1)); ui->line->setPixmap(pixmapLine);
}

void MainWindow::on_daysButton_released()
{
    ui->daysButton->setChecked(true); string glow = "glow.png"; string save = "save.png"; QPixmap pixmapDay(path(glow));
    QPixmap pixmapHour(" "), pixmapSecond(" "), pixmapMinute(" "), pixmapMillisecond(" ");
    ui->daysGlow->setPixmap(pixmapDay); ui->secondsGlow->setPixmap(pixmapSecond); ui->minutesGlow->setPixmap(pixmapMinute);
    ui->hoursGlow->setPixmap(pixmapHour); ui->millisecondsGlow->setPixmap(pixmapMillisecond); QPixmap pixmapSave(path(save));
    ui->saveImage->setPixmap(pixmapSave); QPixmap pixmapLine(" "); ui->line->setPixmap(pixmapLine); QPixmap pixmap(" "); ui->close->setPixmap(pixmap);
    ui->infoText->setText( " "); ui->infoText_2->setText( " "); ui->infoText_3->setText( " "); ui->infoText_4->setText( " ");
    ui->infoText_5->setText( " "); ui->infoText_6->setText( " "); ui->infoText_7->setText( " "); ui->infoText_8->setText( " ");
    ui->infoText_9->setText( " "); ui->infoText_10->setText( " "); ui->infoText_11->setText( " "); ui->infoText_12->setText( " ");
    ui->hoursButton->setChecked(false); ui->minutesButton->setChecked(false); ui->secondsButton->setChecked(false); ui->millisecondsButton->setChecked(false);

    QString newLabel;
    long_double_t labelNumber, labelNumberdays;

    ui->equalButton->setChecked(true);
    QString newLabel2;
    long_double_t labelNumber1, secondNum, labelNumber2;
    int newDaysLabel;
    secondNum = ui->label->text().toDouble();

    if(ui->addButton->isChecked())
    {
      labelNumber = firstNum + secondNum;
      newLabel = QString::number(labelNumber, 'g', 15);
      ui->label->setText(newLabel);
      ui->addButton->setChecked(false);
      operationEntered = " + ";
    }

        else if(ui->subButton->isChecked())
        {
            labelNumber = firstNum - secondNum;
            newLabel = QString::number(labelNumber, 'g', 15);
            ui->label->setText(newLabel);
            ui->subButton->setChecked(false);
            operationEntered = " - ";
        }

            else if(ui->multButton->isChecked())
            {
                labelNumber = firstNum * secondNum;
                newLabel = QString::number(labelNumber, 'g', 15);
                ui->label->setText(newLabel);
                ui->multButton->setChecked(false);
                operationEntered = " * ";
            }

                else if(ui->devButton->isChecked())
                {
                    labelNumber = firstNum / secondNum;
                    newLabel = QString::number(labelNumber, 'g', 15);
                    ui->label->setText(newLabel);
                    ui->devButton->setChecked(false);
                    ui->equalButton->setChecked(true);
                    operationEntered = " / ";
                }

    if(ui->convertButton->isChecked() == true)
    { labelNumber = ui->label->text().toDouble();
        sum = ui->label->text().toDouble();
               sumYDirect = sum / 365.25; sumLYDirect = sum / 366; sumDDirect = sum;
                    sumHDirect = sum * 24; sumMDirect = sum * 1440; sumSDirect = sum * 86400;
                        sumMLDirect = sum * 86400000; sumMCRDirect = sum * 86400000000; sumNNSDirect = sum * 86400000000000;
                        QString labelNumberDaysConverted = QString::number(sumDDirect, 'g', 15);
                        QString labelNumberHoursConverted = QString::number(sumHDirect, 'g', 15);
                        QString labelNumberMinutesConverted = QString::number(sumMDirect, 'g', 15);
                        QString labelNumberSecondsConverted = QString::number(sumSDirect, 'g', 15);
                        QString labelNumberMillisecodsConverted = QString::number(sumMLDirect, 'g', 15);
                        if( sumDDirect != 1 ){ ui->daysLabel->setText(labelNumberDaysConverted + " Days");}
                        if( sumDDirect == 1 ){ ui->daysLabel->setText(labelNumberDaysConverted + " Day"); }
                        if( sumHDirect  != 1 ){ ui->hoursLabel->setText(labelNumberHoursConverted + " Hours"); }
                        if( sumHDirect  == 1 ){ ui->hoursLabel->setText(labelNumberHoursConverted + " Hour"); }
                        if( sumMDirect != 1 ){ ui->minutesLabel->setText(labelNumberMinutesConverted + " Minutes"); }
                        if( sumMDirect == 1 ){ ui->minutesLabel->setText(labelNumberMinutesConverted + " Minute"); }
                        if( sumSDirect != 1 ){ ui->secondsLabel->setText(labelNumberSecondsConverted + " Seconds"); }
                        if( sumSDirect == 1 ){ ui->secondsLabel->setText(labelNumberSecondsConverted + " Second"); }
                        if( sumMLDirect != 1 ){ ui->millisecondsLabel->setText(labelNumberMillisecodsConverted + " Milliseconds");}
                        if( sumMLDirect == 1 ){ ui->millisecondsLabel->setText(labelNumberMillisecodsConverted + " Millisecond");}
    }

    if(ui->convertButton->isChecked() == false)
    {
             labelNumber = ui->label->text().toDouble();
    dMain = labelNumber; long_double_t hours = decimal(labelNumber) * 24; hMain = hours;

        long_double_t minutes = decimal(hours) * 60; mMain = minutes;

            long_double_t seconds = decimal(minutes) * 60; sMain = seconds;

                long_double_t milliseconds = decimal(seconds) * 1000; mlsMain = milliseconds;

                    long_double_t microseconds = decimal(milliseconds) * 1000; mcrsMain = microseconds;

                        long_double_t nanoseconds = decimal(microseconds) * 1000; nnsMain = nanoseconds;

                        QString labelNumberDays = QString::number(dMain, 'g', 15);
                        QString labelNumberHours = QString::number(hMain, 'g', 15);
                        QString labelNumberMinutes = QString::number(mMain, 'g', 15);
                        QString labelNumberSeconds = QString::number(sMain, 'g', 15);
                        QString labelNumberMillisecods = QString::number(mlsMain, 'g', 15);
                        if( dMain != 1 ){ ui->daysLabel->setText(labelNumberDays + " Days");}
                        if( dMain == 1 ){ ui->daysLabel->setText(labelNumberDays + " Day"); }
                        if( hMain != 1 ){ ui->hoursLabel->setText(labelNumberHours + " Hours"); }
                        if( hMain == 1 ){ ui->hoursLabel->setText(labelNumberHours + " Hour"); }
                        if( mMain != 1 ){ ui->minutesLabel->setText(labelNumberMinutes + " Minutes"); }
                        if( mMain == 1 ){ ui->minutesLabel->setText(labelNumberMinutes + " Minute"); }
                        if( sMain != 1 ){ ui->secondsLabel->setText(labelNumberSeconds + " Seconds"); }
                        if( sMain == 1 ){ ui->secondsLabel->setText(labelNumberSeconds + " Second"); }
                        if( mlsMain != 1 ){ ui->millisecondsLabel->setText(labelNumberMillisecods + " Milliseconds");}
                        if( mlsMain == 1 ){ ui->millisecondsLabel->setText(labelNumberMillisecods + " Millisecond");}
    }
}

void MainWindow::on_hoursButton_released()
{
    ui->hoursButton->setChecked(true); string glow = "glow.png"; string save = "save.png"; QPixmap pixmapHour(path(glow));
    QPixmap pixmapDay(" "), pixmapSecond(" "), pixmapMinute(" "), pixmapMillisecond(" ");
    ui->daysGlow->setPixmap(pixmapDay); ui->secondsGlow->setPixmap(pixmapSecond); ui->minutesGlow->setPixmap(pixmapMinute);
    ui->hoursGlow->setPixmap(pixmapHour); ui->millisecondsGlow->setPixmap(pixmapMillisecond); QPixmap pixmapSave(path(save));
    ui->saveImage->setPixmap(pixmapSave); QPixmap pixmapLine(" "); ui->line->setPixmap(pixmapLine); QPixmap pixmap(" "); ui->close->setPixmap(pixmap);
    ui->infoText->setText( " "); ui->infoText_2->setText( " "); ui->infoText_3->setText( " "); ui->infoText_4->setText( " ");
    ui->infoText_5->setText( " "); ui->infoText_6->setText( " "); ui->infoText_7->setText( " "); ui->infoText_8->setText( " ");
    ui->infoText_9->setText( " "); ui->infoText_10->setText( " "); ui->infoText_11->setText( " "); ui->infoText_12->setText( " ");
    ui->daysButton->setChecked(false); ui->minutesButton->setChecked(false); ui->secondsButton->setChecked(false); ui->millisecondsButton->setChecked(false);

    QString newLabel;
    ui->hoursButton->setChecked(true);
    long_double_t labelNumber, labelNumberhours;

    ui->equalButton->setChecked(true);
    QString newLabel2;
    long_double_t labelNumber1, secondNum, labelNumber2;
    int newDaysLabel;
    secondNum = ui->label->text().toDouble();

    if(ui->addButton->isChecked())
    {
      labelNumber = firstNum + secondNum;
      newLabel = QString::number(labelNumber, 'g', 15);
      ui->label->setText(newLabel);
      ui->addButton->setChecked(false);
      operationEntered = " + ";
    }

        else if(ui->subButton->isChecked())
        {
            labelNumber = firstNum - secondNum;
            newLabel = QString::number(labelNumber, 'g', 15);
            ui->label->setText(newLabel);
            ui->subButton->setChecked(false);
            operationEntered = " - ";
        }

            else if(ui->multButton->isChecked())
            {
                labelNumber = firstNum * secondNum;
                newLabel = QString::number(labelNumber, 'g', 15);
                ui->label->setText(newLabel);
                ui->multButton->setChecked(false);
                operationEntered = " * ";
            }

                else if(ui->devButton->isChecked())
                {
                    labelNumber = firstNum / secondNum;
                    newLabel = QString::number(labelNumber, 'g', 15);
                    ui->label->setText(newLabel);
                    ui->devButton->setChecked(false);
                    ui->equalButton->setChecked(true);
                    operationEntered = " / ";
                }

    userEnteredSecondNumber = false;

    if(ui->convertButton->isChecked() == true)
    { labelNumber = ui->label->text().toDouble();
       sum = ui->label->text().toDouble();

        sumYDirect = sum / 8766; sumLYDirect = sum / 8784; sumDDirect = sum / 24;
            sumHDirect = sum; sumMDirect = sum * 60; sumSDirect = sum * 3600;
                sumMLDirect = sum * 3600000; sumMCRDirect = sum * 3600000000; sumNNSDirect = sum * 3600000000000;
                QString labelNumberDaysConverted = QString::number(sumDDirect, 'g', 15);
                QString labelNumberHoursConverted = QString::number(sumHDirect, 'g', 15);
                QString labelNumberMinutesConverted = QString::number(sumMDirect, 'g', 15);
                QString labelNumberSecondsConverted = QString::number(sumSDirect, 'g', 15);
                QString labelNumberMillisecodsConverted = QString::number(sumMLDirect, 'g', 15);
                if( sumDDirect != 1 ){ ui->daysLabel->setText(labelNumberDaysConverted + " Days");}
                if( sumDDirect == 1 ){ ui->daysLabel->setText(labelNumberDaysConverted + " Day"); }
                if( sumHDirect  != 1 ){ ui->hoursLabel->setText(labelNumberHoursConverted + " Hours"); }
                if( sumHDirect  == 1 ){ ui->hoursLabel->setText(labelNumberHoursConverted + " Hour"); }
                if( sumMDirect != 1 ){ ui->minutesLabel->setText(labelNumberMinutesConverted + " Minutes"); }
                if( sumMDirect == 1 ){ ui->minutesLabel->setText(labelNumberMinutesConverted + " Minute"); }
                if( sumSDirect != 1 ){ ui->secondsLabel->setText(labelNumberSecondsConverted + " Seconds"); }
                if( sumSDirect == 1 ){ ui->secondsLabel->setText(labelNumberSecondsConverted + " Second"); }
                if( sumMLDirect != 1 ){ ui->millisecondsLabel->setText(labelNumberMillisecodsConverted + " Milliseconds");}
                if( sumMLDirect == 1 ){ ui->millisecondsLabel->setText(labelNumberMillisecodsConverted + " Millisecond");}
    }

    if(ui->convertButton->isChecked() == false){
    sumOriginal = ui->label->text().toDouble();
    labelNumber = ui->label->text().toDouble() / 24;
    dMain = labelNumber; long_double_t hours = decimal(labelNumber) * 24; hMain = hours;

    long_double_t minutes = decimal(hours) * 60; mMain = minutes;

        long_double_t seconds = decimal(minutes) * 60; sMain = seconds;

            long_double_t milliseconds = decimal(seconds) * 1000; mlsMain = milliseconds;

                long_double_t microseconds = decimal(milliseconds) * 1000; mcrsMain = microseconds;

                    long_double_t nanoseconds = decimal(microseconds) * 1000; nnsMain = nanoseconds;

                        QString labelNumberDays = QString::number(dMain, 'g', 15);
                        QString labelNumberHours = QString::number(hMain, 'g', 15);
                        QString labelNumberMinutes = QString::number(mMain, 'g', 15);
                        QString labelNumberSeconds = QString::number(sMain, 'g', 15);
                        QString labelNumberMillisecods = QString::number(mlsMain, 'g', 15);
                        if( dMain != 1 ){ ui->daysLabel->setText(labelNumberDays + " Days");}
                        if( dMain == 1 ){ ui->daysLabel->setText(labelNumberDays + " Day"); }
                        if( hMain != 1 ){ ui->hoursLabel->setText(labelNumberHours + " Hours"); }
                        if( hMain == 1 ){ ui->hoursLabel->setText(labelNumberHours + " Hour"); }
                        if( mMain != 1 ){ ui->minutesLabel->setText(labelNumberMinutes + " Minutes"); }
                        if( mMain == 1 ){ ui->minutesLabel->setText(labelNumberMinutes + " Minute"); }
                        if( sMain != 1 ){ ui->secondsLabel->setText(labelNumberSeconds + " Seconds"); }
                        if( sMain == 1 ){ ui->secondsLabel->setText(labelNumberSeconds + " Second"); }
                        if( mlsMain != 1 ){ ui->millisecondsLabel->setText(labelNumberMillisecods + " Milliseconds");}
                        if( mlsMain == 1 ){ ui->millisecondsLabel->setText(labelNumberMillisecods + " Millisecond");}}

}

void MainWindow::on_minutesButton_released()
{
    ui->minutesButton->setChecked(true); string glow = "glow.png"; string save = "save.png"; QPixmap pixmapMinute(path(glow));
    QPixmap pixmapDay(" "), pixmapSecond(" "), pixmapHour(" "), pixmapMillisecond(" ");
    ui->daysGlow->setPixmap(pixmapDay); ui->secondsGlow->setPixmap(pixmapSecond); ui->minutesGlow->setPixmap(pixmapMinute);
    ui->hoursGlow->setPixmap(pixmapHour); ui->millisecondsGlow->setPixmap(pixmapMillisecond); QPixmap pixmapSave(path(save));
    ui->saveImage->setPixmap(pixmapSave); QPixmap pixmapLine(" "); ui->line->setPixmap(pixmapLine); QPixmap pixmap(" "); ui->close->setPixmap(pixmap);
    ui->infoText->setText( " "); ui->infoText_2->setText( " "); ui->infoText_3->setText( " "); ui->infoText_4->setText( " ");
    ui->infoText_5->setText( " "); ui->infoText_6->setText( " "); ui->infoText_7->setText( " "); ui->infoText_8->setText( " ");
    ui->infoText_9->setText( " "); ui->infoText_10->setText( " "); ui->infoText_11->setText( " "); ui->infoText_12->setText( " ");
    ui->daysButton->setChecked(false); ui->hoursButton->setChecked(false); ui->secondsButton->setChecked(false); ui->millisecondsButton->setChecked(false);

   QString newLabel;
   ui->minutesButton->setChecked(true);
   long_double_t labelNumber, labelNumberminutes;

   ui->equalButton->setChecked(true);
   QString newLabel2;
   long_double_t labelNumber1, secondNum, labelNumber2;
   int newDaysLabel;
   secondNum = ui->label->text().toDouble();

   if(ui->addButton->isChecked())
   {
     labelNumber = firstNum + secondNum;
     newLabel = QString::number(labelNumber, 'g', 15);
     ui->label->setText(newLabel);
     ui->addButton->setChecked(false);
     operationEntered = " + ";
   }

       else if(ui->subButton->isChecked())
       {
           labelNumber = firstNum - secondNum;
           newLabel = QString::number(labelNumber, 'g', 15);
           ui->label->setText(newLabel);
           ui->subButton->setChecked(false);
           operationEntered = " - ";
       }

           else if(ui->multButton->isChecked())
           {
               labelNumber = firstNum * secondNum;
               newLabel = QString::number(labelNumber, 'g', 15);
               ui->label->setText(newLabel);
               ui->multButton->setChecked(false);
               operationEntered = " * ";
           }

               else if(ui->devButton->isChecked())
               {
                   labelNumber = firstNum / secondNum;
                   newLabel = QString::number(labelNumber, 'g', 15);
                   ui->label->setText(newLabel);
                   ui->devButton->setChecked(false);
                   ui->equalButton->setChecked(true);
                   operationEntered = " / ";
               }

   userEnteredSecondNumber = false;

   if(ui->convertButton->isChecked() == true)
   {
       labelNumber = ui->label->text().toDouble();
       sum = ui->label->text().toDouble();
       sumYDirect = sum / 525960; sumLYDirect = sum / 527040; sumDDirect = sum / 1440;
           sumHDirect = sum / 60; sumMDirect = sum; sumSDirect = sum * 60;
               sumMLDirect = sum * 60000; sumMCRDirect = sum * 60000000; sumNNSDirect = sum * 60000000000;
               QString labelNumberDaysConverted = QString::number(sumDDirect, 'g', 15);
               QString labelNumberHoursConverted = QString::number(sumHDirect, 'g', 15);
               QString labelNumberMinutesConverted = QString::number(sumMDirect, 'g', 15);
               QString labelNumberSecondsConverted = QString::number(sumSDirect, 'g', 15);
               QString labelNumberMillisecodsConverted = QString::number(sumMLDirect, 'g', 15);
               if( sumDDirect != 1 ){ ui->daysLabel->setText(labelNumberDaysConverted + " Days");}
               if( sumDDirect == 1 ){ ui->daysLabel->setText(labelNumberDaysConverted + " Day"); }
               if( sumHDirect  != 1 ){ ui->hoursLabel->setText(labelNumberHoursConverted + " Hours"); }
               if( sumHDirect  == 1 ){ ui->hoursLabel->setText(labelNumberHoursConverted + " Hour"); }
               if( sumMDirect != 1 ){ ui->minutesLabel->setText(labelNumberMinutesConverted + " Minutes"); }
               if( sumMDirect == 1 ){ ui->minutesLabel->setText(labelNumberMinutesConverted + " Minute"); }
               if( sumSDirect != 1 ){ ui->secondsLabel->setText(labelNumberSecondsConverted + " Seconds"); }
               if( sumSDirect == 1 ){ ui->secondsLabel->setText(labelNumberSecondsConverted + " Second"); }
               if( sumMLDirect != 1 ){ ui->millisecondsLabel->setText(labelNumberMillisecodsConverted + " Milliseconds");}
               if( sumMLDirect == 1 ){ ui->millisecondsLabel->setText(labelNumberMillisecodsConverted + " Millisecond");}
   }

   if(ui->convertButton->isChecked() == false){
   sumOriginal = ui->label->text().toDouble();
   labelNumber = ui->label->text().toDouble() / 1440;
   dMain = labelNumber; long_double_t hours = decimal(labelNumber) * 24; hMain = hours;

   long_double_t minutes = decimal(hours) * 60; mMain = minutes;

       long_double_t seconds = decimal(minutes) * 60; sMain = seconds;

           long_double_t milliseconds = decimal(seconds) * 1000; mlsMain = milliseconds;

               long_double_t microseconds = decimal(milliseconds) * 1000; mcrsMain = microseconds;

                   long_double_t nanoseconds = decimal(microseconds) * 1000; nnsMain = nanoseconds;

                       if (sumOriginal == ceil(minutes)){
                           mMain = ceil(minutes); sMain = 0; mlsMain = 0;}

                       QString labelNumberDays = QString::number(dMain, 'g', 15);
                       QString labelNumberHours = QString::number(hMain, 'g', 15);
                       QString labelNumberMinutes = QString::number(mMain, 'g', 15);
                       QString labelNumberSeconds = QString::number(sMain, 'g', 15);
                       QString labelNumberMillisecods = QString::number(mlsMain, 'g', 15);
                       if( dMain != 1 ){ ui->daysLabel->setText(labelNumberDays + " Days");}
                       if( dMain == 1 ){ ui->daysLabel->setText(labelNumberDays + " Day"); }
                       if( hMain != 1 ){ ui->hoursLabel->setText(labelNumberHours + " Hours"); }
                       if( hMain == 1 ){ ui->hoursLabel->setText(labelNumberHours + " Hour"); }
                       if( mMain != 1 ){ ui->minutesLabel->setText(labelNumberMinutes + " Minutes"); }
                       if( mMain == 1 ){ ui->minutesLabel->setText(labelNumberMinutes + " Minute"); }
                       if( sMain != 1 ){ ui->secondsLabel->setText(labelNumberSeconds + " Seconds"); }
                       if( sMain == 1 ){ ui->secondsLabel->setText(labelNumberSeconds + " Second"); }
                       if( mlsMain != 1 ){ ui->millisecondsLabel->setText(labelNumberMillisecods + " Milliseconds");}
                       if( mlsMain == 1 ){ ui->millisecondsLabel->setText(labelNumberMillisecods + " Millisecond");}}
}

void MainWindow::on_secondsButton_released()
{
    ui->secondsButton->setChecked(true); string glow = "glow.png"; string save = "save.png"; QPixmap pixmapSecond(path(glow));
    QPixmap pixmapDay(" "), pixmapMinute(" "), pixmapHour(" "), pixmapMillisecond(" ");
    ui->daysGlow->setPixmap(pixmapDay); ui->secondsGlow->setPixmap(pixmapSecond); ui->minutesGlow->setPixmap(pixmapMinute);
    ui->hoursGlow->setPixmap(pixmapHour); ui->millisecondsGlow->setPixmap(pixmapMillisecond); QPixmap pixmapSave(path(save));
    ui->saveImage->setPixmap(pixmapSave); QPixmap pixmapLine(" "); ui->line->setPixmap(pixmapLine); QPixmap pixmap(" "); ui->close->setPixmap(pixmap);
    ui->infoText->setText( " "); ui->infoText_2->setText( " "); ui->infoText_3->setText( " "); ui->infoText_4->setText( " ");
    ui->infoText_5->setText( " "); ui->infoText_6->setText( " "); ui->infoText_7->setText( " "); ui->infoText_8->setText( " ");
    ui->infoText_9->setText( " "); ui->infoText_10->setText( " "); ui->infoText_11->setText( " "); ui->infoText_12->setText( " ");
    ui->daysButton->setChecked(false); ui->hoursButton->setChecked(false); ui->minutesButton->setChecked(false); ui->millisecondsButton->setChecked(false);

   QString newLabel;
   ui->secondsButton->setChecked(true);
   long_double_t labelNumber, labelNumberseconds;

   ui->equalButton->setChecked(true);
   QString newLabel2;
   long_double_t labelNumber1, secondNum, labelNumber2;
   int newDaysLabel;
   secondNum = ui->label->text().toDouble();

   if(ui->addButton->isChecked())
   {
     labelNumber = firstNum + secondNum;
     newLabel = QString::number(labelNumber, 'g', 15);
     ui->label->setText(newLabel);
     ui->addButton->setChecked(false);
     operationEntered = " + ";
   }

       else if(ui->subButton->isChecked())
       {
           labelNumber = firstNum - secondNum;
           newLabel = QString::number(labelNumber, 'g', 15);
           ui->label->setText(newLabel);
           ui->subButton->setChecked(false);
           operationEntered = " - ";
       }

           else if(ui->multButton->isChecked())
           {
               labelNumber = firstNum * secondNum;
               newLabel = QString::number(labelNumber, 'g', 15);
               ui->label->setText(newLabel);
               ui->multButton->setChecked(false);
               operationEntered = " * ";
           }

               else if(ui->devButton->isChecked())
               {
                   labelNumber = firstNum / secondNum;
                   newLabel = QString::number(labelNumber, 'g', 15);
                   ui->label->setText(newLabel);
                   ui->devButton->setChecked(false);
                   ui->equalButton->setChecked(true);
                   operationEntered = " / ";
               }

   userEnteredSecondNumber = false;

   if(ui->convertButton->isChecked() == true)
   { labelNumber = ui->label->text().toDouble();
      sum = ui->label->text().toDouble();
      sumYDirect = sum / 31557600; sumLYDirect = sum / 31622400; sumDDirect = sum / 86400;
              sumHDirect = sum / 3600; sumMDirect = sum / 60; sumSDirect = sum;
                  sumMLDirect = sum * 1000; sumMCRDirect = sum * 1000000; sumNNSDirect = sum * 1000000000;
                  QString labelNumberDaysConverted = QString::number(sumDDirect, 'g', 15);
                  QString labelNumberHoursConverted = QString::number(sumHDirect, 'g', 15);
                  QString labelNumberMinutesConverted = QString::number(sumMDirect, 'g', 15);
                  QString labelNumberSecondsConverted = QString::number(sumSDirect, 'g', 15);
                  QString labelNumberMillisecodsConverted = QString::number(sumMLDirect, 'g', 15);
                  if( sumDDirect != 1 ){ ui->daysLabel->setText(labelNumberDaysConverted + " Days");}
                  if( sumDDirect == 1 ){ ui->daysLabel->setText(labelNumberDaysConverted + " Day"); }
                  if( sumHDirect  != 1 ){ ui->hoursLabel->setText(labelNumberHoursConverted + " Hours"); }
                  if( sumHDirect  == 1 ){ ui->hoursLabel->setText(labelNumberHoursConverted + " Hour"); }
                  if( sumMDirect != 1 ){ ui->minutesLabel->setText(labelNumberMinutesConverted + " Minutes"); }
                  if( sumMDirect == 1 ){ ui->minutesLabel->setText(labelNumberMinutesConverted + " Minute"); }
                  if( sumSDirect != 1 ){ ui->secondsLabel->setText(labelNumberSecondsConverted + " Seconds"); }
                  if( sumSDirect == 1 ){ ui->secondsLabel->setText(labelNumberSecondsConverted + " Second"); }
                  if( sumMLDirect != 1 ){ ui->millisecondsLabel->setText(labelNumberMillisecodsConverted + " Milliseconds");}
                  if( sumMLDirect == 1 ){ ui->millisecondsLabel->setText(labelNumberMillisecodsConverted + " Millisecond");}
   }

   if(ui->convertButton->isChecked() == false){
   sumOriginal = ui->label->text().toDouble();
   labelNumber = ui->label->text().toDouble() / 86400;
   dMain = labelNumber; long_double_t hours = decimal(labelNumber) * 24; hMain = hours;

   long_double_t minutes = decimal(hours) * 60; mMain = minutes;

       long_double_t seconds = decimal(minutes) * 60; sMain = seconds;

           long_double_t milliseconds = decimal(seconds) * 1000; mlsMain = milliseconds;

               long_double_t microseconds = decimal(milliseconds) * 1000; mcrsMain = microseconds;

                   long_double_t nanoseconds = decimal(microseconds) * 1000; nnsMain = nanoseconds;

                       if (sumOriginal == ceil(seconds)){
                           sMain = ceil(seconds); mlsMain = 0;}

                       QString labelNumberDays = QString::number(dMain, 'g', 15);
                       QString labelNumberHours = QString::number(hMain, 'g', 15);
                       QString labelNumberMinutes = QString::number(mMain, 'g', 15);
                       QString labelNumberSeconds = QString::number(sMain, 'g', 15);
                       QString labelNumberMillisecods = QString::number(mlsMain, 'g', 15);
                       if( dMain != 1 ){ ui->daysLabel->setText(labelNumberDays + " Days");}
                       if( dMain == 1 ){ ui->daysLabel->setText(labelNumberDays + " Day"); }
                       if( hMain != 1 ){ ui->hoursLabel->setText(labelNumberHours + " Hours"); }
                       if( hMain == 1 ){ ui->hoursLabel->setText(labelNumberHours + " Hour"); }
                       if( mMain != 1 ){ ui->minutesLabel->setText(labelNumberMinutes + " Minutes"); }
                       if( mMain == 1 ){ ui->minutesLabel->setText(labelNumberMinutes + " Minute"); }
                       if( sMain != 1 ){ ui->secondsLabel->setText(labelNumberSeconds + " Seconds"); }
                       if( sMain == 1 ){ ui->secondsLabel->setText(labelNumberSeconds + " Second"); }
                       if( mlsMain != 1 ){ ui->millisecondsLabel->setText(labelNumberMillisecods + " Milliseconds");}
                       if( mlsMain == 1 ){ ui->millisecondsLabel->setText(labelNumberMillisecods + " Millisecond");} }
}

void MainWindow::on_millisecondsButton_released()
{
    ui->millisecondsButton->setChecked(true); string glow = "glow.png"; string save = "save.png"; QPixmap pixmapMillisecond(path(glow));
    QPixmap pixmapDay(" "), pixmapMinute(" "), pixmapHour(" "), pixmapSecond(" ");
    ui->daysGlow->setPixmap(pixmapDay); ui->secondsGlow->setPixmap(pixmapSecond); ui->minutesGlow->setPixmap(pixmapMinute);
    ui->hoursGlow->setPixmap(pixmapHour); ui->millisecondsGlow->setPixmap(pixmapMillisecond); QPixmap pixmapSave(path(save));
    ui->saveImage->setPixmap(pixmapSave); QPixmap pixmapLine(" "); ui->line->setPixmap(pixmapLine); QPixmap pixmap(" "); ui->close->setPixmap(pixmap);
    ui->infoText->setText( " "); ui->infoText_2->setText( " "); ui->infoText_3->setText( " "); ui->infoText_4->setText( " ");
    ui->infoText_5->setText( " "); ui->infoText_6->setText( " "); ui->infoText_7->setText( " "); ui->infoText_8->setText( " ");
    ui->infoText_9->setText( " "); ui->infoText_10->setText( " "); ui->infoText_11->setText( " "); ui->infoText_12->setText( " ");
    ui->daysButton->setChecked(false); ui->hoursButton->setChecked(false); ui->minutesButton->setChecked(false); ui->secondsButton->setChecked(false);

    QString newLabel;
    ui->millisecondsButton->setChecked(true);
    long_double_t labelNumber, labelNumbermilliseconds;

    ui->equalButton->setChecked(true);
    QString newLabel2;
    long_double_t labelNumber1, secondNum, labelNumber2;
    int newDaysLabel;
    secondNum = ui->label->text().toDouble();

    if(ui->addButton->isChecked())
    {
      labelNumber = firstNum + secondNum;
      newLabel = QString::number(labelNumber, 'g', 15);
      ui->label->setText(newLabel);
      ui->addButton->setChecked(false);
      operationEntered = " + ";
    }

        else if(ui->subButton->isChecked())
        {
            labelNumber = firstNum - secondNum;
            newLabel = QString::number(labelNumber, 'g', 15);
            ui->label->setText(newLabel);
            ui->subButton->setChecked(false);
            operationEntered = " - ";
        }

            else if(ui->multButton->isChecked())
            {
                labelNumber = firstNum * secondNum;
                newLabel = QString::number(labelNumber, 'g', 15);
                ui->label->setText(newLabel);
                ui->multButton->setChecked(false);
                operationEntered = " * ";
            }

                else if(ui->devButton->isChecked())
                {
                    labelNumber = firstNum / secondNum;
                    newLabel = QString::number(labelNumber, 'g', 15);
                    ui->label->setText(newLabel);
                    ui->devButton->setChecked(false);
                    ui->equalButton->setChecked(true);
                    operationEntered = " / ";
                }

    userEnteredSecondNumber = false;

    if(ui->convertButton->isChecked() == true)
    { labelNumber = ui->label->text().toDouble();
        sum = ui->label->text().toDouble();
        sumYDirect = sum / 31557600000; sumLYDirect = sum / 31622400000; sumDDirect = sum / 86400000;
            sumHDirect = sum / 3600000; sumMDirect = sum / 60000; sumSDirect = sum / 1000;
                sumMLDirect = sum; sumMCRDirect = sum * 1000; sumNNSDirect = sum * 1000000;
                QString labelNumberDaysConverted = QString::number(sumDDirect, 'g', 15);
                QString labelNumberHoursConverted = QString::number(sumHDirect, 'g', 15);
                QString labelNumberMinutesConverted = QString::number(sumMDirect, 'g', 15);
                QString labelNumberSecondsConverted = QString::number(sumSDirect, 'g', 15);
                QString labelNumberMillisecodsConverted = QString::number(sumMLDirect, 'g', 15);
                if( sumDDirect != 1 ){ ui->daysLabel->setText(labelNumberDaysConverted + " Days");}
                if( sumDDirect == 1 ){ ui->daysLabel->setText(labelNumberDaysConverted + " Day"); }
                if( sumHDirect  != 1 ){ ui->hoursLabel->setText(labelNumberHoursConverted + " Hours"); }
                if( sumHDirect  == 1 ){ ui->hoursLabel->setText(labelNumberHoursConverted + " Hour"); }
                if( sumMDirect != 1 ){ ui->minutesLabel->setText(labelNumberMinutesConverted + " Minutes"); }
                if( sumMDirect == 1 ){ ui->minutesLabel->setText(labelNumberMinutesConverted + " Minute"); }
                if( sumSDirect != 1 ){ ui->secondsLabel->setText(labelNumberSecondsConverted + " Seconds"); }
                if( sumSDirect == 1 ){ ui->secondsLabel->setText(labelNumberSecondsConverted + " Second"); }
                if( sumMLDirect != 1 ){ ui->millisecondsLabel->setText(labelNumberMillisecodsConverted + " Milliseconds");}
                if( sumMLDirect == 1 ){ ui->millisecondsLabel->setText(labelNumberMillisecodsConverted + " Millisecond");}
    }

    if(ui->convertButton->isChecked() == false){
    sumOriginal = ui->label->text().toDouble();
    labelNumber = ui->label->text().toDouble() / 86400000;
    dMain = labelNumber; long_double_t hours = decimal(labelNumber) * 24; hMain = hours;

    long_double_t minutes = decimal(hours) * 60; mMain = minutes;

        long_double_t seconds = decimal(minutes) * 60; sMain = seconds;

            long_double_t milliseconds = decimal(seconds) * 1000; mlsMain = milliseconds;

                long_double_t microseconds = decimal(milliseconds) * 1000; mcrsMain = microseconds;

                    long_double_t nanoseconds = decimal(microseconds) * 1000; nnsMain = nanoseconds;

                        if (sumOriginal == ceil(milliseconds)){
                            mlsMain = ceil(milliseconds); mcrsMain = 0; nnsMain = 0;}

                        QString labelNumberDays = QString::number(dMain, 'g', 15);
                        QString labelNumberHours = QString::number(hMain, 'g', 15);
                        QString labelNumberMinutes = QString::number(mMain, 'g', 15);
                        QString labelNumberSeconds = QString::number(sMain, 'g', 15);
                        QString labelNumberMillisecods = QString::number(mlsMain, 'g', 15);
                        if( dMain != 1 ){ ui->daysLabel->setText(labelNumberDays + " Days");}
                        if( dMain == 1 ){ ui->daysLabel->setText(labelNumberDays + " Day"); }
                        if( hMain != 1 ){ ui->hoursLabel->setText(labelNumberHours + " Hours"); }
                        if( hMain == 1 ){ ui->hoursLabel->setText(labelNumberHours + " Hour"); }
                        if( mMain != 1 ){ ui->minutesLabel->setText(labelNumberMinutes + " Minutes"); }
                        if( mMain == 1 ){ ui->minutesLabel->setText(labelNumberMinutes + " Minute"); }
                        if( sMain != 1 ){ ui->secondsLabel->setText(labelNumberSeconds + " Seconds"); }
                        if( sMain == 1 ){ ui->secondsLabel->setText(labelNumberSeconds + " Second"); }
                        if( mlsMain != 1 ){ ui->millisecondsLabel->setText(labelNumberMillisecods + " Milliseconds");}
                        if( mlsMain == 1 ){ ui->millisecondsLabel->setText(labelNumberMillisecods + " Millisecond");} }
}

void MainWindow::on_equalButton_released()
{
    QPixmap pixmap(" ");
    ui->close->setPixmap(pixmap);
    ui->infoText->setText( " ");
    ui->infoText_2->setText( " ");
    ui->infoText_3->setText( " ");
    ui->infoText_4->setText( " ");
    ui->infoText_5->setText( " ");
    ui->infoText_6->setText( " ");
    ui->infoText_7->setText( " ");
    ui->infoText_8->setText( " ");
    ui->infoText_9->setText( " ");
    ui->infoText_10->setText( " ");
    ui->infoText_11->setText( " ");
    ui->infoText_12->setText( " ");
    string save = "save.png"; QPixmap pixmapSave(path(save));
    ui->saveImage->setPixmap(pixmapSave); QPixmap pixmapLine(" "); ui->line->setPixmap(pixmapLine);

    ui->equalButton->setChecked(true);
    QString newLabel;
    long_double_t labelNumber, secondNum;
    secondNum = ui->label->text().toDouble();

    if(ui->addButton->isChecked())
    {
      labelNumber = firstNum + secondNum;
      newLabel = QString::number(labelNumber, 'g', 15);
      ui->label->setText(newLabel);
      ui->addButton->setChecked(false);
      operationEntered = " + ";
    }

        else if(ui->subButton->isChecked())
        {
            labelNumber = firstNum - secondNum;
            newLabel = QString::number(labelNumber, 'g', 15);
            ui->label->setText(newLabel);
            ui->subButton->setChecked(false);
            operationEntered = " - ";
        }

            else if(ui->multButton->isChecked())
            {
                labelNumber = firstNum * secondNum;
                newLabel = QString::number(labelNumber, 'g', 15);
                ui->label->setText(newLabel);
                ui->multButton->setChecked(false);
                operationEntered = " * ";
            }

                else if(ui->devButton->isChecked())
                {
                    labelNumber = firstNum / secondNum;
                    newLabel = QString::number(labelNumber, 'g', 15);
                    ui->label->setText(newLabel);
                    ui->devButton->setChecked(false);
                    ui->equalButton->setChecked(true);
                    operationEntered = " / ";
                }

    string resultGet, numberGet, number2Get, operationGet2;

    ifstream result2("C:\\CalculatorData\\result.txt");
    while(getline(result2, resultGet));
    QString resultGetMain = QString::fromStdString(resultGet);

    ifstream numberGet1("C:\\CalculatorData\\number1.txt");
    while(getline(numberGet1, numberGet));
    QString numberGetMain = QString::fromStdString(numberGet);

    ifstream number2Get1("C:\\CalculatorData\\number2.txt");
    while(getline(number2Get1, number2Get));
    QString number2GetMain = QString::fromStdString(number2Get);

    ifstream operationGet("C:\\CalculatorData\\operation.txt");
    while(getline(operationGet, operationGet2));
    QString operationGetMain = QString::fromStdString(operationGet2);

    ofstream operation("C:\\CalculatorData\\operation.txt");
    operation<<operationEntered;

    ofstream result("C:\\CalculatorData\\result.txt");
    long_double_t Result = ui->label->text().toDouble();
    result<<Result;

    ui->history2->setText( " Entered : " + numberGetMain + operationGetMain + number2GetMain + " = " + resultGetMain );
}

void MainWindow::binary_operation_pressed()
{
    QPushButton * button = (QPushButton*) sender();

    firstNum = ui->label->text().toDouble();

    button->setChecked(true);
}

void MainWindow::on_convertButton_released()
{
    if(ui->daysButton->isChecked() == true)
    { ui->daysButton->animateClick(); }
        if(ui->hoursButton->isChecked() == true)
        { ui->hoursButton->animateClick(); }
            if(ui->minutesButton->isChecked() == true)
            { ui->minutesButton->animateClick(); }
                if(ui->secondsButton->isChecked() == true)
                { ui->secondsButton->animateClick(); }
                    if(ui->millisecondsButton->isChecked() == true)
                    { ui->millisecondsButton->animateClick(); }

    string conversionSwitch = "on";
    ofstream convertInfo("C:\\CalculatorData\\convertInfo.txt");
    convertInfo<<conversionSwitch;

    string onswitch = "onswitch.png"; QPixmap switchButton(path(onswitch));
    ui->onSwitch->setPixmap(switchButton);
    QPixmap switchButton2(" ");
    ui->offSwitch->setPixmap(switchButton2);
    ui->convertButton->setChecked(true);
}

void MainWindow::on_offButton_released()
{
    string offswitch = "offswitch.png"; QPixmap switchButton(path(offswitch));
    ui->offSwitch->setPixmap(switchButton);
    QPixmap switchButton2(" ");
    ui->onSwitch->setPixmap(switchButton2);
    ui->convertButton->setChecked(false);

    if(ui->daysButton->isChecked() == true)
    { ui->daysButton->animateClick(); }
        if(ui->hoursButton->isChecked() == true)
        { ui->hoursButton->animateClick(); }
            if(ui->minutesButton->isChecked() == true)
            { ui->minutesButton->animateClick(); }
                if(ui->secondsButton->isChecked() == true)
                { ui->secondsButton->animateClick(); }
                    if(ui->millisecondsButton->isChecked() == true)
                    { ui->millisecondsButton->animateClick(); }

                    string conversionSwitch = "off";
                    ofstream convertInfo("C:\\CalculatorData\\convertInfo.txt");
                    convertInfo<<conversionSwitch;
}

void MainWindow::on_infoButton_released()
{

    ui->label->setText("0");
    ui->daysLabel->setText("0 Days");
    ui->hoursLabel->setText("0 Hours");
    ui->minutesLabel->setText("0 Minutes");
    ui->secondsLabel->setText("0 Seconds");
    ui->millisecondsLabel->setText("0 Milliseconds");
    string image2 = "Webp.net-resizeimage (4).png"; QPixmap pixmap(path(image2));
    QPixmap pixmapHistory(" "); ui->historyImage->setPixmap(pixmapHistory); ui->history2->setText( " " ); ui->close->setPixmap(pixmap);
    ui->infoText->setText( "  CONVERSION TUTORIAL ");
    ui->infoText_2->setText( "  If you want to convert, ");
    ui->infoText_3->setText( "  flip the switch on the ");
    ui->infoText_4->setText( "  right, from its current ");
    ui->infoText_5->setText( "  off state, to a on state ");
    ui->infoText_6->setText( "  (reverse this process to  ");
    ui->infoText_7->setText( "  turn direct conversion off). ");
    ui->infoText_8->setText( "  This should be followed by ");
    ui->infoText_9->setText( "  entering you desired number, ");
    ui->infoText_10->setText( " press any of the offered time  ");
    ui->infoText_11->setText( " options on the right side to ");
    ui->infoText_12->setText( " get your corresponding result. ");
}

void MainWindow::on_closeButton_released()
{
    QPixmap pixmap(" ");
    ui->close->setPixmap(pixmap);
    string history = "history(2).png"; QPixmap pixmapHistory(path(history));
    ui->historyImage->setPixmap(pixmapHistory);
    ui->infoText->setText( " ");
    ui->infoText_2->setText( " ");
    ui->infoText_3->setText( " ");
    ui->infoText_4->setText( " ");
    ui->infoText_5->setText( " ");
    ui->infoText_6->setText( " ");
    ui->infoText_7->setText( " ");
    ui->infoText_8->setText( " ");
    ui->infoText_9->setText( " ");
    ui->infoText_10->setText( " ");
    ui->infoText_11->setText( " ");
    ui->infoText_12->setText( " ");

    string resultGet, numberGet, number2Get, operationGet2;

    ifstream result2("C:\\CalculatorData\\result.txt");
    while(getline(result2, resultGet));
    QString resultGetMain = QString::fromStdString(resultGet);

    ifstream numberGet1("C:\\CalculatorData\\number1.txt");
    while(getline(numberGet1, numberGet));
    QString numberGetMain = QString::fromStdString(numberGet);

    ifstream number2Get1("C:\\CalculatorData\\number2.txt");
    while(getline(number2Get1, number2Get));
    QString number2GetMain = QString::fromStdString(number2Get);

    ifstream operationGet("C:\\CalculatorData\\operation.txt");
    while(getline(operationGet, operationGet2));
    QString operationGetMain = QString::fromStdString(operationGet2);

    ui->history2->setText( " Previously Entered : " + numberGetMain + operationGetMain + number2GetMain + " = " + resultGetMain );
}

void MainWindow::on_history_released()
{
    string info1 = "days", info2 = "hours", info3 = "minutes", info4 = "seconds", info5 = "milliseconds", infoGet;
    ifstream infoGet2("C:\\CalculatorData\\convertInfoSettings.txt");
    while(getline(infoGet2, infoGet));
    if(infoGet == info1 ){ ui->daysButton->animateClick(); }
    if(infoGet == info2 ){ ui->hoursButton->animateClick(); }
    if(infoGet == info3 ){ ui->minutesButton->animateClick(); }
    if(infoGet == info4 ){ ui->secondsButton->animateClick(); }
    if(infoGet == info5 ){ ui->millisecondsButton->animateClick(); }

    string daysGet, hoursGet, minutesGet, secondsGet, millisecondsGet, resultMainGet;
    ifstream daysGet2("C:\\CalculatorData\\days.txt");
    while(getline(daysGet2, daysGet));
    QString daysGetMain = QString::fromStdString(daysGet);

    ifstream hoursGet2("C:\\CalculatorData\\hours.txt");
    while(getline(hoursGet2, hoursGet));
    QString hoursGetMain = QString::fromStdString(hoursGet);

    ifstream minutesGet2("C:\\CalculatorData\\minutes.txt");
    while(getline(minutesGet2, minutesGet));
    QString minutesGetMain = QString::fromStdString(minutesGet);

    ifstream secondsGet2("C:\\CalculatorData\\seconds.txt");
    while(getline(secondsGet2, secondsGet));
    QString secondsGetMain = QString::fromStdString(secondsGet);

    ifstream millisecondsGet2("C:\\CalculatorData\\milliseconds.txt");
    while(getline(millisecondsGet2, millisecondsGet));
    QString millisecondsGetMain = QString::fromStdString(millisecondsGet);

    ifstream resultMainGet2("C:\\CalculatorData\\resultMain.txt");
    while(getline(resultMainGet2, resultMainGet));
    QString resultMainGet3 = QString::fromStdString(resultMainGet);

    ui->label->setText(resultMainGet3);
    ui->daysLabel->setText(daysGetMain + " Days");
    ui->hoursLabel->setText(hoursGetMain + " Hours");
    ui->minutesLabel->setText(minutesGetMain + " Minutes");
    ui->secondsLabel->setText(secondsGetMain + " Seconds");
    ui->millisecondsLabel->setText(millisecondsGetMain + " Milliseconds");

}

void MainWindow::on_saveButton_released()
{
    string info;
    ofstream resultMain("C:\\CalculatorData\\resultMain.txt");
    long_double_t ResultMain = ui->label->text().toDouble();
    resultMain<<ResultMain;

    if(ui->convertButton->isChecked() == true)
    {
    ofstream daysResult("C:\\CalculatorData\\days.txt");
    daysResult<<sumDDirect;
        ofstream hoursResult("C:\\CalculatorData\\hours.txt");
        hoursResult<<sumHDirect;
            ofstream minutesResult("C:\\CalculatorData\\minutes.txt");
            minutesResult<<sumMDirect;
                ofstream secondsResult("C:\\CalculatorData\\seconds.txt");
                secondsResult<<sumSDirect;
                    ofstream millisecondsResult("C:\\CalculatorData\\milliseconds.txt");
                    millisecondsResult<<sumMLDirect;
    }

        if(ui->convertButton->isChecked() == false)
        {
        ofstream daysResult("C:\\CalculatorData\\days.txt");
        daysResult<<dMain;
            ofstream hoursResult("C:\\CalculatorData\\hours.txt");
            hoursResult<<hMain;
                ofstream minutesResult("C:\\CalculatorData\\minutes.txt");
                minutesResult<<mMain;
                    ofstream secondsResult("C:\\CalculatorData\\seconds.txt");
                    secondsResult<<sMain;
                        ofstream millisecondsResult("C:\\CalculatorData\\milliseconds.txt");
                        millisecondsResult<<mlsMain;
        }

        if(ui->daysButton->isChecked()) { info = "days"; }
        if(ui->hoursButton->isChecked()) { info = "hours"; }
        if(ui->minutesButton->isChecked()) { info = "minutes"; }
        if(ui->secondsButton->isChecked()) { info = "seconds"; }
        if(ui->millisecondsButton->isChecked()) { info = "milliseconds"; }

        ofstream convert("C:\\CalculatorData\\convertInfoSettings.txt"); convert<<info;
}

void MainWindow::keyPressEvent(QKeyEvent * event)
{

    if((event->key() == Qt::Key_1) || (event->key() == Qt::Key_2) || (event->key() == Qt::Key_3) ||
        (event->key() == Qt::Key_4) || (event->key() == Qt::Key_5) || (event->key() == Qt::Key_6) ||
          (event->key() == Qt::Key_7) || (event->key() == Qt::Key_8) || (event->key() == Qt::Key_9) ||
            (event->key() == Qt::Key_0))
    {
        if((ui->secondsButton->isChecked()) || (ui->millisecondsButton->isChecked()) || (ui->minutesButton->isChecked()) ||
          (ui->hoursButton->isChecked()) || (ui->daysButton->isChecked()) ){
            ui->secondsButton->setChecked(false);  ui->millisecondsButton->setChecked(false);  ui->minutesButton->setChecked(false);
            ui->hoursButton->setChecked(false);  ui->daysButton->setChecked(false);
            ui->label->setText("0");
            ui->daysLabel->setText("0 Days");
            ui->hoursLabel->setText("0 Hours");
            ui->minutesLabel->setText("0 Minutes");
            ui->secondsLabel->setText("0 Seconds");
            ui->millisecondsLabel->setText("0 Milliseconds"); }

        QPixmap pixmap(" ");
        ui->close->setPixmap(pixmap);
        ui->infoText->setText( " ");
        ui->infoText_2->setText( " ");
        ui->infoText_3->setText( " ");
        ui->infoText_4->setText( " ");
        ui->infoText_5->setText( " ");
        ui->infoText_6->setText( " ");
        ui->infoText_7->setText( " ");
        ui->infoText_8->setText( " ");
        ui->infoText_9->setText( " ");
        ui->infoText_10->setText( " ");
        ui->infoText_11->setText( " ");
        ui->infoText_12->setText( " ");
        QPixmap pixmapMillisecond(" "); QPixmap pixmapDay(" "), pixmapMinute(" "), pixmapHour(" "), pixmapSecond(" ");
        ui->daysGlow->setPixmap(pixmapDay); ui->secondsGlow->setPixmap(pixmapSecond); ui->minutesGlow->setPixmap(pixmapMinute);
        ui->hoursGlow->setPixmap(pixmapHour); ui->millisecondsGlow->setPixmap(pixmapMillisecond); ui->millisecondsGlow->setPixmap(pixmapMillisecond); QPixmap pixmapSave(" ");
        ui->saveImage->setPixmap(pixmapSave); string image1 = "line(2).png"; QPixmap pixmapLine(path(image1)); ui->line->setPixmap(pixmapLine);

        if(ui->equalButton->isChecked() ){ userEnteredSecondNumber = false; ui->label->setText("0"); ui->equalButton->setChecked(false); }

        QString number;
        if(event->key() == Qt::Key_1){ number = "1"; }   if(event->key() == Qt::Key_2){ number = "2"; }
        if(event->key() == Qt::Key_3){ number = "3"; } if(event->key() == Qt::Key_4){ number = "4"; }
        if(event->key() == Qt::Key_5){ number = "5"; }   if(event->key() == Qt::Key_6){ number = "6"; }
        if(event->key() == Qt::Key_7){ number = "7"; }   if(event->key() == Qt::Key_8){ number = "8"; }
        if(event->key() == Qt::Key_9){ number = "9"; } if(event->key() == Qt::Key_0){ number = "0"; }

         QPushButton * button = new QPushButton(number);

        double labelNumber; QString newLabel;

        if((ui->addButton->isChecked() || ui->subButton->isChecked() ||
           ui->multButton->isChecked() || ui->devButton->isChecked())
           && (!userEnteredSecondNumber))
        {
            labelNumber = button->text().toDouble();
            userEnteredSecondNumber = true;
            newLabel = QString::number(labelNumber,'g',15);
        }

        else
        {
             if (ui->label->text().contains('.') && button->text() == "0")
             {
                 newLabel = (ui->label->text() + button->text());
             }
             else
             {
                labelNumber = (ui->label->text() + button->text()).toDouble();
                newLabel = QString::number(labelNumber,'g',15);
             }
        }

        if(ui->addButton->isChecked() || ui->subButton->isChecked() || ui->multButton->isChecked() || ui->devButton->isChecked() )
        {
            long_double_t numberEntered2 = newLabel.toDouble();
            ofstream number2("C:\\CalculatorData\\number2.txt");
            number2<<numberEntered2;
        }
            else
            {
                long_double_t numberEntered1 = newLabel.toDouble();
                ofstream number1("C:\\CalculatorData\\number1.txt");
                number1<<numberEntered1;
            }

        ui->label->setText(newLabel);
    }

    if((event->key() == Qt::Key_Equal) || (event->key() == Qt::Key_Enter) || (event->key() == Qt::Key_Return))
        {
             ui->equalButton->animateClick();

             QPixmap pixmap(" ");
             ui->close->setPixmap(pixmap);
             ui->infoText->setText( " ");
             ui->infoText_2->setText( " ");
             ui->infoText_3->setText( " ");
             ui->infoText_4->setText( " ");
             ui->infoText_5->setText( " ");
             ui->infoText_6->setText( " ");
             ui->infoText_7->setText( " ");
             ui->infoText_8->setText( " ");
             ui->infoText_9->setText( " ");
             ui->infoText_10->setText( " ");
             ui->infoText_11->setText( " ");
             ui->infoText_12->setText( " ");

             ui->equalButton->setChecked(true);
             QString newLabel;
             long_double_t labelNumber, secondNum;
             secondNum = ui->label->text().toDouble();

             if(ui->addButton->isChecked())
             {
               labelNumber = firstNum + secondNum;
               newLabel = QString::number(labelNumber, 'g', 15);
               ui->label->setText(newLabel);
               ui->addButton->setChecked(false);
               operationEntered = " + ";
             }

                 else if(ui->subButton->isChecked())
                 {
                     labelNumber = firstNum - secondNum;
                     newLabel = QString::number(labelNumber, 'g', 15);
                     ui->label->setText(newLabel);
                     ui->subButton->setChecked(false);
                     operationEntered = " - ";
                 }

                     else if(ui->multButton->isChecked())
                     {
                         labelNumber = firstNum * secondNum;
                         newLabel = QString::number(labelNumber, 'g', 15);
                         ui->label->setText(newLabel);
                         ui->multButton->setChecked(false);
                         operationEntered = " * ";
                     }

                         else if(ui->devButton->isChecked())
                         {
                             labelNumber = firstNum / secondNum;
                             newLabel = QString::number(labelNumber, 'g', 15);
                             ui->label->setText(newLabel);
                             ui->devButton->setChecked(false);
                             ui->equalButton->setChecked(true);
                             operationEntered = " / ";
                         }

             string resultGet, numberGet, number2Get, operationGet2;

             ifstream result2("C:\\CalculatorData\\result.txt");
             while(getline(result2, resultGet));
             QString resultGetMain = QString::fromStdString(resultGet);

             ifstream numberGet1("C:\\CalculatorData\\number1.txt");
             while(getline(numberGet1, numberGet));
             QString numberGetMain = QString::fromStdString(numberGet);

             ifstream number2Get1("C:\\CalculatorData\\number2.txt");
             while(getline(number2Get1, number2Get));
             QString number2GetMain = QString::fromStdString(number2Get);

             ifstream operationGet("C:\\CalculatorData\\operation.txt");
             while(getline(operationGet, operationGet2));
             QString operationGetMain = QString::fromStdString(operationGet2);


             ofstream operation("C:\\CalculatorData\\operation.txt");
             operation<<operationEntered;

             ofstream result("C:\\CalculatorData\\result.txt");
             long_double_t Result = ui->label->text().toDouble();
             result<<Result;

             ui->history2->setText( " Entered : " + numberGetMain + operationGetMain + number2GetMain + " = " + resultGetMain );
        }

    if((event->key() == Qt::Key_Escape) || (event->key() == Qt::Key_Delete))
    {
        ui->clearButton->animateClick();
        ui->addButton->setChecked(false);
        ui->subButton->setChecked(false);
        ui->multButton->setChecked(false);
        ui->devButton->setChecked(false);
        ui->daysButton->setChecked(false);
        ui->hoursButton->setChecked(false);
        ui->minutesButton->setChecked(false);
        ui->secondsButton->setChecked(false);
        ui->millisecondsButton->setChecked(false);
        ui->equalButton->setChecked(false);

        userEnteredSecondNumber = false;

        string history2 = "history(2).png"; QPixmap pixmapHistory(path(history2));
        ui->historyImage->setPixmap(pixmapHistory);
        ui->label->setText("0");
        ui->daysLabel->setText("0 Days");
        ui->hoursLabel->setText("0 Hours");
        ui->minutesLabel->setText("0 Minutes");
        ui->secondsLabel->setText("0 Seconds");
        ui->millisecondsLabel->setText("0 Milliseconds");

        QPixmap pixmap(" ");
        ui->close->setPixmap(pixmap);
        ui->infoText->setText( " ");
        ui->infoText_2->setText( " ");
        ui->infoText_3->setText( " ");
        ui->infoText_4->setText( " ");
        ui->infoText_5->setText( " ");
        ui->infoText_6->setText( " ");
        ui->infoText_7->setText( " ");
        ui->infoText_8->setText( " ");
        ui->infoText_9->setText( " ");
        ui->infoText_10->setText( " ");
        ui->infoText_11->setText( " ");
        ui->infoText_12->setText( " ");
        QPixmap pixmapMillisecond(" "); QPixmap pixmapDay(" "), pixmapMinute(" "), pixmapHour(" "), pixmapSecond(" ");
        ui->daysGlow->setPixmap(pixmapDay); ui->secondsGlow->setPixmap(pixmapSecond); ui->minutesGlow->setPixmap(pixmapMinute);
        ui->hoursGlow->setPixmap(pixmapHour); ui->millisecondsGlow->setPixmap(pixmapMillisecond); ui->millisecondsGlow->setPixmap(pixmapMillisecond); QPixmap pixmapSave(" ");
        ui->saveImage->setPixmap(pixmapSave); string image1 = "line(2).png"; QPixmap pixmapLine(path(image1)); ui->line->setPixmap(pixmapLine);
    }

    if((event->key() == Qt::Key_Comma) || (event->key() == Qt::Key_Period))
    {
        QPixmap pixmap(" ");
        ui->close->setPixmap(pixmap);
        ui->infoText->setText( " ");
        ui->infoText_2->setText( " ");
        ui->infoText_3->setText( " ");
        ui->infoText_4->setText( " ");
        ui->infoText_5->setText( " ");
        ui->infoText_6->setText( " ");
        ui->infoText_7->setText( " ");
        ui->infoText_8->setText( " ");
        ui->infoText_9->setText( " ");
        ui->infoText_10->setText( " ");
        ui->infoText_11->setText( " ");
        ui->infoText_12->setText( " ");
        ui->label->setText(ui->label->text() + ".");
    }

    if((event->key() == Qt::Key_Control) || (event->key() == Qt::Key_Alt))
    {
        ui->offButton->animateClick();
    }

    if(event->key() == Qt::Key_Shift)
    {
        ui->convertButton->animateClick();
    }

    if(event->key() == Qt::Key_Plus)
    {
        ui->addButton->animateClick();
        ui->addButton->setChecked(true);
        firstNum = ui->label->text().toDouble();
    }

    if(event->key() == Qt::Key_Minus)
    {
        ui->subButton->animateClick();
        ui->subButton->setChecked(true);
        firstNum = ui->label->text().toDouble();
    }

    if(event->key() == Qt::Key_Slash)
    {
        ui->devButton->animateClick();
        ui->devButton->setChecked(true);
        firstNum = ui->label->text().toDouble();
    }

    if(event->key() == Qt::Key_Asterisk)
    {
        ui->multButton->animateClick();
        ui->multButton->setChecked(true);
        firstNum = ui->label->text().toDouble();
    }

    if(event->key() == Qt::Key_Backspace)
    {
        long_double_t labelCompare = digits3(ui->label->text().toDouble()), number = ui->label->text().toDouble();
        long_double_t labelCompare2 = digits3(decimal(number) * (digits2(digits(number)) / 10));
        if(labelCompare > 1 || (ui->label->text().contains("."))){
        QString label = ui->label->text();
        QString trimmed = label.left(label.length() - 1);
        ui->label->setText(trimmed);}
        if(labelCompare == 1 && labelCompare2 == 0){ ui->label->setText("0"); }
    }

    if(event->key() == Qt::Key_I)
    {
            ui->label->setText("0");
            ui->daysLabel->setText("0 Days");
            ui->hoursLabel->setText("0 Hours");
            ui->minutesLabel->setText("0 Minutes");
            ui->secondsLabel->setText("0 Seconds");
            ui->millisecondsLabel->setText("0 Milliseconds");
            string image2 = "Webp.net-resizeimage (4).png"; QPixmap pixmap(path(image2));
            ui->close->setPixmap(pixmap); QPixmap pixmapHistory(" "); ui->history2->setText( " " ); ui->historyImage->setPixmap(pixmapHistory);
            ui->infoText->setText( "  KEYBINDS ");
            ui->infoText_2->setText( "  CLOSE MESSAGE | X Key 'x' ");
            ui->infoText_3->setText( "  DAYS | Function 1 'F1' ");
            ui->infoText_4->setText( "  HOURS | Function 2 'F2' ");
            ui->infoText_5->setText( "  MINUTES | Function 3 'F3' ");
            ui->infoText_6->setText( "  SECONDS | Function 4 'F4' ");
            ui->infoText_7->setText( "  MILLISECONDS | Function 5 'F5' ");
            ui->infoText_8->setText( "  SAVE OUTPUTED | S Key 'S' ");
            ui->infoText_9->setText( "  SHOW HISTORY | H Key 'H' ");
            ui->infoText_10->setText( "  CONVERT ON | Shift Key 'Shift' ");
            ui->infoText_11->setText( "  CONVERT OFF | Alt Key 'alt' ");
            ui->infoText_12->setText( "  PLUS/MINUS | Insert Key 'Insert' ");
    }

    if(event->key() == Qt::Key_X)
    {
        ui->closeButton->animateClick();
    }

    if(event->key() == Qt::Key_F1)
    {
        ui->daysButton->animateClick();
    }

    if(event->key() == Qt::Key_F2)
    {
        ui->hoursButton->animateClick();
    }

    if(event->key() == Qt::Key_F3)
    {
        ui->minutesButton->animateClick();
    }

    if(event->key() == Qt::Key_F4)
    {
        ui->secondsButton->animateClick();
    }

    if(event->key() == Qt::Key_F5)
    {
        ui->millisecondsButton->animateClick();
    }

    if(event->key() == Qt::Key_H)
    {
        ui->history->animateClick();
    }

    if(event->key() == Qt::Key_S)
    {
       ui->saveButton->animateClick();
    }

    if(event->key() == Qt::Key_Insert)
    {
        ui->plusminusButton->animateClick();
    }
}

