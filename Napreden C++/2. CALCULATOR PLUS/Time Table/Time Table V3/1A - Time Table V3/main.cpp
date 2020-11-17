#include <iostream>
#include <windows.h>
#include <float.h>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <cmath>
#include <cstdint>
#include <iomanip>
#include <ctime>
#include <direct.h>
using namespace std;

#ifdef  USE_FLOAT128
    typedef __float128  long_double_t;
#else
    typedef long double long_double_t;
#endif

void error()
{
    cin.clear();
    cin.ignore(DBL_MAX, '\n');
    cout<<endl<<" you can only enter numbers: ";
}

long_double_t decimal(long_double_t x)
{
  x -= (long long int) x;
  return x;
}

int Return_Days_And_Months(int month, int year)
{
    int days=0;
    switch(month)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        days=31; break;
            case 4: case 6: case 9: case 11:
            days=30; break;
                case 2: if((year%4==0) && (year%100!=0 || year%400==0))
                days=29;
                    else
                    days=28;
			break;
		default: days=0;
	}

	return days;
}

int Return_Time_Diferance_Year(int year)
{
    time_t t = time(NULL);
    tm* timePtr = localtime(&t); int yearMain = 0;
    if( ((timePtr->tm_year)+1900) > year ) yearMain =  ((timePtr->tm_year)+1900) - year;
    if( ((timePtr->tm_year)+1900) < year ) yearMain = year - ((timePtr->tm_year)+1900);

    return yearMain;
}

int Return_Time_Diferance_Month(int month)
{
    time_t t = time(NULL);
    tm* timePtr = localtime(&t); int monthMain = 0;
    if( ((timePtr->tm_mon)+1) > month ) monthMain = (((timePtr->tm_mon)+1) - month);
    if( ((timePtr->tm_mon)+1) < month ) monthMain = month - ((timePtr->tm_mon)+1);

    return monthMain;
}

int Return_Time_Diferance_Day(int day)
{
    time_t t = time(NULL);
    tm* timePtr = localtime(&t); int dayMain = 0;
    if( (timePtr->tm_mday) > day ) dayMain = ((timePtr->tm_mday) - day);
    if( (timePtr->tm_mday) < day ) dayMain = day - (timePtr->tm_mday);

    return dayMain;
}

int monthEnter()
{
    int month;
    cout<<endl<<" ENTER MONTH NUMBER :"; cin>>month;
    while(cin.fail()){error(); cin>>month;}
    while(month > 12 || month < 1){ cout<<endl<<" Enter valid option: "; cin>>month;
    while(cin.fail()){error(); cin>>month;}}
    return month;
}

int yearEnter()
{
    int year;
    cout<<endl<<" ENTER YEAR :"; cin>>year;
    while(cin.fail()){error(); cin>>year;}
    return year;
}

int dayEnter2(int month, int year)
{
    int day; time_t t = time(NULL); tm* timePtr = localtime(&t);
    cout<<endl<<" ENTER DAY NUMBER :"; cin>>day;
    while(cin.fail()){error(); cin>>day;}
    while(day > (Return_Days_And_Months(month, year)) || day < 1){ cout<<endl<<" Enter valid option: "; cin>>day;
    while(cin.fail()){error(); cin>>day;}}
    return day;
}

int dayEnter()
{
    int day; time_t t = time(NULL); tm* timePtr = localtime(&t);
    cout<<endl<<" ENTER DAY NUMBER :"; cin>>day;
    while(cin.fail()){error(); cin>>day;}
    while(day > 31 || day < 1){ cout<<endl<<" Enter valid option: "; cin>>day;
    while(cin.fail()){error(); cin>>day;}}
    return day;
}


