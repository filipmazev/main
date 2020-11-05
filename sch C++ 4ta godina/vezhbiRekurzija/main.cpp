#include <iostream>
using namespace std;

int zad1( int z1 )
{
    if ( z1 == 0 ) { return 0; }
    else { return 1 + zad1( z1 / 10 ); }
}

int zad2( int z2 )
{
    if ( z2 == 0 ) { return 0; }
    else { return z2 % 10 + zad2( z2 / 10 ); }
}

int zad3( int min1, int max1 )
{
   if ( min1 % 2 == 0 ){ return zad3(min1+1, max1); }
   else if ( min1 == max1 ){ return min1; }
   return min1 + zad3(min1+1, max1);
}

/*int zad4( int min1, int max1 )
{
   if ( min1 == max1 ) return min1;
   else { return min1 + zad4(min1 + 1, max1); }
}*/


int main()
{
    goto ZAD3;

    ZAD1:
    {
    int n; cin>>n;
    cout<<" broj na cifri: "<<zad1(n);
    }

    ZAD2:
    {
    int n2; cin>>n2;
    cout<<" zbir na cifri: "<<zad2(n2);
    }

    ZAD3:
    {
    int n3; cin>>n3;
    cout<<" zbir na cifri: "<<zad3(1,n3);
    }

}
