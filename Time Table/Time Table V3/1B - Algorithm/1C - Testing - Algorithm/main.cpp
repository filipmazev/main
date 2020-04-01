#include <iostream>
#include <sstream>
#include <cmath>
#include <cstdlib>
#include <windows.h>
#include <float.h>
#include <limits.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <gmp.h>
#include <cfloat>
#include <cstdint>

#ifdef  USE_FLOAT128
    typedef __float128  long_double_t;
#else
    typedef long double long_double_t;
#endif

using namespace std;

using namespace std;
int digits(long_double_t x);
int digits2(int x2);

void error()
{
cin.clear();
cin.ignore(DBL_MAX, '\n');
cout<<endl<<" you can only enter numbers: ";
}

int64_t digits(long_double_t x)
{
    stringstream sso;
    sso<< abs( x - (int64_t)x );
    string num;
    sso>>num;
    int result = num.length()-2;
    return result;
}

int64_t digits2(int64_t x2)
{
    int64_t digit = 1;
    while (x2 >= 0){
    digit *= 10;
    x2 -= 1;}
    return digit;
}

int main()
{

    int64_t chs, c3; string c1, c2;
    cout<<" (1) - SECONDS - (1) "<<endl;
    cout<<" (2) - MINUTES - (2) "<<endl;
    cout<<" (3) - HOURS   - (3) "<<endl;
    cout<<" (4) - DAYS    - (4) "<<endl;
    cout<<endl<<" Enter:"; cin>>chs;
    while(cin.fail()){error(); cin>>chs;}
    while(chs > 4 || chs < 1){ cout<<endl<<" Enter valid option: "; cin>>chs;}
    if(chs == 1){c1 = "seconds"; c2 = " / "; c3 = 86400;} if(chs == 2){ c1 = "minutes"; c2 = " / "; c3 = 1440;}
    if(chs == 3){c1 = "hours"; c2 = " / "; c3 = 24;} if (chs == 4){ c1 = "days"; c2 = " * "; c3 = 1;}
    long_double_t x, xOriginal; cout<<endl<<"Enter "<<c1<<": "; cin>>x; xOriginal = x;
    if(chs == 1) x /= 86400; if(chs == 2) x /= 1440;
    if(chs == 3) x /= 24; if (chs == 4) x *= 1;

    cout<<fixed; cout<<xOriginal<<endl; cout<<xOriginal<<c2<<c3<<" = "<<c1<<" -> days"<<" | or "<<x<<" days"<<endl;
    cout<<endl;
    cout<<"DAYS -> HOURS"<<endl;
    int64_t days = x, days1 = x * digits2(digits(x));
    cout<<"days: "<<days<<" -> days = "<<xOriginal<<c2<<c3<<" converted into a int"<<endl;
    cout<<"days1: "<<days1<<" -> days1 = "<<x<<" * "<<digits2(digits(x))<<endl;
    int64_t days11 = ceil(days1);
    int64_t days2 = days11 % digits2(digits(x));
    cout<<"days2: "<<days2<<" -> days2 = "<<days1<<" modulo "<<digits2(digits(x))<<endl;
    long_double_t days3 = days2 / digits2(digits(x));
    cout<<"days3: "<<days3<<" -> days3 = "<<days2<<" divided "<<digits2(digits(x))<<endl;
    long_double_t hours = days3 * 24; int64_t hoursMain = hours;
    cout<<"hours: "<<hours<<" -> hours = "<<days3<<" * 24(hours)"<<endl;
    cout<<endl;

        cout<<"HOURS -> MINUTES"<<endl;
        int64_t hours1 = hours * digits2(digits(hours));
        cout<<"hours1: "<<hours1<<" -> hours1 = "<<hours<<" * "<<digits2(digits(hours))<<endl;
        long_double_t  hours2 = hours1 % digits2(digits(hours));
        cout<<"hours2: "<<hours2<<" -> hours2 = "<<hours1<<" modulo "<<digits2(digits(hours))<<endl;
        long_double_t hours3 = hours2 / digits2(digits(hours));
        cout<<"hours3: "<<hours3<<" -> hours3 = "<<hours2<<" divided "<<digits2(digits(hours))<<endl;
        long_double_t minutes = hours3 * 60; int64_t minutesMain = minutes;
        cout<<"minutes: "<<minutes<<" -> minutes = "<<hours3<<" * 60(minutes)"<<endl;
        cout<<"minutesMain: "<<minutesMain<<" -> minutesMain = "<<minutes<<" converted into a int"<<endl;
        cout<<endl;

            cout<<"MINUTES -> SECONDS"<<endl;
            int64_t minutes1 = minutes * digits2(digits(minutes));
            cout<<"minutes1: "<<minutes1<<" -> minutes1 = "<<minutes<<" * "<<digits2(digits(minutes))<<endl;
            long_double_t minutes2 = minutes1 % digits2(digits(minutes));
            cout<<"minutes2: "<<minutes2<<" -> minutes2 = "<<minutes1<<" modulo "<<digits2(digits(minutes))<<endl;;
            long_double_t minutes3 = minutes2 / digits2(digits(minutes));
            cout<<"minutes3: "<<minutes3<<" -> minutes3 = "<<minutes2<<" divided "<<digits2(digits(minutes))<<endl;
            long_double_t seconds = minutes3 * 60; int64_t secondsMain = seconds;
            cout<<"seconds: "<<seconds<<" -> seconds = "<<minutes3<<" * 60(seconds)"<<endl;
            cout<<"secondsMain: "<<secondsMain<<" -> secondsMain = "<<seconds<<" converted into a int"<<endl;
            cout<<endl;

                cout<<"SECONDS -> MILLISECONDS"<<endl;
                int64_t seconds1 = seconds * digits2(digits(seconds));
                cout<<"seconds1: "<<minutes1<<" -> seconds1 = "<<seconds<<" * "<<digits2(digits(seconds))<<endl;
                long_double_t seconds2 = seconds1 % digits2(digits(seconds));
                cout<<"seconds2: "<<seconds2<<" -> seconds2 = "<<seconds1<<" modulo "<<digits2(digits(seconds))<<endl;;
                long_double_t seconds3 = seconds2 / digits2(digits(seconds));
                cout<<"seconds3: "<<seconds3<<" -> seconds3 = "<<seconds2<<" divided "<<digits2(digits(seconds))<<endl;
                long_double_t milliseconds = seconds3 * 1000; int64_t millisecondsMain = milliseconds;
                cout<<"milliseconds: "<<milliseconds<<" -> milliseconds = "<<seconds3<<" * 1000(milliseconds)"<<endl;
                cout<<"millisecondsMain: "<<millisecondsMain<<" -> millisecondsMain = "<<milliseconds<<" converted into a int"<<endl;
                cout<<endl;

                if (chs == 1 && xOriginal == ceil(seconds)){ secondsMain = ceil(seconds); millisecondsMain = 0;}
                    if (chs == 2 && xOriginal == ceil(minutes)){ minutesMain = ceil(minutes); secondsMain = 0; millisecondsMain = 0;}
                        if (chs == 3 && xOriginal == ceil(hours)){ hoursMain = ceil(hours); minutesMain = 0; secondsMain = 0; millisecondsMain = 0;}

    cout<<days<<" DAYS | "<<hoursMain<<" HOURS | "<<minutesMain<<" MINUTES | "<<secondsMain<<" SECONDS | "<<millisecondsMain<<" MILLISECONDS"<<endl;

system("PAUSE");
_Exit(0);
}
