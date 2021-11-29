#include <iostream>
#include <cstring>
using namespace std;

class Vraboteni
{
    private:
        char ime[30];
        int plata;
        string rabotnaPoz;
    public:
        Vraboteni(){ }

        Vraboteni(char *i, int p, string r)
        { strcpy(ime,i); plata = p; rabotnaPoz = r; }

        ~Vraboteni(){}

        void setIme(char *i){ strcpy(ime, i); }
        char *getIme(){ return ime; }

        void setPlata(int p){ plata = p; }
        int getPlata(){ return plata; }

        void setRabotnaPoz(string r){ rabotnaPoz = r; }
        string getRabotnaPoz(){ return rabotnaPoz; }
};

int main()
{
    char ime[30]; string rabotnaPoz, cmp; int plata, n;
    cout<<" kolku vraboteni kje vnesuvas: "; cin>>n;
    Vraboteni v[n], v2;

    for (int i=0; i<n; i++)
    {
        cout<<" -----------------------------------"<<endl;
        cout<<" Rabotnik "<<i+1<<":"<<endl;
        cout<<" Ime: "; cin>>ime; v[i].setIme(ime);
        cout<<" Plata: "; cin>>plata; v[i].setPlata(plata);
        RB: { cout<<" Rabotna pozicija: "; cin>>rabotnaPoz;
        if( rabotnaPoz == "vraboten" || rabotnaPoz == "shef" ||  rabotnaPoz == "direktor" ||  rabotnaPoz == "sef" ||
        rabotnaPoz == "Vraboten" || rabotnaPoz == "Shef" ||  rabotnaPoz == "Direktor" ||  rabotnaPoz == "Sef" ){
        v[i].setRabotnaPoz(rabotnaPoz); }
        else { cout<<endl<<" vnesi validna opcija! "<<endl; goto RB; } }
    }

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(v[i].getPlata() < v[j].getPlata() )
            {
                v2 = v[i]; v[i] = v[j]; v[j] = v2;
            }
        }
    }

    cout<<endl<<" Vrabotenite sortirani po plata vo opagjacki redosled se: "<<endl;
    for (int i=0; i<n; i++)
    {
        cout<<" -----------------------------------"<<endl;
        cout<<" Rabotnik "<<i+1<<":"<<endl;
        cout<<" Ime: "<<v[i].getIme()<<endl;
        cout<<" Plata: "<<v[i].getPlata()<<endl;
        cout<<" Rabotna pozicija: "<<v[i].getRabotnaPoz()<<endl;
    }

return 0;
}
