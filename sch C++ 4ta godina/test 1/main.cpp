#include <iostream>
#include <cmath>

using namespace std;

int sum( int br1 )
{
    int cep=br1, cifra=0, cifri=0, ret=0, brojac=0;

    while ( cep != 0 )
        {
            cep/=10; cifri+=1;
        }

        if( ( cifri % 2 ) != 0 )
            {
                while ( br1 > 0 )
                {
                    brojac+=1;
                    cifra=br1%10;
                    br1=br1/10;
                    if ( brojac == int((cifri/2)+1) )
                        {
                          ret=cifra;
                        }
                }
                return ret;
            }
}

int main()
{
    int a; cin>>a;
    cout<<endl<<sum(a);
}
