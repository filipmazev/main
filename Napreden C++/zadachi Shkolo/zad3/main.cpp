#include <iostream>

using namespace std;

int main()
{
    int a, brojach=0, c=0; cin>>a; int a2 = a;

    while ( a != 0 )
        {
            a = a / 10; brojach++;
        }

    int A[brojach], i=0, b=0;

    while(a2 != 0 && i != brojach )
    {
        b = a2 % 10;
        a2 = a2 / 10;
        A[i] = b;
        i++;
    }

    for( int i=0; i<brojach; i++)
        {
            if( i % 2 == 0 ) { c += A[i]; }
        }

    cout<<c;
}
