#include <iostream>
#include <iomanip>
#include <windows.h>
using namespace std;

struct Oceni
{
    double test1, test2, test3;
};

struct Studenti
{
    char imeNaStudent[30];
    char prezimeNaStudent[30];
    Oceni o;
    double prosek;
};

int main()
{
    int n;
    cout<<" kolku studenti kje vnesuvate:"; cin>>n;

    Studenti s[n], temp;

    for(int i=0; i<n; i++)
    {
        cout<<endl<<" STUDENT "<<i+1<<endl;
        cout<<" vnesi ime:"; cin>>s[i].imeNaStudent;
        cout<<" vnesi prezime:"; cin>>s[i].prezimeNaStudent;
        cout<<" vnesi ocena od prv test programski:"; cin>>s[i].o.test1;
        cout<<" vnesi ocena od vtor test programski:"; cin>>s[i].o.test2;
        cout<<" vnesi ocena od tret test programski:"; cin>>s[i].o.test3;
        s[i].prosek = (s[i].o.test1 + s[i].o.test2 + s[i].o.test3) / 3;
    }

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(s[i].prosek < s[j].prosek)
            {
            temp = s[i]; s[i] = s[j]; s[j] = temp;
            }
        }
    }

    system("cls");
    cout<<" Studentite podredeni po prosechna ocena po opagjacki redosled e:"<<endl;

	for(int i=0;i<n;i++)
    {
        cout<<endl<<" STUDENT "<<i+1<<endl;
        cout<<" Ime:"<<s[i].imeNaStudent<<endl;
        cout<<" Prezime:"<<s[i].prezimeNaStudent<<endl;
        cout<<setprecision(2)<<" prosechna ocena:"<<s[i].prosek<<endl;
	}

return 0;
}
