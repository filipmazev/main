#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n, brojacP=0, brojacN=0, broj;
    cout<<"kolku broevi sakas da vneses? | Vnesi:"; cin>>n;
    ofstream zacuvaj; zacuvaj.open("zac.txt");
    zacuvaj<<"ke se vnesuvaat: "<<n<<" broevi"<<endl;

    for( int i=0; i<n; i++) {
        cin>>broj;
        if( broj > 0 ){ zacuvaj<<"pozitiven: "<<broj<<endl; brojacP++; }
        if( broj < 0 ){ zacuvaj<<"negativen: "<<broj<<endl; brojacN++; } }

    if ( brojacP > brojacN ){ zacuvaj<<"ima povekje pozitivni"; }
    if ( brojacN > brojacP ){ zacuvaj<<"ima povekje negativni"; }
    if ( brojacN == brojacP ){ zacuvaj<<"ima ist broj na pozitivni i negativni broevi"; }
    zacuvaj.close();

    ifstream citaj; citaj.open("zac.txt"); string cit;
    if(citaj.is_open()) {
        while(!citaj.eof()){
            getline(citaj, cit); cout<<cit<<endl; } }
    citaj.close();

    return 0;
}
