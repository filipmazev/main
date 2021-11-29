#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n, m, n2, m2, brojacPar=0, brojacNePar=0;
    cout<<"broevi od: "; cin>>n; n2=n;
    cout<<"broevi do: "; cin>>m; m2=m;
    ofstream zacuvaj; zacuvaj.open("zac.txt");
    if( m < n ){ n=m2; m=n2; }
    zacuvaj<<"od:"<<n<<" do:"<<m<<endl;

    for( int i=n; i<m; i++) {
        if( i % 2 == 0 ){ zacuvaj<<"paren: "<<i<<endl; brojacPar++; }
        if( i % 2 != 0 ){ zacuvaj<<"neparen: "<<i<<endl; brojacNePar++; } }

    if(brojacPar > brojacNePar){ zacuvaj<<"ima povekje parni"; }
    if(brojacPar < brojacNePar){ zacuvaj<<"ima povekje neparni";}
    if(brojacPar == brojacNePar){ zacuvaj<<"ima ist broj na parni i neparni";}
    zacuvaj.close();

    ifstream citaj; citaj.open("zac.txt"); string cit;
    if(citaj.is_open()) {
        while(!citaj.eof()){
            getline(citaj, cit); cout<<cit<<endl; } }
    citaj.close();

    return 0;
}
