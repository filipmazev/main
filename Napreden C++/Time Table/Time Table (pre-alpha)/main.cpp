#include <iostream>
#include <windows.h>
#include <float.h>
#include <limits.h>
#include <cstdlib>
#include <stdio.h>
#include <math.h>
#include <fstream>
#include <time.h>
#include <gmp.h>
using namespace std;

void error()
{
cin.clear();
cin.ignore(DBL_MAX, '\n');
cout<<endl<<" you can only enter numbers: ";
}

int main()
{

ifstream Mainchecker; Mainchecker.open("dontDisturb");
if( Mainchecker.is_open() == true ) goto B;
else goto C;

C:
    { system ("cls");
    string checkerGet; int chsMain;
    ifstream checker; checker.open("preset.txt");
    while(getline(checker, checkerGet))
        if(checker.is_open() == false ) goto A;
            else{
            cout<<"           CURRENT PRESET: "<<checkerGet<<endl;
            cout<<" (1) - CONTINUE WITH PREVIOUS PRESET - (1) "<<endl;
            cout<<" (2) -     CHANGE CURRENT PRESET     - (2) "<<endl;
            cout<<" (3) -        DO NOT ASK AGAIN       - (3) "<<endl;
            cout<<endl<<" Enter:"; cin>>chsMain;
            while(cin.fail()){error(); cin>>chsMain;}
            while(chsMain > 3 || chsMain < 1){ cout<<" Enter valid option!"<<endl; goto C;}
            if (chsMain == 1) goto B;
            if (chsMain == 2){ remove("preset.txt"); goto A;}
            if (chsMain == 3){ ofstream no; no.open("dontDisturb"); goto B;}}
    }
A:
    {
    int chsMode; string userPreset;
    cout<<"     TIME TABLE "<<endl; cout<<endl;
    cout<<" (1) - STANDARD - (1) "<<endl;
    cout<<" (2) - ADVANCED - (2) "<<endl;
    cout<<endl<<" Enter:"; cin>>chsMode;
    while(cin.fail()){error(); cin>>chsMode;}
    while(chsMode > 2 || chsMode < 1){ cout<<" Enter valid option: "<<endl;  goto A;}

        if(chsMode == 1 ){
        userPreset = "STANDARD";
        ofstream preset; preset.open("preset.txt");
        preset<<userPreset;}

        if(chsMode == 2 ){
        userPreset = "ADVANCED";
        ofstream preset; preset.open("preset.txt");
        preset<<userPreset;}

    Sleep (850); system ("cls");  goto B;
    }

B:
    {
    system ("cls");

    string presetInfo1 = "STANDARD", presetInfo2 = "ADVANCED", presetGet;
    ifstream preset2; preset2.open("preset.txt");
    while(getline(preset2, presetGet))
    cout.unsetf(ios_base::floatfield);

    int chs, chs2, chs3, n, minutes, hours=0, sum3, seconds2, seconds3, days=0, compare=100000000, maxNum;
    double sum2=0.00, seconds=0.00, sum=0.00, num[1000], sumSec, sumMin, sumHour, sumDay, sumMilsec, sumOriginal=0.00, sum4=0.0000, sMain, mMain, hMain, dMain;
    string checkerGet2, sS, sM, sH, sD, sC, sMs, c, c2, c3, c4, c5, c6, c62, c7, c72;
    ifstream checker2; checker2.open("preset.txt");
    while(getline(checker2, checkerGet2))

    cout<<"     TIME TABLE "<<endl; cout<<endl;
    cout<<"    "<<checkerGet2<<" MODE"<<endl;
    cout<<" (1) - SECONDS - (1) "<<endl;
    cout<<" (2) - MINUTES - (2) "<<endl;
    cout<<" (3) - HOURS   - (3) "<<endl;
    cout<<" (4) - DAYS    - (4) "<<endl;
    cout<<" (5) - EXTRA   - (5) "<<endl;
    cout<<endl<<" Enter:"; cin>>chs;
    while(cin.fail()){error(); cin>>chs;}
    while(chs > 5 || chs < 1){ cout<<endl<<" Enter valid option: "; goto B;}

    if(chs == 5)
    {
    cout<<endl;
    cout<<" extra options: "<<endl;
    cout<<" (1) -    DISABLE DO NOT ASK FOR MODE   - (1) "<<endl;
    cout<<" (2) -  DISABLE WARNING & ERROR MESSAGE - (2) "<<endl;
    cout<<" (3) -            CHANGE MODE           - (3) "<<endl;
    cout<<" (4) -              RESTART             - (4) "<<endl;
    cout<<" (5) -               EXIT               - (5) "<<endl;
    cout<<endl<<" Enter:"; cin>>chs3;
    while(cin.fail()){error(); cin>>chs3;}
    while(chs3 > 5 || chs3 < 1){ cout<<endl<<" Enter valid option: "; cin>>chs3;
    while(cin.fail()){error(); cin>>chs3;}}

        if (chs3 == 1)
        {
        Mainchecker.open("dontDisturb");
        if( Mainchecker.is_open() == true ){
        Mainchecker.close();
        remove ("dontDisturb");
        cout<<" DO NOT ASK FOR MODE DISABLED"<<endl;
        Sleep(1500); goto B;}
        if( Mainchecker.is_open() == false ){
        cout<<" DO NOT ASK FOR MODE HAS NOT BEEN ENABLED YET"<<endl;
        cout<<" WOULD YOU LIKE TO ENABLE IT? (1) - yes | (2) - no"<<endl;
        int chsHere2; cout<<endl<<" Enter:"; ;cin>>chsHere2;
        while(cin.fail()){error(); cin>>chsHere2;}
        while(chsHere2 > 2 || chsHere2 < 1){cout<<endl<<" Enter valid option: "; cin>>chsHere2;
        while(cin.fail()){error(); cin>>chsHere2;}}
        if (chsHere2 == 1 ) {ofstream no; no.open("dontDisturb"); Sleep(1500); goto B;}
        if (chsHere2 == 2 ) Sleep(1500); goto B;}
        }

        if (chs3 == 2 )
        {
        ifstream checker2Checker; checker2Checker.open("messageDisable");
        if(checker2Checker.is_open() == false){
        ofstream checker2; checker2.open("messageDisable");
        cout<<" WARNING AND ERROR MESSAGES DISABLED"<<endl; Sleep(1500); goto B;}
        if(checker2Checker.is_open() == true){
        cout<< " WARNING AND ERROR MESSAGES HAVE BEEN DISABLED"<<endl;
        cout<<endl<<" WOULD YOU WANT TO RE-ENABLE THEM? (1) - yes | (2) - no :";
        int chsHere; cout<<endl<<" Enter:"; ;cin>>chsHere;
        while(cin.fail()){error(); cin>>chsHere;}
        while(chsHere > 2 || chsHere < 1){cout<<endl<<" Enter valid option: "; cin>>chsHere;
        while(cin.fail()){error(); cin>>chsHere;}}
        if(chsHere == 1){ checker2Checker.close(); remove ("messageDisable"); Sleep(750); goto B;}
        if(chsHere == 2){ Sleep(750); goto B;}}
        }

        if(chs3 == 3) { Sleep (750); system("cls"); goto A;}
        if(chs3 == 4) { Sleep (750); system("restart.bat"); system("cls"); exit(0);}
        if(chs3 == 5){ Sleep (750); system("cls"); exit(0);}
    }

    Sleep (750); system("cls");
    cout<<"     TIME TABLE "<<endl; cout<<endl;
    cout<<endl<<" ENTER HOW MANY TIME INSTANCE'S YOU WILL BE ENTERING:"; cin>>n;
    while(cin.fail()){error(); cin>>n;}
    system ("cls");

    ifstream checker3Checker; checker3Checker.open("messageDisable");
    if( checker3Checker.is_open() == false){
    if(chs == 1) maxNum = 12;
        if(chs == 2) maxNum = 10;
            if(chs == 3) maxNum = 8;
                if(chs == 4) maxNum = 7;

    if ( presetGet == presetInfo2 ) maxNum -= 2;
    cout<<" THE MAXIMUM IS A "<<maxNum<<" DIGIT NUMBER!"<<endl;
    Sleep(1500); system ("cls");}

        cout<<"     TIME TABLE "<<endl; cout<<endl;
        for(int i=0; i<n; i++)
        {
        cout<<" TIME INSTANCE "<<i+1<<": ";
        cin>>num[i];
        while(cin.fail()){error(); cin>>num[i];}
        sum+=num[i];
        }
        sumOriginal = sum;

    if (sumOriginal != 1){ c7 = "S"; c72 = "s";} if (sumOriginal == 1){ c7 = ""; c72 = "";}
    if (chs == 1){ sum = sum / 60; c6 = "SECOND"; c62 = "second";}
    if (chs == 2){ sum = sum; c6 = "MINUTE"; c62 = "minute";}
    if (chs == 3){ sum *= 60;  c6 = "HOUR"; c62 = "hour";}
    if (chs == 4){ sum *= 1440; c6 = "DAY"; c62 = "day";}

            minutes = sum;
            sum3 = sum * 10000; sum2 = sum3 % 10000;
            sum4 = sum2 / 10000; seconds = sum4 / 0.016667;
            while ( seconds >= 60){
            seconds -= 60; minutes +=1;}
            seconds3 = seconds * 10000;
            if((seconds3 % 10000) >= 5000){
                seconds2 = seconds + 1;}
                    else{seconds2 = seconds;}

                while ( minutes >= 60){
                minutes -= 60; hours += 1;}

                    while ( hours >= 24 ){
                    hours -= 24; days += 1;}

        if(chs == 1 ){
        sumMilsec = sumOriginal * 1000;
            sumSec = sumOriginal;
                sumMin = sumOriginal / 60;
                    sumHour = sumOriginal / 3600;
                        sumDay = sumOriginal / 86400;}

            if(chs == 2 ){
            sumMilsec = sumOriginal * 60000;
                sumSec = sumOriginal * 60;
                    sumMin = sumOriginal;
                        sumHour = sumOriginal / 60;
                            sumDay = sumOriginal / 1440;}

                if(chs == 3 ){
                sumMilsec = sumOriginal * 3600000;
                    sumSec = sumOriginal * 3600;
                        sumMin = sumOriginal * 60;
                            sumHour = sumOriginal;
                                sumDay = sumOriginal / 24;}

                    if(chs == 4){
                    sumMilsec = sumOriginal * 86400000;
                        sumSec = sumOriginal * 86400;
                            sumMin = sumOriginal * 1440;
                                sumHour = sumOriginal * 24;
                                    sumDay = sumOriginal;}

            int days2, x=100000, sumDay2;
                days2 = sumDay;
            double sumDay3=0.000000, sumDay4 = 0.000000, sumHourMain;
                sumDay2 = sumDay * x; sumDay2 = sumDay2 % x;
                    sumDay3 = sumDay2; sumDay4 = sumDay3 / x;
                        sumHourMain = sumDay4 * 24;

                int hours2, sumHour2;
                    hours2 = sumHourMain;
                double sumHour3=0.00000, sumHour4 = 0.000000, sumMinMain;
                    sumHour2 = sumHourMain * x; sumHour2 = sumHour2 % x;
                        sumHour3 = sumHour2; sumHour4 = sumHour3 / x;
                            sumMinMain = sumHour4 * 60;

                    int minutes2, sumMin2;
                        minutes2 = sumMinMain;
                    double sumMin3 = 0.00000, sumMin4 = 0.000000, sumSecMain;
                        sumMin2 = sumMinMain * x; sumMin2 = sumMin2 % x;
                            sumMin3 = sumMin2; sumMin4 = sumMin3 / x;
                                sumSecMain = sumMin4 * 60;

                        int seconds22, sumSec2;
                            seconds22 = sumSecMain;
                        double sumSec3 = 0.00000, sumSec4 = 0.000000, sumMilsecMain;
                            sumSec2 = sumSecMain * x; sumSec2 = sumSec2 % x;
                                sumSec3 = sumSec2; sumSec4 = sumSec3 / x;
                                    sumMilsecMain = sumSec4 * 1000;
                                        int miliseconds; miliseconds = sumMilsecMain;

    if( checker3Checker.is_open() == true){ cout<<endl; system("cls");
    cout<<"                   !CAUTION!"<<endl;
    cout<<"  WARNING AND ERROR MESSAGES HAVE BEEN DISABLED"<<endl;
    cout<<" ANY RESULTS BELLOW 0 ARE INCCORECT IN THIS MODE!"<<endl; cout<<endl;
    Sleep(3000); system("cls");}

    if(seconds2 < 0 ) seconds2 = 0;
    if ( presetGet == presetInfo2 ) {
    sMain = seconds22 ; mMain = minutes2; hMain = hours2; dMain = days2;}
    if ( presetGet == presetInfo1 ) {
    sMain = seconds2; mMain = minutes; hMain = hours; dMain = days;}

    if( checker3Checker.is_open() == false){
    if( mMain < 0 || hMain < 0 || dMain < 0 ){
    system ("cls");
    cout<<"        ERROR 001 "<<endl;
    cout<<" ENTERED NUMBER TOO LARGE!"<<endl;
    Sleep (3000); system ("cls");
    cout<<" Returning to start"<<endl;
    Sleep (3000); system ("cls"); goto B;}}

    if ( presetGet == presetInfo1 ) {
    Sleep(1000); system("cls"); cout<<fixed;
    sumSec = floor(sumSec * compare) / compare;
        sumMin = floor(sumMin * compare) / compare;
            sumHour = floor(sumHour * compare) / compare;
                sumDay = floor(sumDay * compare) / compare;
                cout<<"     TIME TABLE "<<endl; cout<<endl; }

    if ( presetGet == presetInfo2 ) {
    cout<<" TOTAL ENTERED: "<<sumOriginal<<" "<<c6<<c7<<endl; cout<<fixed;
    cout<<" DAYS: "<<sumDay<<endl;
    cout<<" HOURS: "<<sumHourMain<<endl;
    cout<<" MINUTES: "<<sumMinMain<<endl;
    cout<<" SECONDS: "<<sumSecMain<<endl;
    cout<<" MILISECONDS: "<<sumMilsecMain<<endl;
    cout.unsetf(ios_base::floatfield);
    cout<<" "<<endl; }

    if (miliseconds == 1) sMs = "milisecond"; if (miliseconds != 1) sMs = "miliseconds";
    if (sumSec == 1) sS = "second";  if (sumSec != 1) sS = "seconds";
    if (sumMin == 1) sM = "minute"; if (sumMin != 1) sM = "minutes";
    if (sumHour == 1) sH = "hour"; if (sumHour != 1) sH = "hours";
    if (sumDay == 1) sD = "day"; if (sumDay != 1) sD = "days";

    if(sumMilsecMain == 1) c5 = "MILISECOND"; if(sumMilsecMain != 1) c5 = "MILISECONDS";
    if(sMain == 1) c4 = "SECOND"; if(sMain != 1) c4 = "SECONDS";
    if(mMain == 1) c = "MINUTE"; if(mMain != 1) c = "MINUTES";
    if(hMain == 1) c2 = "HOUR"; if(hMain != 1) c2 = "HOURS";
    if(dMain == 1) c3 = "DAY"; if(dMain != 1) c3 = "DAYS";

    cout.unsetf(ios_base::floatfield);
    if ( presetGet == presetInfo1 ){
    cout<<" "<<dMain<<" "<<c3<<" | "<<hMain<<" "<<c2<<" | "<<mMain<<" "<<c<<" | "<<"(beta) "<<sMain<<" "<<c4<<endl; cout<<fixed;}
    if ( presetGet == presetInfo2 ){
    cout<<" "<<dMain<<" "<<c3<<" | "<<hMain<<" "<<c2<<" | "<<mMain<<" "<<c<<" | "<<sMain<<" "<<c4<<" | "<<miliseconds<<" "<<c5<<endl;}

    cout<<endl;
    cout<<" DIRECT CONVERSION: "<<endl;
    cout<<" "<<sumOriginal<<" "<<c62<<c72<<" = "<<endl;
    cout<<" DAYS   : "<<sC<<sumDay<<" "<<sD<<endl;
    cout<<" HOURS  : "<<sC<<sumHour<<" "<<sH<<endl;
    cout<<" MINUTES: "<<sC<<sumMin<<" "<<sM<<endl;
    cout<<" SECONDS: "<<sC<<sumSec<<" "<<sS<<endl;
    if( presetGet == presetInfo2 )
    cout<<" MILISECONDS: "<<sC<<sumMilsec<<" "<<sMs<<endl;

    cout<<endl; Sleep(1500);
    cout<<" (1) - BACK - (1)"<<endl;
    cout<<" (2) - EXIT - (2)"<<endl;
    cout<<endl<<" Enter:"; cin>>chs2;
    while(cin.fail()){ error(); cin>>chs2;}
    while(chs2 > 2 || chs2 < 1){ cout<<endl<<" Enter valid option: "; cin>>chs2;
    while(cin.fail()){ error(); cin>>chs2;}}
    if(chs2 == 1 ){ Sleep (500); goto B;}
    if(chs2 == 2 ){ Sleep (750); system("cls"); exit(0);}
    }

_Exit(0);
}
