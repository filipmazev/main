#include <iostream>

using namespace std;

struct Avtomobili
{
    char marka[30], pogon[10];
    int godinaNaProizvodstvo, cena;
};

void pecati(Avtomobili *A, int n)
{
    cout<<endl<<" KOLI POD 16000 evra "<<endl;
    for(int i=0; i<n; i++)
    {
        if(A[i].cena <= 15000)
        {
            cout<<" AVTOMOBIL "<<i+1<<endl;
            cout<<" marka: "<<A[i].marka<<endl;
            cout<<" godina: "<<A[i].godinaNaProizvodstvo<<endl;
            cout<<" pogon: "<<A[i].pogon<<endl;
            cout<<" cena: "<<A[i].cena<<endl;
        }
    }
}

int main()
{
    int n;
    cout<<" kolku avtomobili ke vnesuvas? : "; cin>>n;
    Avtomobili A[n];

    for(int i=0; i<n; i++)
    {
        cout<<" AVTOMOBIL "<<i+1<<endl;
        cout<<" vnesi marka: "; cin>>A[i].marka;
        cout<<" vnesi godina na proizvodstvo: "; cin>>A[i].godinaNaProizvodstvo;
        cout<<" vnesi pogon: "; cin>>A[i].pogon;
        cout<<" vnesi cena: "; cin>>A[i].cena;
    }

    pecati(A, n);

return 0;
}
