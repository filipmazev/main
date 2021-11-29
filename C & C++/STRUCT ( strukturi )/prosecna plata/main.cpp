#include <iostream>
using namespace std;

struct fabrika;
void pecativraboteni(fabrika f, int n);

struct rabotnik
{
    char ime[30];
    char prezime[30];
    int plata;
};

struct fabrika
{
    rabotnik r[100];
    int brojnavraboteni;
};

void pecativraboteni(fabrika f, int i)
{
    cout<<f.r[i].ime<<" "<<f.r[i].prezime<<endl;
}

void pecatisoplata(int plataSporedba, fabrika f, int n)
{
    cout<<"SO PLATA POGOLEMA OD PROSECNATA"<<endl;

    for (int i = 0; i < n; i++)
    {
        if (f.r[i].plata >= plataSporedba)
        {
            pecativraboteni(f, i);
        }
    }
}

int main()
{
    fabrika f;
    int plataSporedba, n;
    cout<<"Vnesi broj na vraboteni: ";
    cin>>n;
    cout<<"Vnesi prosecna plata: ";
    cin>>plataSporedba;

        for (int i = 0; i < n; i++)
        {
            cout<<"Ime:";
            cin>>f.r[i].ime;
            cout<<"Prezime:";
            cin>>f.r[i].prezime;
            cout<<"Plata:";
            cin>>f.r[i].plata;
        }

        pecatisoplata(plataSporedba, f, n);

return 0;
}
