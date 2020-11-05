#include <iostream>

using namespace std;

int checkM9( int a, int b, int cnt2, int brcifri )
{
    if ( a < 0 ){ return cnt2; }
    else
    {
        if( ( a % ( 10 * brcifri ) ) == b ) cnt2++;
        return checkM9( a/(10*brcifri), b, cnt2, brcifri );
    }
}

int main()
{
    int a, b;
    cout << "Vnesi dva broja: ";
    cin >> a >> b ;
    int brcifri=0, b2=b;

    while( b2 > 0 )
    { brcifri++; b2/=10; }

    cout<<checkM9( a, b, 0, brcifri );
}
