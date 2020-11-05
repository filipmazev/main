#include <iostream>
#include <math.h>
using namespace std;

int prvaPrepravena( int br1, int stepen ){
    if ( stepen == 1) return br1;
    else return br1 * prvaPrepravena(br1, stepen-1);
}

int eParen( int min1, int max1 )
{
    if ( min1 > max1 ) return 0;
    cout<<" "<<min1<<endl;
    eParen(min1+2, max1);
}

int neParen( int min1, int max1 )
{
    if ( min1 > max1 ) return 0;
    cout<<" "<<min1<<endl;
    eParen(min1+2, max1);
}

int main()
{
    int n, m, n1, br, stepen;
    cout<<" N NA STEPEN : "<<endl;
    cout<<" vnesi n: "; cin>>br; cout<<" na stepen: "; cin>>stepen;
    cout<<" "<<prvaPrepravena(br, stepen)<<endl;
    system("PAUSE"); system("cls");
    cout<<" PARNI OD 1 DO N : "<<endl;
    cout<<" vnesi n: "; cin>>n1; eParen(2, n1);
    system("PAUSE"); system("cls");
    cout<<" NEPARENI OD N do M : "<<endl;
    cout<<" od: "; cin>>n; cout<<" do: "; cin>>m; cout<<endl;
    if ( n %  2 == 0 ){ n+=1; } neParen(n, m);
}
