#include <iostream>
using namespace std;

int broevi( int a )
{
    if ( a == 0 ){ return 0; }
	if( a % 10 < 5 ) { cout<<a%10;
	return 1 + broevi(a / 10); }
	else return broevi(a / 10);
}

int main()
{
	int a, b, c=0;
	cin>>a;
	while ( a != 0 ){ b = a % 10; a = a / 10; c = c*10+b; }
	cout<<endl<<broevi(c);
	return 0;
}
