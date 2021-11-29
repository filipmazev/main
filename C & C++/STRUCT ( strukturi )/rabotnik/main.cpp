#include <iostream>
using namespace std;

void pecati( struct Rabotnik r[100], int i );

struct Rabotnik
{
    char ime[30], prezime[30];
    int plata;
};

void pecati( struct Rabotnik r[100], int i)
{
    cout<<endl;
    cout<<" ime: "<<r[i].ime<<endl;
    cout<<" prezime: "<<r[i].prezime<<endl;
}

struct Fabrika
{
 int brojNaVraboteni;

    void pecatiVraboteni(struct Rabotnik r[100])
    {
        cout<<endl<<" site vneseni rabotnici: "<<endl;
        for( int i=0; i<brojNaVraboteni; i++) { pecati(r, i); }
    }

void pecatiSoPlata(struct Rabotnik r[100], int minPlata)
{
    for( int i=0; i<brojNaVraboteni; i++)
    {
        if (minPlata < r[i].plata )
        {
            pecati(r, i);
            cout<<" plata: "<<r[i].plata<<endl;
        }
    }
}

};

int main()
{
    int n;
    cout<<" kolku rabotnici kje vnesuvas: "; cin>>n;

    Rabotnik r[100];

    for( int i=0; i<n; i++)
    {
        cout<<endl;
        cout<<" vnesi ime: "; cin>>r[i].ime;
        cout<<" vnesi prezime: "; cin>>r[i].prezime;
        cout<<" vnesi plata: "; cin>>r[i].plata;
    }

    int minPlata; Fabrika f;
    f.brojNaVraboteni = n;
    cout<<endl<<" minimalna plata: "; cin>>minPlata;

    f.pecatiVraboteni(r);

    cout<<endl<<" rabotnici so plata pogolema od minimalnata: "<<endl;
    f.pecatiSoPlata(r, minPlata);

    return 0;
}