int main()
{
    time_t t = time(NULL);
    tm* timePtr = localtime(&t);
    mkdir("C:\\CalculatorData");

    ifstream outputCheck; outputCheck.open("C:\\CalculatorData\\outputMode.txt");
    if(outputCheck.is_open() == false){ string outputDefault = "AUTO";
    ofstream output; output.open("C:\\CalculatorData\\outputMode.txt"); output<<outputDefault;}

    ifstream outputCheck2; outputCheck2.open("C:\\CalculatorData\\dateFormat.txt");
    if(outputCheck2.is_open() == false){ string outputDefault2 = "DD:MM:YYYY";
    ofstream output2; output2.open("C:\\CalculatorData\\dateFormat.txt"); output2<<outputDefault2;}

    ifstream Mainchecker; Mainchecker.open("C:\\CalculatorData\\dontDisturb");
    ifstream YearChecker2; YearChecker2.open("C:\\CalculatorData\\Year");
    if(YearChecker2.is_open() == false){ ofstream yearConversion; yearConversion.open("C:\\CalculatorData\\Year");}

    if( Mainchecker.is_open() == true ) goto Main;
    else goto Start;

Start:
    {
    system ("cls");
    string checkerGet; int chsMain;
    ifstream checker; checker.open("C:\\CalculatorData\\preset.txt");
    while(getline(checker, checkerGet))

        if(checker.is_open() == false ) goto Preset;
            else
            {
                cout<<"       CURRENT PRESET: "<<checkerGet<<endl; cout<<endl;
                cout<<" (1) - CONTINUE WITH CURRENT PRESET - (1) "<<endl;
                cout<<" (2) - CHANGE CURRENT PRESET        - (2) "<<endl;
                cout<<" (3) - DO NOT ASK AGAIN             - (3) "<<endl;
                cout<<endl<<" Enter:"; cin>>chsMain;
                while(cin.fail()){error(); cin>>chsMain;}
                while(chsMain > 3 || chsMain < 1){ cout<<" Enter valid option!"<<endl; goto Start;}
                if (chsMain == 1) goto Main;
                    if (chsMain == 2){ remove("C:\\CalculatorData\\preset.txt"); goto Preset;}
                        if (chsMain == 3){ ofstream no; no.open("C:\\CalculatorData\\dontDisturb"); goto Main;}
            }
    }

Preset:
    {
    int chsMode; string userPreset, checkerGetA;
    ifstream checkerA; checkerA.open("C:\\CalculatorData\\preset.txt"); while(getline(checkerA, checkerGetA))
    cout<<" TIME TABLE "<<checkerGetA<<endl; cout<<endl;
    cout<<" (1) - STANDARD   - (1) "<<endl;
    cout<<" (2) - ADVANCED   - (2) "<<endl;
    cout<<" (3) - SCIENTIFIC - (3) "<<endl;
    cout<<endl<<" Enter:"; cin>>chsMode;
    while(cin.fail()){error(); cin>>chsMode;}
    while(chsMode > 3 || chsMode < 1){ cout<<" Enter valid option: "<<endl;  goto Preset;}

        if(chsMode == 1 )
        {
            userPreset = "STANDARD";
            ofstream preset; preset.open("C:\\CalculatorData\\preset.txt");
            preset<<userPreset;
        }

            if(chsMode == 2 )
            {
                userPreset = "ADVANCED";
                ofstream preset; preset.open("C:\\CalculatorData\\preset.txt");
                preset<<userPreset;
            }

                if(chsMode == 3 )
                {
                    userPreset = "SCIENTIFIC";
                    ofstream preset; preset.open("C:\\CalculatorData\\preset.txt");
                    preset<<userPreset;
                }

    Sleep (850); system ("cls");  goto Main;
    }

ModeCreate:
    {
    system("cls");
    int chsOutput; string outputPreset, checkerGetB;
    ifstream checkerB; checkerB.open("C:\\CalculatorData\\preset.txt"); while(getline(checkerB, checkerGetB))
    cout<<" TIME TABLE "<<checkerGetB<<endl; cout<<endl;
    cout<<" (1) - NORMAL     - (1) "<<endl;
    cout<<" (2) - SCIENTIFIC - (2) "<<endl;
    cout<<" (3) - AUTO       - (3) "<<endl;
    cout<<endl<<" Enter:"; cin>>chsOutput;
    while(cin.fail()){error(); cin>>chsOutput;}
    while(chsOutput > 3 || chsOutput < 1){ cout<<" Enter valid option: "<<endl;  goto ModeCreate;}

        if(chsOutput == 1)
        {
            outputPreset = "NORMAL";
            ofstream output; output.open("C:\\CalculatorData\\outputMode.txt");
            output<<outputPreset;
        }

            if(chsOutput == 2)
            {
                outputPreset = "SCIENTIFIC";
                ofstream output; output.open("C:\\CalculatorData\\outputMode.txt");
                output<<outputPreset;
            }

                if(chsOutput == 3)
                {
                    outputPreset = "AUTO";
                    ofstream output; output.open("C:\\CalculatorData\\outputMode.txt");
                    output<<outputPreset;
                }

    Sleep (850); system ("cls");  goto Main;
    }

DateFormatCreate:
    {
    system("cls"); time_t t = time(NULL); tm* timePtr = localtime(&t);
    int chsOutput2; string outputPreset2, checkerGetB;
    ifstream checkerB; checkerB.open("C:\\CalculatorData\\preset.txt"); while(getline(checkerB, checkerGetB));
    cout<<" TIME TABLE "<<checkerGetB<<endl; cout<<endl;
    cout<<" (1) - DD:MM:YYYY ( example : "<<(timePtr->tm_mday)<<":"<<((timePtr->tm_mon)+1)<<":"<<((timePtr->tm_year)+1900)<<" )"<<endl;
    cout<<" (2) - MM:DD:YYYY ( example : "<<((timePtr->tm_mon)+1)<<":"<<(timePtr->tm_mday)<<":"<<((timePtr->tm_year)+1900)<<" )"<<endl;
    cout<<" (3) - YYYY:MM:DD ( example : "<<((timePtr->tm_year)+1900)<<":"<<((timePtr->tm_mon)+1)<<":"<<(timePtr->tm_mday)<<" )"<<endl;
    cout<<" (4) - YYYY:DD:MM ( example : "<<((timePtr->tm_year)+1900)<<":"<<(timePtr->tm_mday)<<":"<<((timePtr->tm_mon)+1)<<" )"<<endl;
    cout<<endl<<" Enter:"; cin>>chsOutput2;
    while(cin.fail()){error(); cin>>chsOutput2;}
    while(chsOutput2 > 3 || chsOutput2 < 1){ cout<<" Enter valid option: "<<endl;  goto DateFormatCreate;}

        if(chsOutput2 == 1)
        {
            outputPreset2 = "DD:MM:YYYY";
            ofstream output2; output2.open("C:\\CalculatorData\\dateFormat.txt");
            output2<<outputPreset2;
        }

            if(chsOutput2 == 2)
            {
                outputPreset2 = "MM:DD:YYYY";
                ofstream output2; output2.open("C:\\CalculatorData\\dateFormat.txt");
                output2<<outputPreset2;
            }

                if(chsOutput2 == 3)
                {
                    outputPreset2 = "YYYY:MM:DD";
                    ofstream output2; output2.open("C:\\CalculatorData\\dateFormat.txt");
                    output2<<outputPreset2;
                }

                    if(chsOutput2 == 5)
                    {
                        outputPreset2 = "YYYY:DD:MM";
                        ofstream output2; output2.open("C:\\CalculatorData\\dateFormat.txt");
                        output2<<outputPreset2;
                    }

        Sleep (850); system ("cls");  goto Main;
    }

Main:
    {
        system ("cls");
        long long int chs, chsMain, chs2, chs3, n, sum3, compare=100000000, maxNum, nnsMain, mcrsMain, mlsMain, sMain, mMain, hMain, dMain, yearEntered, yearDiferance, monthDiferance, dayDiferance, month2, monthEntered, first, second,
        third, dayEntered, dayEnteredOriginal, DayInMonthCheck, chsInYear, chsInYear2, yearMain, monthMain, yearCompare, monthCompare, cmpr = 4, LeapYearCode = 0, MonthCode = 0, YearCode=0, CenturyCode=0, dayDiferanceOriginal, chsHere5;
            long_double_t sum2=0.00, sum=0.00, num[1000], sumMLDirect, sumSDirect, sumMDirect, sumHDirect, sumDDirect, sumYDirect, sumLYDirect, sumMCRDirect, sumNNSDirect, sumOriginal=0.00, totalDiferanceLeapYear,
            totalDiferanceDay, totalDiferanceHour, totalDiferanceMinutes, totalDiferanceSeconds, totalDiferanceMilliseconds, totalDiferanceMicroseconds, totalDiferanceNanoseconds, totalDiferanceYear;
                string checkerGet2, sS, sM, sH, sD, yC, mC, dC, sMs, sMcrs, sNns, sS2, sM2, sH2, sD2, sMs2, sMcrs2, sNns2, c, c2, c3, c4, c5, c6, c62, c7, c72, cMcrs, cNns, add, prefix, yearprefix, PrefixHere, DayInMonth,
                timePrefix, timePrefix2, presetInfo1 = "STANDARD", presetInfo2 = "ADVANCED", presetInfo3 = "SCIENTIFIC", presetGet, outputInfo1 = "NORMAL", outputInfo2 = "SCIENTIFIC", outputInfo3 = "AUTO", outputGet,
                outputGet3, outputInfo13 = "DD:MM:YYYY", outputInfo23 = "MM:DD:YYYY", outputInfo33 = "YYYY:MM:DD", outputInfo43 = "YYYY:DD:MM";
                    bool a, b, check;


            /* for unit conversion */

            ifstream preset2; preset2.open("C:\\CalculatorData\\preset.txt"); while(getline(preset2, presetGet));
                ifstream output2; output2.open("C:\\CalculatorData\\outputMode.txt"); while(getline(output2, outputGet));
                    ifstream checker2; checker2.open("C:\\CalculatorData\\preset.txt"); while(getline(checker2, checkerGet2));
                        ifstream output3; output3.open("C:\\CalculatorData\\dateFormat.txt"); while(getline(output3, outputGet3));

        cout<<" TIME TABLE "<<checkerGet2<<endl; cout<<endl;
        cout<<" (1) - UNIT CONVERTOR  - (1) "<<endl;
        cout<<" (2) - TIME CONVERTOR  - (2) "<<endl;
        cout<<" (3) - TIME DIFFERENCE - (3) "<<endl;
        cout<<" (4) - EXTRA OPTIONS   - (4) "<<endl;
        cout<<endl<<" Enter:"; cin>>chsMain;
        while(cin.fail()){error(); cin>>chsMain;}
        while(chsMain > 4 || chsMain < 1){ cout<<endl<<" Enter valid option: "; goto Main;}


    if(chsMain == 1)
    {
        cout<<" UNIT CONVERTOR "<<checkerGet2<<endl; cout<<endl;
        cout<<" (1) - METARS  - (1) "<<endl;
        cout<<" (2) - GRAMS   - (2) "<<endl;
        cout<<" (2) - LITRES  - (3) "<<endl;
        cout<<" (2) - AMPERES - (4) "<<endl;
        cout<<" (2) - KELVIN  - (5) "<<endl;
        cout<<" (2) - MOL     - (6) "<<endl;
        cout<<" (2) - CANDELE - (7) "<<endl;
        cout<<" (2) - SECONDS - (8) "<<endl;
        cout<<endl<<" Enter:";

    }


        if(chsMain == 2)
        {
            system ("cls");
            cout<<" TIME TABLE "<<checkerGet2<<endl; cout<<endl;
            cout<<" (1) - SECONDS - (1) "<<endl;
            cout<<" (2) - MINUTES - (2) "<<endl;
            cout<<" (3) - HOURS   - (3) "<<endl;
            cout<<" (4) - DAYS    - (4) "<<endl;
            if( presetGet == presetInfo3 ){ cmpr = 7;
            cout<<endl; cout<<" SCIENTIFIC MODE EXTRA OPTIONS "<<endl; cout<<endl;
            cout<<" (5) - MILLISECONDS - (5) "<<endl;
            cout<<" (6) - MICROSECONDS - (6) "<<endl;
            cout<<" (7) - NANOSECONDS  - (7) "<<endl;}
            cout<<endl<<" Enter:"; cin>>chs;
            while(cin.fail()){error(); cin>>chs;}
            while(chs > cmpr || chs < 1){ cout<<endl<<" Enter valid option: "; cin>>chs;
            while(cin.fail()){error(); cin>>chs;}}

            Sleep (750); system("cls");
            cout<<" TIME TABLE "<<checkerGet2<<endl; cout<<endl;
            cout<<endl<<" ENTER HOW MANY TIME INSTANCE'S YOU WILL BE ENTERING:"; cin>>n;
            while(cin.fail()){error(); cin>>n;}
            system ("cls");
            cout<<" TIME TABLE "<<checkerGet2<<endl; cout<<endl;

                for(int i=0; i<n; i++)
                {
                cout<<" TIME INSTANCE "<<i+1<<": ";
                cin>>num[i];
                while(cin.fail()){error(); cin>>num[i];}
                sum+=num[i];
                }

                system ("cls");
                cout<<" TIME TABLE "<<checkerGet2<<endl; cout<<endl;

                sumOriginal = sum;

            if (chs == 1)
            {
                sumYDirect = sum / 31557600; sumLYDirect = sum / 31622400; sumDDirect = sum / 86400;
                        sumHDirect = sum / 3600; sumMDirect = sum / 60; sumSDirect = sum;
                            sumMLDirect = sum * 1000; sumMCRDirect = sum * 1000000; sumNNSDirect = sum * 1000000000;
            }
                if (chs == 2)
                {
                    sumYDirect = sum / 525960; sumLYDirect = sum / 527040; sumDDirect = sum / 1440;
                        sumHDirect = sum / 60; sumMDirect = sum; sumSDirect = sum * 60;
                            sumMLDirect = sum * 60000; sumMCRDirect = sum * 60000000; sumNNSDirect = sum * 60000000000;
                }
                    if (chs == 3)
                    {
                        sumYDirect = sum / 8766; sumLYDirect = sum / 8784; sumDDirect = sum / 24;
                            sumHDirect = sum; sumMDirect = sum * 60; sumSDirect = sum * 3600;
                                sumMLDirect = sum * 3600000; sumMCRDirect = sum * 3600000000; sumNNSDirect = sum * 3600000000000;
                    }
                        if (chs == 4)
                        {
                        sumYDirect = sum / 365.25; sumLYDirect = sum / 366; sumDDirect = sum;
                            sumHDirect = sum * 24; sumMDirect = sum * 1440; sumSDirect = sum * 86400;
                                sumMLDirect = sum * 86400000; sumMCRDirect = sum * 86400000000; sumNNSDirect = sum * 86400000000000;
                        }
                            if (chs == 5)
                            {
                            sumYDirect = sum / 31557600000; sumLYDirect = sum / 31622400000; sumDDirect = sum / 86400000;
                                sumHDirect = sum / 3600000; sumMDirect = sum / 60000; sumSDirect = sum / 1000;
                                    sumMLDirect = sum; sumMCRDirect = sum * 1000; sumNNSDirect = sum * 1000000;
                            }
                                if (chs == 6)
                                {
                                sumYDirect = sum / 31557600000000; sumLYDirect = sum / 31622400000000; sumDDirect = sum / 86400000000;
                                    sumHDirect = sum / 3600000000; sumMDirect = sum / 60000000; sumSDirect = sum / 1000000;
                                        sumMLDirect = sum / 1000; sumMCRDirect = sum; sumNNSDirect = sum * 1000;
                                }
                                    if (chs == 7)
                                    {
                                    sumYDirect = sum / 31557600000000000; sumLYDirect = sum / 31622400000000000; sumDDirect = sum / 86400000000000;
                                        sumHDirect = sum / 3600000000000; sumMDirect = sum / 60000000000; sumSDirect = sum / 1000000000;
                                            sumMLDirect = sum / 1000000; sumMCRDirect = sum / 1000 ; sumNNSDirect = sum;
                                    }

            if (sumOriginal != 1){ c7 = "S"; c72 = "s";}
            if (sumOriginal == 1){ c7 = ""; c72 = "";}

            if (chs == 1){ sum /= 86400; c6 = "SECOND"; c62 = "second";}
                if (chs == 2){ sum /= 1440; c6 = "MINUTE"; c62 = "minute";}
                    if (chs == 3){ sum /= 24;  c6 = "HOUR"; c62 = "hour";}
                        if (chs == 4){ sum = sum; c6 = "DAY"; c62 = "day";}
                            if (chs == 5){ sum /= 86400000; c6 = "MILLISECOND"; c62 = "millisecond";}
                                if (chs == 6){ sum /= 86400000000; c6 = "MICROSECOND"; c62 = "microsecond";}
                                    if (chs == 7){ sum /= 86400000000000; c6 = "NANOSECOND"; c62 = "nanosecond";}


            dMain = sum; long_double_t hours = decimal(sum) * 24; hMain = hours;

                long_double_t minutes = decimal(hours) * 60; mMain = minutes;

                    long_double_t seconds = decimal(minutes) * 60; sMain = seconds;;

                        long_double_t milliseconds = decimal(seconds) * 1000; mlsMain = milliseconds;

                            long_double_t microseconds = decimal(milliseconds) * 1000; mcrsMain = microseconds;

                                long_double_t nanoseconds = decimal(microseconds) * 1000; nnsMain = nanoseconds;

                        if (chs == 1 && sumOriginal == ceil(seconds)){
                            sMain = ceil(seconds);mlsMain = 0;}

                            if (chs == 2 && sumOriginal == ceil(minutes)){
                                mMain = ceil(minutes); sMain = 0; mlsMain = 0;}

                                if (chs == 5 && sumOriginal == ceil(milliseconds)){
                                    mlsMain = ceil(milliseconds); mcrsMain = 0; nnsMain = 0;}

                                    if (chs == 6 && sumOriginal == ceil(microseconds)){
                                        mcrsMain = ceil(microseconds); nnsMain = 0;}

                                        if (chs == 7 && sumOriginal == ceil(nanoseconds)){
                                            nnsMain = ceil(nanoseconds);}

                if( mMain < 0 || hMain < 0 || dMain < 0 )
                {
                    system ("cls");
                    cout<<"        ERROR 001 "<<endl;
                    cout<<" ENTERED NUMBER TOO LARGE!"<<endl;
                    Sleep (3000); system ("cls");
                    cout<<" Returning to start"<<endl;
                    Sleep (3000); system ("cls"); goto Main;
                }

                if (microseconds == 1) sMcrs2 = "microsecond"; if (microseconds != 1)  sMcrs2 = "microseconds";
                if (milliseconds == 1) sMs2 = "millisecond"; if (milliseconds != 1) sMs2 = "milliseconds";
                if (nanoseconds == 1) sNns2 = "nanosecond"; if (nanoseconds != 1)  sNns2 = "nanoseconds";
                if (seconds == 1) sS2 = "second";  if (seconds != 1) sS2 = "seconds";
                if (minutes == 1) sM2 = "minute"; if (minutes != 1) sM2 = "minutes";
                if (hours == 1) sH2 = "hour"; if (hours != 1) sH2 = "hours";
                if (sum == 1) sD2 = "day"; if (sum != 1) sD2 = "days";

                if (sumMCRDirect == 1) sMcrs = "microsecond"; if (sumMCRDirect != 1)  sMcrs = "microseconds";
                if (sumNNSDirect == 1) sNns = "nanosecond"; if (sumNNSDirect != 1)  sNns = "nanoseconds";
                if (sumMLDirect == 1) sMs = "millisecond"; if (sumMLDirect != 1) sMs = "milliseconds";
                if (sumSDirect == 1) sS = "second";  if (sumSDirect != 1) sS = "seconds";
                if (sumMDirect == 1) sM = "minute"; if (sumMDirect != 1) sM = "minutes";
                if (sumHDirect == 1) sH = "hour"; if (sumHDirect != 1) sH = "hours";
                if (sumDDirect == 1) sD = "day"; if (sumDDirect != 1) sD = "days";

                if(mcrsMain == 1) cMcrs = "MICROSECOND"; if (mcrsMain != 1)  cMcrs = "MICROSECONDS";
                if(nnsMain == 1) cNns = "NANOSECOND"; if (nnsMain != 1)  cNns = "NANOSECONDS";
                if(mlsMain == 1) c5 = "MILLISECOND"; if(mlsMain != 1) c5 = "MILLISECONDS";
                if(sMain == 1) c4 = "SECOND"; if(sMain != 1) c4 = "SECONDS";
                if(mMain == 1) c = "MINUTE"; if(mMain != 1) c = "MINUTES";
                if(hMain == 1) c2 = "HOUR"; if(hMain != 1) c2 = "HOURS";
                if(dMain == 1) c3 = "DAY"; if(dMain != 1) c3 = "DAYS";

                double yAverage, lyAverage; string yS, sY, sLY;
                if(chs == 1){ yAverage = 31557600; lyAverage = 31622400; yS = "seconds";}
                if(chs == 2){ yAverage = 525960; lyAverage = 527040; yS = "minutes";}
                if(chs == 3){ yAverage = 8766; lyAverage = 8784; yS = "hours";}
                if(chs == 4){ yAverage = 365.25; lyAverage = 366; yS = "days";}
                if(sumYDirect == 1) sY = "year"; if(sumYDirect != 1) sY = "years";
                if(sumLYDirect == 1) sLY = "leap year"; if(sumLYDirect != 1) sLY = "leap years";

                if ( presetGet == presetInfo1 ){
                cout<<" "<<dMain<<" "<<c3<<" | "<<hMain<<" "<<c2<<" | "<<mMain<<" "<<c<<" | "<<sMain<<" "<<c4<<endl;}

                if ( presetGet == presetInfo2 ){
                cout<<" "<<dMain<<" "<<c3<<" | "<<hMain<<" "<<c2<<" | "<<mMain<<" "<<c<<" | "<<sMain<<" "<<c4<<" | "<<mlsMain<<" "<<c5<<endl;}

                if ( presetGet == presetInfo3 ){
                cout<<" "<<dMain<<" "<<c3<<" | "<<hMain<<" "<<c2<<" | "<<mMain<<" "<<c<<" | "<<sMain<<" "<<c4<<" | "<<mlsMain<<" "<<c5<<" | "<<mcrsMain<<" "<<cMcrs<<" | "<<nnsMain<<" "<<cNns<<endl;}

                if ( presetGet == presetInfo2 || presetGet == presetInfo3 )
                {
                    if(presetGet == presetInfo3){ cout<<setprecision(50);}
                    if(presetGet == presetInfo2){ cout<<setprecision(15);}
                    cout<<endl; cout<<" TOTAL ENTERED: "<<sumOriginal<<" "<<c6<<c7<<endl; cout<<endl; cout<<fixed;

                    if ( outputGet == outputInfo1 ) cout<<fixed;
                    if ( outputGet == outputInfo2 ) cout.unsetf(ios_base::floatfield);
                    if ( outputGet == outputInfo3 ){ if ( presetGet == presetInfo1 || presetGet == presetInfo2 ){ cout<<fixed;}
                    if ( presetGet == presetInfo3 ){ cout.unsetf(ios_base::floatfield);}}

                    cout<<" STANDARD CONVERSION | "<<endl;
                    cout<<" DAYS                | "<<sum<<" "<<sD2<<endl;
                    cout<<" HOURS               | "<<hours<<" "<<sH2<<endl;
                    cout<<" MINUTES             | "<<minutes<<" "<<sM2<<endl;
                    cout<<" SECONDS             | "<<seconds<<" "<<sS2<<endl;
                    cout<<" MILLISECONDS        | "<<milliseconds<<" "<<sMs2<<endl;
                    if(presetGet == presetInfo3){
                    cout<<" MICROSECONDS        | "<<microseconds<<" "<<sMcrs2<<endl;
                    cout<<" NANOSECONDS         | "<<nanoseconds<<" "<<sNns2<<endl;}
                }

                cout<<endl;
                cout<<" DIRECT CONVERSION   |"<<endl;
                if ( presetGet == presetInfo1 ){
                cout<<" "<<sumOriginal<<" "<<c62<<c72<<" = "<<endl; cout<<endl;}

                if(YearChecker2.is_open() == true)
                {
                    if( presetGet == presetInfo1){
                    cout<<" AVERAGE             | 1 Year = "<<yAverage<<" "<<yS<<" | 1 Leap Year = "<<lyAverage<<" "<<yS<<endl;}
                    if(chs == 1) cout<<setprecision(20); if(chs == 2) cout<<setprecision(15);
                    if(chs == 3) cout<<setprecision(10); if(chs == 4) cout<<setprecision(5);
                    cout<<" YEARS               | "<<sumYDirect<<" "<<sY<<endl;
                    cout<<" LEAP YEARS          | "<<sumLYDirect<<" "<<sLY<<endl;
                }

                if ( presetGet == presetInfo1 ) cout<<setprecision(5);
                if ( presetGet == presetInfo2 ) cout<<setprecision(15);
                if ( presetGet == presetInfo3 ) cout<<setprecision(50);
                cout<<" DAYS                | "<<sumDDirect<<" "<<sD<<endl;
                cout<<" HOURS               | "<<sumHDirect<<" "<<sH<<endl;
                cout<<" MINUTES             | "<<sumMDirect<<" "<<sM<<endl;
                cout<<" SECONDS             | "<<sumSDirect<<" "<<sS<<endl;
                if( presetGet == presetInfo2 || presetGet == presetInfo3 )
                cout<<" MILLISECONDS        | "<<sumMLDirect<<" "<<sMs<<endl;
                if(presetGet == presetInfo3 ){
                cout<<" MICROSECONDS        | "<<sumMCRDirect<<" "<<sMcrs<<endl;
                cout<<" NANOSECONDS         | "<<sumNNSDirect<<" "<<sNns<<endl;}

                cout<<endl; Sleep(1500);
                cout<<" (1) - BACK - (1)"<<endl;
                cout<<" (2) - EXIT - (2)"<<endl;
                cout<<endl<<" Enter:"; cin>>chs2;
                while(cin.fail()){ error(); cin>>chs2;}
                while(chs2 > 2 || chs2 < 1){ cout<<endl<<" Enter valid option: "; cin>>chs2;
                while(cin.fail()){ error(); cin>>chs2;}}
                if(chs2 == 1 ){ Sleep (500); goto Main;}
                if(chs2 == 2 ){ Sleep (750); system("cls"); exit(0);}
            }

            if(chsMain == 3)
            {
                cout.unsetf(ios_base::floatfield);
                system("cls"); time_t t = time(NULL); tm* timePtr = localtime(&t);
                cout<<" TIME TABLE "<<checkerGet2<<endl;

                if(outputGet3 == outputInfo13 ) { dayEntered = dayEnter(); monthEntered = monthEnter(); month2 = monthEntered - 1; yearEntered = yearEnter(); }

                    if(outputGet3 == outputInfo23 ) {  monthEntered = monthEnter(); month2 = monthEntered - 1; dayEntered = dayEnter(); yearEntered = yearEnter(); }

                        if(outputGet3 == outputInfo33 ) { yearEntered = yearEnter(); monthEntered = monthEnter(); month2 = monthEntered - 1; dayEntered = dayEnter2(monthEntered, yearEntered); }

                            if(outputGet3 == outputInfo43 ) { yearEntered = yearEnter(); dayEntered = dayEnter(); monthEntered = monthEnter(); month2 = monthEntered - 1; }

                                switch (monthEntered)
                                {
                                    case 1: add = "st"; MonthCode = 0; break;  case 2: add = "nd"; MonthCode = 3; break;  case 3: add = "rd"; MonthCode = 3; break;
                                        case 4: add = "th"; MonthCode = 6; break; case 5: add = "th"; MonthCode = 1; break; case 6: add = "th"; MonthCode = 4; break;
                                            case 7: add = "th"; MonthCode = 6; break; case 8: add = "th"; MonthCode = 2; break; case 9: add = "th"; MonthCode = 5; break;
                                                case 10: add = "th"; MonthCode = 0; break; case 11: add = "th"; MonthCode = 3; break; case 12: add = "th"; MonthCode = 5; break;
                                }

                                if( (dayEntered > Return_Days_And_Months(monthEntered, yearEntered)) && (outputGet3 != outputInfo33 ) )
                                {
                                    cout<<endl; cout<<" THE "<<monthEntered<<add<<" MONTH IN THE YEAR "<<yearEntered<<" HAS "<<Return_Days_And_Months(monthEntered, yearEntered)<<" DAYS "<<endl;
                                    cout<<" YOU ENTERED "<<dayEntered<<" DAYS, PLEASE ENTER A NUMBER LOWER OR EQUAL TO "<<Return_Days_And_Months(monthEntered, yearEntered)<<endl;
                                    dayEntered =  dayEnter2(monthEntered, yearEntered);
                                }

                    dayEnteredOriginal = dayEntered;
                    yearDiferance = Return_Time_Diferance_Year(yearEntered);
                    monthDiferance = Return_Time_Diferance_Month(monthEntered);
                    dayDiferance = Return_Time_Diferance_Day(dayEntered); dayDiferanceOriginal = dayDiferance;

                    long long int monthDiferance2 = monthDiferance, dayDiferance2 = dayDiferance;
                    if( ( yearEntered < ((timePtr->tm_year)+1900) && (monthEntered >= ((timePtr->tm_mon)+1) && ( dayEntered < (timePtr->tm_mday) ) ) ) ) b = true; else b = false;
                    if ( ( yearEntered > ((timePtr->tm_year)+1900) && (monthEntered > ((timePtr->tm_mon)+1) && ( dayEntered > (timePtr->tm_mday)) || dayEntered < (timePtr->tm_mday) || dayEntered > (timePtr->tm_mday) ) )  ||
                        ( yearEntered > ((timePtr->tm_year)+1900) && (monthEntered < ((timePtr->tm_mon)+1) && ( dayEntered > (timePtr->tm_mday) || dayEntered < (timePtr->tm_mday) || dayEntered > (timePtr->tm_mday) ) ) ) ||
                        ( yearEntered > ((timePtr->tm_year)+1900) && (monthEntered == ((timePtr->tm_mon)+1) && ( dayEntered > (timePtr->tm_mday) || dayEntered < (timePtr->tm_mday) || dayEntered > (timePtr->tm_mday) ) ) ) ||
                        ( yearEntered == ((timePtr->tm_year)+1900) && (monthEntered >= ((timePtr->tm_mon)+1) && ( dayEntered > (timePtr->tm_mday) ) ) ) )
                         check = true; else check = false;

                                if(check == true)
                                {
                                    if( monthDiferance == 0 ){ monthDiferance+=12; yearDiferance-=1; }

                                        if (monthEntered < ((timePtr->tm_mon)+1) )
                                        {
                                            monthDiferance = 12 - monthDiferance;
                                            if (monthDiferance < ((timePtr->tm_mon)+1) || yearDiferance != 0 ) yearDiferance -= 1;
                                        }

                                            if (dayEntered < (timePtr->tm_mday) )
                                            {
                                                    dayDiferance = Return_Days_And_Months(month2, yearEntered) - dayDiferance;
                                                        if (monthDiferance != 0 ) monthDiferance -= 1;
                                            }
                                }

                                if(check == false)
                                {
                                    if(yearEntered != ((timePtr->tm_year)+1900) && a == true && b == false )
                                    {
                                        if(dayEntered > (timePtr->tm_mday) ) {
                                            dayDiferance = 31 - (dayEntered - (timePtr->tm_mday) );}
                                    }

                                    if(yearEntered > ((timePtr->tm_year)+1900) )
                                    {
                                        if((12 - monthDiferance) <= ((timePtr->tm_mon)+1) ){
                                            monthDiferance = 12 - monthDiferance; yearDiferance = yearDiferance - 1; }

                                            if((12 - monthDiferance) > ((timePtr->tm_mon)+1) && yearEntered < ((timePtr->tm_year)+1900)){
                                                monthDiferance = 12 - monthDiferance; yearDiferance = yearDiferance - 1; }
                                    }
                                        if(yearEntered < ((timePtr->tm_year)+1900) )
                                        {
                                            if(monthEntered > ((timePtr->tm_mon)+1) ) {
                                                monthDiferance = 12 - monthDiferance; yearDiferance = yearDiferance - 1; }
                                                if(monthEntered < ((timePtr->tm_mon)+1)) { monthDiferance *=1; yearDiferance *=1;  }
                                        }
                                                        if( ( dayEntered > (timePtr->tm_mday) || monthEntered > ((timePtr->tm_mon)+1) ) && b == false)
                                                        { monthDiferance -=1; dayDiferance = 31 - dayDiferanceOriginal; }
                                }

                                if(dayDiferance >= 31) { dayDiferance -= dayDiferance; monthDiferance+=1; }

                                    if(check == false)
                                    {
                                        if(monthDiferance2 < 1){ monthDiferance = 12 - (-1 * monthDiferance); yearDiferance -=1; }
                                        if(monthDiferance >= 12 && monthDiferance > 1 ){ monthDiferance -= 12; yearDiferance +=1; }
                                    }

                                        if(check == true)
                                        {
                                            if(monthDiferance >= 12) { yearDiferance+=1; monthDiferance-=12;  }
                                                if(dayDiferance >= Return_Days_And_Months(month2, yearEntered)) {
                                                        monthDiferance+=1; dayDiferance-=Return_Days_And_Months(month2, yearEntered); }
                                        }

                        totalDiferanceLeapYear = (yearDiferance * 0.99795) + ( monthDiferance * 0.0833334) + (dayDiferance * 0.0027322404371585);
                        totalDiferanceYear = (yearDiferance * 1) + ( monthDiferance * 0.0833334) + (dayDiferance * 0.0027378507871321); totalDiferanceDay = (yearDiferance * 365.25) + ( monthDiferance * 30.4167) + dayDiferance;
                        totalDiferanceHour = totalDiferanceDay * 24; totalDiferanceMinutes = totalDiferanceHour * 60; totalDiferanceSeconds = totalDiferanceMinutes * 60;
                        totalDiferanceMilliseconds = totalDiferanceSeconds * 1000; totalDiferanceMicroseconds = totalDiferanceMilliseconds * 1000; totalDiferanceNanoseconds = totalDiferanceMicroseconds * 1000;

                            YearCode = ((yearEntered % 100) + ((yearEntered % 100) / 4)) % 7;
                            if ((yearEntered >= 1700 && yearEntered < 1800) || (yearEntered >= 2100 && yearEntered < 2200)) CenturyCode = 4;
                            if ((yearEntered >= 1800 && yearEntered < 1900 ) || (yearEntered >= 2200 && yearEntered < 2300)) CenturyCode = 2;
                            if ((yearEntered >= 1900 && yearEntered < 2000 ) || (yearEntered >= 2300 && yearEntered < 2400)) CenturyCode = 0;
                            if (yearEntered >= 2000 && yearEntered < 2100 ) CenturyCode = 6;
                            if(Return_Days_And_Months(monthEntered, yearEntered) == 29) LeapYearCode = 1;
                            if(Return_Days_And_Months(monthEntered, yearEntered) != 29) LeapYearCode = 0;

                    if(outputGet3 == outputInfo13 ) { first = dayEntered; second = monthEntered; third = yearEntered; }
                    if(outputGet3 == outputInfo23 ) { first = monthEntered; second = dayEntered; third = yearEntered; }
                    if(outputGet3 == outputInfo33 ) { first = yearEntered; second = dayEntered; third = monthEntered; }
                    if(outputGet3 == outputInfo43 ) { first = yearEntered; second = dayEntered; third = monthEntered; }

                    if( check == true || (yearEntered > ((timePtr->tm_year)+1900)) || (yearEntered >= ((timePtr->tm_year)+1900) && (monthEntered > ((timePtr->tm_mon)+1) && ( dayEntered <= (timePtr->tm_mday) || dayEntered >= (timePtr->tm_mday) ) ) ) )
                    { timePrefix = "UNTILL "; timePrefix2 = " IT'S "; } else{ timePrefix = "SINCE "; timePrefix2 = " IT'S BEEN ";}
                    if(yearDiferance == 1) yC = " YEAR"; if(yearDiferance != 1) yC = " YEARS";
                    if(monthDiferance == 1) mC = " MONTH"; if(monthDiferance != 1) mC = " MONTHS";
                    if(dayDiferance == 1) dC = " DAY"; if(dayDiferance != 1) dC = " DAYS";

                    yearCompare = (timePtr->tm_year)+1900; monthCompare = (timePtr->tm_mon)+1;
                    if((yearEntered == yearCompare && monthEntered < monthCompare) || (yearEntered < yearCompare)){ prefix = " MONTH HAD "; PrefixHere = " WAS ";}
                    if((yearEntered == yearCompare && monthEntered > monthCompare) || (yearEntered > yearCompare)){ prefix = " MONTH WILL HAVE "; PrefixHere = " WILL BE ";}
                    if((yearEntered == yearCompare && monthEntered == monthCompare) && ((timePtr->tm_mday) == dayEntered)) PrefixHere = " IS ";
                    if((yearEntered == yearCompare && monthEntered == monthCompare) && ((timePtr->tm_mday) < dayEntered)) PrefixHere = " WILL BE ";
                    if((yearEntered == yearCompare && monthEntered == monthCompare) && ((timePtr->tm_mday) > dayEntered)) PrefixHere = " WAS ";
                    if(yearEntered < 1700 || yearEntered > 2300){ PrefixHere = " STARTS WITH "; dayEntered = 1; }
                    if(yearEntered > 1000 && yearEntered != yearCompare) yearprefix = " IN ";
                    if(yearEntered == yearCompare) yearprefix = " IN THIS YEAR, THE YEAR ";
                    if( yearEntered <= 1000) yearprefix = " IN THE YEAR ";

                            DayInMonthCheck = (YearCode + MonthCode + CenturyCode + dayEntered - LeapYearCode) % 7;
                            switch (DayInMonthCheck)
                            {
                                case 0: DayInMonth = "SUNDAY"; break; case 1: DayInMonth = "MONDAY"; break; case 2: DayInMonth = "TUESDAY"; break; case 3: DayInMonth = "WEDNESDAY"; break;
                                case 4: DayInMonth = "THURSDAY"; break; case 5: DayInMonth = "FRIDAY"; break; case 6: DayInMonth = "SATURDAY"; break;
                            }

                        system("cls"); cout<<" TIME TABLE "<<checkerGet2<<endl; cout<<endl; cout<<" DATE FORMAT | "<<outputGet3<<" | "<<endl;
                        if(yearEntered != yearCompare || monthCompare != monthEntered )
                        {
                            cout<<endl; cout<<yearprefix<<yearEntered<<" THE "<<monthEntered<<add<<prefix<<Return_Days_And_Months(monthEntered, yearEntered)<<" DAYS"<<endl;
                            cout<<endl; cout<<" "<<first<<"/"<<second<<"/"<<third<<PrefixHere<<"A "<<DayInMonth<<endl;
                        }

                        if(yearEntered == yearCompare && monthCompare == monthEntered )
                        {
                            cout<<endl; cout<<" THIS MONTH HAS "<<Return_Days_And_Months(monthEntered, yearEntered)<<" DAYS "<<endl;
                                if( (timePtr->tm_mday) != dayEntered ){ cout<<endl; cout<<" "<<first<<"/"<<second<<"/"<<third<<PrefixHere<<"A "<<DayInMonth<<endl;}
                                if( (timePtr->tm_mday) == dayEntered ){ cout<<endl; cout<<" TODAY IS A "<<DayInMonth<<endl; }
                        }
                                if( (timePtr->tm_mday) == dayEntered && monthCompare == monthEntered && yearCompare == yearEntered ) a = false;
                                else a = true; if( a == true )
                                {
                                    if(outputGet3 == outputInfo13 ) first = dayEnteredOriginal; if((outputGet3 == outputInfo23) || (outputGet3 == outputInfo43 )) second = dayEnteredOriginal;  if(outputGet3 == outputInfo33 ) third = dayEnteredOriginal;
                                    cout<<endl; cout<<timePrefix2<<yearDiferance<<yC<<" | "<<monthDiferance<<mC<<" | "<<dayDiferance<<dC<<" | "<<timePrefix<<first<<"/"<<second<<"/"<<third<<endl;
                                    cout<<endl; cout<<" CONVERTED           |"<<endl;
                                    if ( outputGet == outputInfo1 ) cout<<fixed;
                                    if ( outputGet == outputInfo2 ) cout.unsetf(ios_base::floatfield);
                                    if ( outputGet == outputInfo3 ){ if ( presetGet == presetInfo1 || presetGet == presetInfo2 ){ cout<<fixed;}
                                    if ( presetGet == presetInfo3 ){ cout.unsetf(ios_base::floatfield);}}
                                    if(YearChecker2.is_open() == true){
                                    if(chs == 1) cout<<setprecision(20); if(chs == 2) cout<<setprecision(15);
                                    if(chs == 3) cout<<setprecision(10); if(chs == 4) cout<<setprecision(5);
                                    cout<<" YEARS               | "<<totalDiferanceYear<<" years"<<endl;
                                    cout<<" LEAP YEARS          | "<<totalDiferanceLeapYear<<" leap years"<<endl;}
                                    cout<<" DAYS                | "<<ceil(totalDiferanceDay)<<" days"<<endl;
                                    cout<<" HOURS               | "<<ceil(totalDiferanceHour)<<" hours"<<endl;
                                    cout<<" MINUTES             | "<<ceil(totalDiferanceMinutes)<<" minutes"<<endl;
                                    cout<<" SECONDS             | "<<ceil(totalDiferanceSeconds)<<" seconds"<<endl;
                                    if( presetGet == presetInfo2 || presetGet == presetInfo3 )
                                    cout<<" MILLISECONDS        | "<<ceil(totalDiferanceMilliseconds)<<" milliseconds"<<endl;
                                    if(presetGet == presetInfo3 ){
                                    cout<<" MICROSECONDS        | "<<totalDiferanceMicroseconds<<" microseconds"<<endl;
                                    cout<<" NANOSECONDS         | "<<totalDiferanceNanoseconds<<" nanoseconds"<<endl;}
                                }

                cout<<endl; Sleep(1500);
                cout<<" (1) - BACK  - (1)"<<endl;
                cout<<" (2) - EXIT  - (2)"<<endl;
                cout<<endl<<" Enter:"; cin>>chsInYear;
                while(cin.fail()){ error(); cin>>chsInYear;}
                while(chsInYear > 2 || chsInYear < 1){ cout<<endl<<" Enter valid option: "; cin>>chsInYear;
                while(cin.fail()){ error(); cin>>chsInYear;}}
                if(chsInYear == 1 ){ Sleep (500); goto Main;}
                if(chsInYear == 2 ){ Sleep (750); system("cls"); exit(0);}
            }

                if(chsMain == 4)
                {
                    cout<<endl; cout<<" extra options: "<<endl;
                    cout<<" (1) -      YEAR CONVERSION OPTIONS     - (1) "<<endl;
                    cout<<" (2) -    DISABLE DO NOT ASK FOR MODE   - (2) "<<endl;
                    cout<<" (3) -        DATE FORMAT OPTIONS       - (3) "<<endl;
                    cout<<" (4) -           OUTPUT OPTIONS         - (4) "<<endl;
                    cout<<" (5) -            CHANGE MODE           - (5) "<<endl;
                    cout<<" (6) -              RESTART             - (6) "<<endl;
                    cout<<" (7) -               BACK               - (7) "<<endl;
                    cout<<" (8) -               EXIT               - (8) "<<endl;
                    cout<<endl<<" Enter:"; cin>>chs3;
                    while(cin.fail()){error(); cin>>chs3;}
                    while(chs3 > 8 || chs3 < 1){ cout<<endl<<" Enter valid option: "; cin>>chs3;
                    while(cin.fail()){error(); cin>>chs3;}}

                        if (chs3 == 1)
                        {
                            ifstream YearChecker; YearChecker.open("C:\\CalculatorData\\Year");
                            if(YearChecker.is_open() == true)
                            {
                                cout<<" YEAR CONVERSION IS CURRENTLY ENABLED "<<endl;
                                cout<<" WOULD YOU LIKE TO DISABLE IT? (1) - yes | (2) - no"<<endl;
                                int chsYear; cout<<endl<<" Enter:"; ;cin>>chsYear;
                                while(cin.fail()){error(); cin>>chsYear;}
                                while(chsYear > 2 || chsYear < 1){cout<<endl<<" Enter valid option: "; cin>>chsYear;
                                while(cin.fail()){error(); cin>>chsYear;}}
                                if (chsYear == 1 )
                                {
                                    YearChecker.close(); remove("C:\\CalculatorData\\Year");
                                    system("cls"); cout<<" DISABLED"<<endl; Sleep(650); system("cls");
                                    cout<<" Returning to start"<<endl; Sleep(2000); goto Main;
                                }
                                    if (chsYear == 2 ){Sleep(1500); goto Main;}
                            }
                                if(YearChecker.is_open() == false)
                                {
                                    cout<<" YEAR CONVERSION HAS NOT BEEN ENABLED YET "<<endl;
                                    cout<<" WOULD YOU LIKE TO ENABLE IT? (1) - yes | (2) - no"<<endl;
                                    int chsYear2; cout<<endl<<" Enter:"; ;cin>>chsYear2;
                                    while(cin.fail()){error(); cin>>chsYear2;}
                                    while(chsYear2 > 2 || chsYear2 < 1){cout<<endl<<" Enter valid option: "; cin>>chsYear2;
                                    while(cin.fail()){error(); cin>>chsYear2;}}
                                    if (chsYear2 == 1 )
                                    {
                                        ofstream year; year.open("C:\\CalculatorData\\Year");
                                        system("cls"); cout<<" ENABLED"<<endl; Sleep(650); system("cls");
                                        cout<<" Returning to start"<<endl; Sleep(2000); goto Main;
                                    }
                                        if (chsYear2 == 2 ){Sleep(1500); goto Main;}
                                }
                        }

                        if (chs3 == 2)
                        {
                        Mainchecker.open("C:\\CalculatorData\\dontDisturb");
                            if( Mainchecker.is_open() == true )
                            {
                                Mainchecker.close();
                                remove ("C:\\CalculatorData\\dontDisturb");
                                cout<<" DO NOT ASK FOR MODE DISABLED"<<endl;
                                Sleep(1500); goto Main;
                            }
                                if( Mainchecker.is_open() == false )
                                {
                                    cout<<" DO NOT ASK FOR MODE HAS NOT BEEN ENABLED YET"<<endl;
                                    cout<<" WOULD YOU LIKE TO ENABLE IT? (1) - yes | (2) - no"<<endl;
                                    int chsHere2; cout<<endl<<" Enter:"; ;cin>>chsHere2;
                                    while(cin.fail()){error(); cin>>chsHere2;}
                                    while(chsHere2 > 2 || chsHere2 < 1){cout<<endl<<" Enter valid option: "; cin>>chsHere2;
                                    while(cin.fail()){error(); cin>>chsHere2;}}
                                    if (chsHere2 == 1 ) {ofstream no; no.open("C:\\CalculatorData\\dontDisturb"); Sleep(1500); goto Main;}
                                    if (chsHere2 == 2 ) Sleep(1500); goto Main;
                                }
                        }

                        if (chs3 == 3)
                        {
                            ifstream checker2Checker; checker2Checker.open("C:\\CalculatorData\\dateFormat.txt");
                            if (checker2Checker.is_open() == true )
                            {
                                cout<<" CURRENT OUTPUT OPTIONS: "<<outputGet3<<endl;
                                cout<<" WOULD YOU LIKE TO CHANNGE IT? (1) - yes | (2) - no"<<endl;
                                int chsHere5; cout<<endl<<" Enter:"; ;cin>>chsHere5;
                                while(cin.fail()){error(); cin>>chsHere5;}
                                while(chsHere5 > 2 || chsHere5 < 1){cout<<endl<<" Enter valid option: "; cin>>chsHere5;
                                while(cin.fail()){error(); cin>>chsHere5;}}
                                if (chsHere5 == 1 ){Sleep(1500); goto DateFormatCreate;}
                                if (chsHere5 == 2 ){Sleep(1500); goto Main;}
                            }

                            if (checker2Checker.is_open() == false ){
                                Sleep(1500); goto DateFormatCreate;}
                        }

                        if (chs3 == 4)
                        {
                            ifstream checker2Checker; checker2Checker.open("C:\\CalculatorData\\outputMode.txt");
                            if (checker2Checker.is_open() == true )
                            {
                                cout<<" CURRENT OUTPUT OPTIONS: "<<outputGet<<endl;
                                cout<<" WOULD YOU LIKE TO CHANNGE IT? (1) - yes | (2) - no"<<endl;
                                int chsHere3; cout<<endl<<" Enter:"; ;cin>>chsHere3;
                                while(cin.fail()){error(); cin>>chsHere3;}
                                while(chsHere3 > 2 || chsHere3 < 1){cout<<endl<<" Enter valid option: "; cin>>chsHere3;
                                while(cin.fail()){error(); cin>>chsHere3;}}
                                if (chsHere3 == 1 ){Sleep(1500); goto ModeCreate;}
                                if (chsHere3 == 2 ){Sleep(1500); goto Main;}
                            }

                            if (checker2Checker.is_open() == false ){
                                Sleep(1500); goto ModeCreate;}
                        }

                        if(chs3 == 5) { Sleep (750); system("cls"); goto Preset;}
                        if(chs3 == 6) { Sleep (750); system("C:\\restart.bat"); system("cls"); exit(0);}
                        if(chs3 == 7){ Sleep (250); system("cls"); goto Main;}
                        if(chs3 == 8){ Sleep (750); system("cls"); exit(0);}

            }

    }

_Exit(0);
}
