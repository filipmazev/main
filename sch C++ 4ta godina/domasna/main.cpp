#include <iostream>
using namespace std;

int cep( int br1 )
{
    if ( br1 == 0 ){ return 0; }
    else { return 1 + cep( br1 / 10 ); }

}

int main()
{
    int a; cin>>a;
    cout<<endl<<cep(a);
    system("PAUSE");
}
