#include <iostream>

using namespace std;

int prev ( int n )
{
    int a=0, c=0;
    while( n != 0 )
    {
    a = n % 10;
    n = n / 10;
    c = c * 10 + a;
    }
    return c;
}

int prev2 ( int n )
{
    int sum=0, b;
    if ( n == 0 ){ return sum; }
    else { while( n != 0 ){
    b=n%10; sum=sum*10+b;
    prev2(n/10); } return sum; }
}

int main()
{
    int n; cin>>n;

    if ( n == prev2(n) ) { cout<<"YE"; } else cout<<"NO";
}
