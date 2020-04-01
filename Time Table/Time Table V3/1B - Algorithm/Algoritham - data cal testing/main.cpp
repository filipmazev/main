#include <iostream>
#include <windows.h>
#include <float.h>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <cmath>
#include <gmp.h>
#include <cstdint>
#include <iomanip>
#include <ctime>

#ifdef  USE_FLOAT128
    typedef __float128  long_double_t;
#else
    typedef long double long_double_t;
#endif
using namespace std;

void error()
{
    cin.clear();
    cin.ignore(DBL_MAX, '\n');
    cout<<endl<<" you can only enter numbers: ";
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
    if( ((timePtr->tm_year)+1900) > year ) yearMain = ((timePtr->tm_year)+1900) - year;
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

int main()
{
    A:
    {
        long long int chs, chsMain, chs2, chs3, n, sum3, compare=100000000, maxNum, nnsMain, mcrsMain, mlsMain, sMain, mMain, hMain, dMain, yearEntered, yearDiferance, monthDiferance, dayDiferance, i = 0, hint = 0,
        monthEntered, dayEntered, dayEnteredOriginal, DayInMonthCheck, chsInYear, chsInYear2, yearMain, monthMain, yearCompare, monthCompare, cmpr = 4, LeapYearCode = 0, MonthCode = 0, YearCode=0, CenturyCode=0;
            long_double_t sum2=0.00, sum=0.00, num[1000], sumMLDirect, sumSDirect, sumMDirect, sumHDirect, sumDDirect, sumYDirect, sumLYDirect, sumMCRDirect, sumNNSDirect, sumOriginal=0.00, totalDiferanceLeapYear,
            totalDiferanceDay, totalDiferanceHour, totalDiferanceMinutes, totalDiferanceSeconds, totalDiferanceMilliseconds, totalDiferanceMicroseconds, totalDiferanceNanoseconds, totalDiferanceYear;
                string checkerGet2, sS, sM, sH, sD, yC, mC, dC, sMs, sMcrs, sNns, sS2, sM2, sH2, sD2, sMs2, sMcrs2, sNns2, c, c2, c3, c4, c5, c6, c62, c7, c72,
                cMcrs, cNns, add, prefix, yearprefix, PrefixHere, DayInMonth, timePrefix, timePrefix2; bool a, check;

        time_t t = time(NULL); tm* timePtr = localtime(&t);
                cout<<" TIME TABLE "<<checkerGet2<<endl;
                cout<<endl<<" ENTER YEAR :"; cin>>yearEntered;
                while(cin.fail()){error(); cin>>yearEntered;}
                    cout<<endl<<" ENTER MONTH NUMBER :"; cin>>monthEntered;
                    while(cin.fail()){error(); cin>>monthEntered;}
                    while(monthEntered>12 || monthEntered<1){ cout<<endl<<" Enter valid option: "; cin>>monthEntered;
                    while(cin.fail()){error(); cin>>monthEntered;}}
                        cout<<endl<<" ENTER DAY NUMBER :"; cin>>dayEntered;
                        while(cin.fail()){error(); cin>>dayEntered;}
                        while(dayEntered > (Return_Days_And_Months(monthEntered, yearEntered)) || dayEntered < 1){ cout<<endl<<" Enter valid option: "; cin>>dayEntered;
                        while(cin.fail()){error(); cin>>dayEntered;}}


                        cout<<" IT'S "<<yearDiferance<<" YEARS | "<<monthDiferance<<" MONTHS | "<<dayDiferance<<" DAYS | "<<"UNTILL "<<dayEntered<<"/"<<monthEntered<<"/"<<yearEntered<<endl;
            }

                    system("PAUSE");
    goto A;
}

