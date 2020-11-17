#include <iostream>
using namespace std;

int stepen( int n, int stepen1 )
{
    if ( stepen1 == 1 ) return n;
    else return n * stepen(n,stepen1 - 1);
}

int main()
{
    int n, x;
    cout << " vnesi broj: "; cin>>n;
    cout << " vnesi stepen: "; cin>>x;
    cout << " brojot na "<<x<<" stepen e: "<<stepen(n,x);
    return 0;
}
