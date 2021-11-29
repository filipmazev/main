#include<iostream>
#include<cstring>
using namespace std;

class Kola
{
private:
    string ImeNaMarka;
    int CenaNaKola, ocena1, ocena2, ocena3;
public:
    Kola (){ }

    Kola (string m, int cen, int oc1, int oc2, int oc3){
    string ImeNaMarka= m; CenaNaKola = cen; ocena1 = oc1; ocena2 = oc2; ocena3 = oc3; }

    ~Kola (){ }

    void setImeNaMarka(string m){ ImeNaMarka= m; }
    string getImeNaMarka(){ return ImeNaMarka; }

    void setCenaNaKola (int cen){ CenaNaKola = cen; }
    int getCenaNaKola(){ return CenaNaKola; }

    void setocena1 (int oc1){ ocena1 = oc1; }
    int getocena1(){ return ocena1; }

    void setocena2 (int oc2){ ocena2 = oc2; }
    int getocena2(){ return ocena2; }

    void setocena3 (int oc3){ ocena3 = oc3; }
    int getocena3(){ return ocena3; }

    double getSrednaVrednost (){ return ((ocena1 + ocena2 + ocena3)/ 3); }
};

int main (){
    int n, temp, CenaNaKola, ocena1, ocena2, ocena3;
    string marka;

    cout<<" Vnesi kolku avtomobili ima: ";
    cin>>n; Kola k[n];

    for (int i = 0; i<n; i++){
        cout<<" Vnesi ime na marka na kolata: ";
        cin>>marka; k[i].setImeNaMarka(marka);
        cout<<" Vnesi cena na kolata: ";
        cin>>CenaNaKola; k[i].setCenaNaKola(CenaNaKola);
        cout<<" Vnesi prva ocena: ";
        cin>>ocena1; k[i].setocena1(ocena1);
        cout<<" Vnesi vtora ocena: ";
        cin>>ocena2; k[i].setocena2(ocena2);
        cout<<" Vnesi treta ocena: ";
        cin>>ocena3; k[i].setocena3(ocena3);
        cout<<endl; }

    double p[n];

    for ( int i=0; i<n; i++){ p[i] = k[i].getSrednaVrednost(); }

    for ( int i=0; i<n-1; i++)
    {
        for ( int j=i+1; j<n; j++)
        {
            if (p[i]>p[j])
            {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }

    cout<<" Kolite podredini po opagjachki redosled spored sredna ocena se: "<<endl;
    for ( int i=n-1; i>0; i--){
        for ( int j=0; j<n; j++){
            if (k[j].getSrednaVrednost() == p[i]){
                cout<<k[j].getImeNaMarka()<< endl;
                break; } } }

return 0;
}
