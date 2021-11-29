#include <iostream>

using namespace std;

struct RabotnaNedela //kreiranje na struktura RabotnaNedela
{
    int casoviPon, casoviVtor, casoviSred, casoviCet, casoviPet; //promenlivi od cel broj za sekoj od denovite vo nedelata
    int brNedela; //reden broj na nedelata (cel broj)
};

struct Rabotnik //kreiranje na struktura rabotnik
{
    char ime[50]; //ime na rabotnikot od niza nakarakteri (maksimum 50 za vnesuvanje)
    RabotnaNedela r2[4]; //objekt za strukturata RabotnaNedela koj ja povrzuva istata so Rabotnik strukturata, niza od 4 elementi (strukturi)
};

int maxNedela(Rabotnik *r, int n, int m) //kreiranje na funkcija maxNedela so pokazuvac za brojot na elementi od objektot na strukturata Rabotnik (*r)
{
    int sumCasovi=0, max1=0, maxNedela=0; /*kreiram tri promenlivi, za naogjanje vkupen broj na rabotni casovi od sekoj od denovite (sumCasovi, postaven kako prvicna vrednost od 0,
    promenliva max1 (postavena kako 0) za naogjanje na nedelata so najgolem broj na rabotni casovi, maxNedela za rednata pozicija (brojot) na nedelata so najvekje rabotni casovi */
    for (int i=0; i<n; i++) //prv for ciklus za prvata struktura (Rabotnik r)
        {
        sumCasovi=0; maxNedela=0; //gi restartirame sumCasovi i maxNedela za da gledame novi maksimumi za sekoj od rabotnicite
            for(int j=0; j<m; j++) //vtor for ciklus za strukturata RabotnaNedela kako del od Rabotnik
                {
                    sumCasovi += r[i].r2[j].casoviPon + r[i].r2[j].casoviVtor + r[i].r2[j].casoviSred + r[i].r2[j].casoviCet + r[i].r2[j].casoviPet; //zbir od rabotnite casovi na site denovi
                    if(sumCasovi > max1 ){ max1 = sumCasovi; maxNedela = r[i].r2[j].brNedela; } //ako sumCasovi e pogolemo od momentalniot maksimum max1, max1 e ednakov na toj broj (sumCasovi)
                    //go zacuvuvame i redniot broj na nedelata so najvekje rabotni casovi vo maxNedela
                }
        cout<<r[i].ime<<": "<<maxNedela<<endl; //pecatime
        }
}

void table(Rabotnik *r, int n, int m)
{
    int sumCasovi=0;
    for (int i=0; i<n; i++) //ciklus za rabotnicite (struktura Rabotnik)
        {
            sumCasovi=0; //istoto kako prethodnata funkcija za zbir od site casovi
            cout<<r[i].ime; //pecatenje na imeto na rabotnikot
            for(int j=0; j<m; j++) //ciklus za da gi proverime site nedeli (zatoa do 4) (struktura RabotnaNedela)
            {
                sumCasovi += r[i].r2[j].casoviPon + r[i].r2[j].casoviVtor + r[i].r2[j].casoviSred + r[i].r2[j].casoviCet + r[i].r2[j].casoviPet;
                cout<<r[i].r2[j].casoviPon<<" "<<r[i].r2[j].casoviVtor<<" "<<r[i].r2[j].casoviSred<<" "<<r[i].r2[j].casoviCet<<" "<<r[i].r2[j].casoviPet<<" "<<sumCasovi<<endl; //pecatenje
            }
        }
}

int main()
{
    int n, m; //n za br na rabotnici, m za brojot na rabotni nedeli
    cout<<" vnesi kolku rabotnici kje vnesuvas: "<<endl;
    cin>>n;
    struct Rabotnik r[n]; //struktura rabotnik, niza so n elementi

    for(int i=0; i<n; i++) //za Rabotnik
        {
            cout<<" vnesi ime na rabotnik: ";
            cin>>r[i].ime;
            cout<<" vnesi kolku rabotni nedeli ima vo mesecot ovoj rabotnik: ";
            cin>>m;
            for(int j=0; j<m; j++) //za RabotnaNedela, ponataka samo vnesuvame parametri barani
            {
                cout<<" vnesi broj na rabotna nedela: ";
                cin>>r[i].r2[j].brNedela;
                cout<<" rabotni casovi vo ponedelnik: ";
                cin>>r[i].r2[j].casoviPon;
                cout<<" rabotni casovi vo vtornik: ";
                cin>>r[i].r2[j].casoviVtor;
                cout<<" rabotni casovi vo sreda: ";
                cin>>r[i].r2[j].casoviSred;
                cout<<" rabotni casovi vo cetvrtok: ";
                cin>>r[i].r2[j].casoviCet;
                cout<<" rabotni casovi vo petok: ";
                cin>>r[i].r2[j].casoviPet;
            }
        }

        maxNedela(r, n, m); //povikuvanje na funkcijata maxNedela, go prakjame celiot objekt r, site elementi od nizata na strukturi rabotnik, zaedno so n i m
        table(r, n, m); //povikuvanje na funkcijata table (isto prakjame kako vo prethodniot red, samo bez m

return 0;
}
