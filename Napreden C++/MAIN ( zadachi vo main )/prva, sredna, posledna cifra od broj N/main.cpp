#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main()
{
    int a; cin>>a; int b = 0, c = 0, original = a; float brojach = 0;

    while( a != 0 )
    {
        b = a % 10;
        a = a / 10;
        brojach++;
    }

    double brojCifri = ceil(brojach / 2);
    int b2=0, a2 = original, brojach2=0;

    while ( brojach2 != brojCifri )
    {
        b2 = a2 % 10;
        a2 = a2 / 10;
        brojach2++;
    }

    cout<<" posledna : "<<original % 10<<" | prva : "<<b<<" | sredna cifra : "<<b2<<endl;

    system("PAUSE");
}
