#include <iostream>
#include <sstream>
#include <cstdlib>
#include <windows.h>
#include <math.h>
#include <gmpxx.h>
#include <gmp.h>
#include <cstdint>
#include <float.h>
#include <stdio.h>
#include <iomanip>
#include <fstream>

#ifdef  USE_FLOAT128
    typedef __float128  long_double_t;
#else
    typedef long double long_double_t;
#endif

using namespace std;
int digits(long_double_t x);
int digits2(int x2);

void error()
{
cin.clear();
cin.ignore(INT_MAX, '\n');
cout<<endl<<" you can only enter numbers: ";
}

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

long long int flip(long long int  a)
{
    long long int  b=0, c=0;
    while (a != 0 ){
    b = a % 10; a = a / 10;
    c = c * 10 + b;}
    return c;
}

//redits method
long_double_t decimal(long_double_t x)
{
  x -= (long long int) x;
  return x;
}

//my method
long_double_t decimal2(long_double_t x1)
{
    long long int x2 = x1 * digits2(digits(x1));
    long_double_t x3 = x2 % digits2(digits(x1));
    long_double_t x4 = x3 / digits2(digits(x1));

    return x4;
}

long_double_t HMain(long_double_t day)
{
    long_double_t hour1 = decimal2(day) * 24;
    long_double_t hour2 = hour1;

    return hour2;
}

long_double_t MMain(long_double_t hour)
{
    long_double_t minute1 = decimal2(hour) * 60;
    long_double_t minute2 = minute1;

    return minute2;
}

long_double_t SMain(long_double_t minute)
{
    long_double_t second1 = decimal2(minute) * 60;
    long_double_t second2 = second1;

    return second2;
}

long_double_t MlsMain(long_double_t second)
{
    long_double_t millisecond1 = decimal2(second) * 60;
    long_double_t millisecond2 = millisecond1;

    return millisecond2;
}

int main(void)
{
    long long int test;
    cin>>test;
    cout<<flip(test)<<endl;
    system("PAUSE");


    long long int chs, c3; string c1, c2;
    cout<<" (1) - SECONDS - (1) "<<endl;
    cout<<" (2) - MINUTES - (2) "<<endl;
    cout<<" (3) - HOURS   - (3) "<<endl;
    cout<<" (4) - DAYS    - (4) "<<endl;
    cout<<endl<<" Enter:"; cin>>chs;
    while(cin.fail()){error(); cin>>chs;}
    while(chs > 4 || chs < 1){ cout<<endl<<" Enter valid option: "; cin>>chs;
    while(cin.fail()){error(); cin>>chs;}}
    if(chs == 1){c1 = "seconds"; c2 = " / "; c3 = 86400;} if(chs == 2){ c1 = "minutes"; c2 = " / "; c3 = 1440;}
    if(chs == 3){c1 = "hours"; c2 = " / "; c3 = 24;} if (chs == 4){ c1 = "days"; c2 = " * "; c3 = 1;}
    long_double_t x, xOriginal; cout<<endl<<"Enter "<<c1<<": "; cin>>x; xOriginal = x;

    long long int days, hoursMain, minutesMain, secondsMain, millisecondsMain;
    long_double_t hours, minutes, seconds, milliseconds;

                x /= c3; days = x;
                    hours = decimal(x) * 24; hoursMain = hours;
                        minutes = MMain(hours); minutesMain = minutes;
                            seconds = SMain(minutes); secondsMain = seconds;
                                milliseconds = decimal(seconds) * 1000; millisecondsMain = milliseconds;

            cout<<days<<" DAYS | "<<hoursMain<<" HOURS | "<<minutesMain<<" MINUTES | "<<secondsMain<<" SECONDS | "<<millisecondsMain<<" MILLISECONDS"<<endl;

system("PAUSE");
_Exit(0);
}
