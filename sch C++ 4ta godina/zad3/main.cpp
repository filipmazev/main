#include <iostream>

using namespace std;

int sum2( int min1, int max1 )
{
   if ( min1 == max1 ) return min1;
   else return min1 + sum2(min1 + 1, max1);
}

int main()
{
 int fr, to;
 cin>>fr>>to;
    cout<<((sum2(fr,to ) - fr) - to);
}
