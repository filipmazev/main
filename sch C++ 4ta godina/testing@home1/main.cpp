#include <iostream>

using namespace std;

int testing1( int n )
{
    int sum=0;
    if ( n == 0 ) { return 0; }
    else { sum++; testing1(n / 10); return sum; }
}

int main()
{
    int n;
    cin>>n;
    cout<<testing1(n);
}
