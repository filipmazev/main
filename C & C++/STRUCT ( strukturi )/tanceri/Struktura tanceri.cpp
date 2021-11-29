#include <iostream>
#include <string.h>
using namespace std;

struct Tanc
{
    char imeT[50];
    char zemjaT[15];
};

struct Tancer
{
    char ime[20];
    char prezime[20];
    Tanc t[5];
};

void tancuvanje(Tancer* tancer, int n, char* zemja)
{
    cout<<endl<<" ----------------------------------"<<endl; cout<<endl;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(strcmp(tancer[i].t[j].zemjaT, zemja) == 0 )
            {
               cout<<" "<<tancer[i].ime<<" "<<tancer[i].prezime<<","<<tancer[i].t[j].imeT<<endl;
               break;
            }
        }
    }
}

int main()
{
    int n, m;
    char zemja[15];
        Tancer tanceri[5];
    cout<<" kolku tancheri kje vnesuvas:"; cin>>n; cout<<endl;

    for(int i=0; i<n; i++)
    {
        cout<<" ----------------------------------"<<endl;
        cout<<" Tancher "<<i+1<<endl;
        cout<<" Ime: "; cin>>tanceri[i].ime;
        cout<<" Prezime: "; cin>>tanceri[i].prezime;
        cout<<" Broj na tancevi: "; cin>>m;
        cout<<" ----------------------------------"<<endl;

        for(int j=0; j<m; j++)
        {
            cout<<" Tanc "<<j+1<<endl;
            cout<<" Tanc: "; cin>>tanceri[i].t[j].imeT;
            cout<<" Zemja na poteklo: "; cin>>tanceri[i].t[j].zemjaT;
            cout<<endl;
        }
    }

    cout<<" ----------------------------------"<<endl;
    cout<<endl<<" filtriraj spored zemja: "; cin>>zemja;

    tancuvanje(tanceri, n, zemja);

return 0;
}
