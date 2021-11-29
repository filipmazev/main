#include <iostream>

using namespace std;

struct Pacient
{
    char Ime[100], Prezime[100];
    bool osiguran;
    int brPregledi;
};

struct MaticenDoktor
{
    char ImeNaDoktor[100];
    int brPacienti;
    Pacient lista[200];
    double cena;
};

void najuspesen_doktor(MaticenDoktor *MD, int n)
{
    cout<<" NAJDOBAR DOKTOR: "<<endl;
    int pariZemeni=0, maxPariZemeni=0, indexI=0, indexJ=0, maxPregledi=0, cnt=0, brMax=0,
    indexI2=0, indexJ2=0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            {
                if(MD[i].lista[j].osiguran == 0 )
                    {

                        pariZemeni += MD[i].cena * MD[i].lista[j].brPregledi;
                            if(pariZemeni > maxPariZemeni )
                            {
                                pariZemeni = 0; brMax = 0;
                                pariZemeni += MD[i].cena * MD[i].lista[j].brPregledi;
                                maxPariZemeni = pariZemeni; indexI = i; indexJ = j; cnt++;
                            }
                    }

               if ( i == indexI && cnt <= 2 ){ brMax += MD[i].lista[j].brPregledi; }

                if(MD[i].lista[j].brPregledi > maxPregledi)
                    {
                        indexI2 = i; indexJ2 = j;
                        maxPregledi = MD[i].lista[j].brPregledi;
                    }
            }
    }

    if(cnt <= 2 ){ cout<<" "<<MD[indexI].ImeNaDoktor<<" "<<maxPariZemeni<<" "<<brMax<<" "<<endl;}
    else { cout<<" "<<MD[indexI2].ImeNaDoktor<<" "<<maxPariZemeni<<" "<<brMax<<" "<<endl;}
}

int main()
{
  int n, m; MaticenDoktor MD[20];
  cout<<" kolku doktori kje vnesuvas? :"; cin>>n;

    for(int i=0; i<n; i++)
    {
        cout<<" ----------------------"<<endl;
        cout<<" IME NA DOKTOR: "; cin>>MD[i].ImeNaDoktor;
        cout<<" CENA NA PREGLED: "; cin>>MD[i].cena;
        cout<<" BROJ NA PACIENTI: "; cin>>m;
        MD[i].brPacienti = m;
        for(int j=0; j<m; j++)
            {
                cout<<" PACIENT "<<j+1<<endl;
                cout<<" IME: "; cin>>MD[i].lista[j].Ime;
                cout<<" PREZIME: "; cin>>MD[i].lista[j].Prezime;
                cout<<" OSIGURAN 1/0 (da/ne): "; cin>>MD[i].lista[j].osiguran;
                cout<<" BROJ NA PREGLEDI: "; cin>>MD[i].lista[j].brPregledi;
            }
    }

    cout<<endl; najuspesen_doktor(MD, n);

return 0;
}
