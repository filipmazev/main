#include <iostream>
using namespace std;

struct igrac
{
    char ime[15];
    int nivo, poeni;
};

struct KompjuterskaIgra
{
    char imeNaIgra[20];
    igrac i[30];
    int brIgraci;
};

void najdobarIgrac(KompjuterskaIgra lista, int n)
{
    int maxNivo=0, maxPoeni=0, pozNivo=0, pozPoeni=0, cnt=0;

    for (int i=0; i<n; i++) {
        if( lista.i[i].nivo > maxNivo ){ maxNivo = lista.i[i].nivo; pozNivo = i; }
        if( lista.i[i].poeni > maxPoeni ){ maxPoeni = lista.i[i].poeni; pozPoeni = i; } }

    for (int i=0; i<n; i++) { if ( lista.i[i].poeni == maxPoeni ){ cnt+=1; } }

    cout<<" Od igrata '"<<lista.imeNaIgra<<"' najdobriot igrac e igracot so korisnicko ime: ";
    if ( cnt == 1 ){ cout<<lista.i[pozPoeni].ime; }
    if ( cnt > 1 ){ cout<<lista.i[pozNivo].ime; }
}

int main()
{
    int n, m, maxBrIgraci=0, cnt=0,  pozicija=0, pozicija2[100];
    KompjuterskaIgra igraci[5], lista;
    cout<<" kolku igri ke vnesuvas:"; cin>>m; cout<<endl;

    for(int i=0; i<m; i++)
    {
        cout<<" ----------------------"<<endl;
        cout<<" IGRA: "; cin>>igraci[i].imeNaIgra;
        cout<<" BROJ NA IGRACI: "; cin>>igraci[i].brIgraci; cout<<endl;
        if( igraci[i].brIgraci > maxBrIgraci ){ maxBrIgraci = igraci[i].brIgraci; pozicija = i; }
        for(int j=0; j<igraci[i].brIgraci; j++) {
            cout<<" "<<igraci[i].imeNaIgra<<" IGRAC "<<j+1<<endl;
            cout<<" IME NA IGRAC: "; cin>>igraci[i].i[j].ime;
            cout<<" MAX NIVO: "; cin>>igraci[i].i[j].nivo;
            cout<<" MAX POENI: "; cin>>igraci[i].i[j].poeni; cout<<endl; }
    }

    for (int i=0; i<m; i++){ if (igraci[i].brIgraci == maxBrIgraci ) { pozicija2[cnt] = i; cnt++; } }
    if( cnt > 1 ) { for (int i=0; i<cnt; i++){ lista = igraci[pozicija2[i]]; najdobarIgrac(lista, maxBrIgraci); cout<<endl; } }
    else { lista = igraci[pozicija]; najdobarIgrac(lista, maxBrIgraci); }

return 0;
}
