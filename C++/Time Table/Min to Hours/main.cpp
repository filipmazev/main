#include <iostream>
#include <windows.h>
#include <float.h>
#include <limits.h>
#include <cstdlib>
using namespace std;

void error()
{
cin.clear();
cin.ignore(DBL_MAX, '\n');
cout<<endl<<" you can only enter numbers: ";
}

int main()
{
    A:
    {
        system ("cls");
        int chs;
        cout<<"WHAT WILL YOU BE ENTERING "<<endl;
        cout<<endl;
        cout<<"(1) - minutes - (1) "<<endl;
        cout<<"(2) -  hours  - (2) "<<endl;
        cout<<"(3) -  days   - (3) "<<endl;
        cout<<endl<<"Enter:";
        cin>>chs;
        while(cin.fail()){error(); cin>>chs;}
        if(chs > 3 || chs < 1){ cout<<"Enter valid option!"<<endl;  goto A;}
        Sleep (750); system("cls");
        cout<<"                    TIME TABLE "<<endl;
        int n, minutes, hours=0, sum3, seconds2, seconds3, days=0;
        double sum2=0.00, seconds=0.00, sum=0.00, num[1000];
        string c, c2, c3, c4, c5, c6;
        cout<<endl<<" enter how many time instance's you will be entering:";
        cin>>n;
        while(cin.fail()){error(); cin>>n;}

            for(int i=0; i<n; i++)
                {
                    cout<<" time instance "<<i+1<<": ";
                    cin>>num[i];
                    while(cin.fail()){error(); cin>>num[i];}
                    sum+=num[i];
                }

        double sumOriginal=0.00;
        sumOriginal = sum;
        if (chs == 1){ sum = sum; c6 = "minutes";}
        if (chs == 2){ sum *= 60; c6 = "hours";}
        if (chs == 3){ sum *= 1440; c6 = "days";}

            Sleep(1000); system("cls");
            cout<<" total "<<c6<<" entered: "<<sumOriginal<<endl;
            cout<<" "<<endl;

            minutes = sum;
            double sum4=0.0000;
            sum3 = sum * 10000;

            sum2 = sum3 % 10000;
            sum4 = sum2 / 10000;
            seconds = sum4 / 0.016667;

                while ( seconds >= 60)
                {
                seconds -= 60;
                minutes +=1;
                }

            seconds3 = seconds * 10000;
            if ((seconds3 % 10000) >= 5000){
            seconds2 = seconds + 1;}
                else{
                seconds2 = seconds;}

                    while ( minutes >= 60)
                    {
                    minutes -= 60;
                    hours += 1;
                    }
                        while ( hours >= 24 )
                        {
                        hours -= 24;
                        days += 1;
                        }

                    if(seconds2 == 1) c4 = "SECOND"; if(seconds2 != 1) c4 = "SECONDS";
                    if(minutes == 1) c = "MINUTE"; if(minutes != 1) c = "MINUTES";
                    if(seconds2 == 0) c5 = ""; if(seconds2 != 0) c5 = "aprox. ";
                    if(hours == 1) c2 = "HOUR"; if(hours != 1) c2 = "HOURS";
                    if(days == 1) c3 = "DAY"; if(days != 1) c3 = "DAYS";
                    cout<<" "<<days<<" "<<c3<<" | "<<hours<<" "<<c2<<" | "<<minutes<<" "<<c<<" | "<<c5<<seconds2<<" "<<c4<<endl;

    cout<<endl;
    Sleep(100000);
    system("cls");
    }
return 0;
}




