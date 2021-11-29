#include <iostream>
using namespace std;

int main()
{
    int n, b=0, c=0, n2; cin>>n; n2 = n;

    while (n2>0)
    {
        b = n2 % 10;
        n2 /= 10;
        c = c * 10 + b;
    }

    if ( c == n ) cout<<" palindrom! "<<endl;
    else cout<<" ne e palindrom "<<endl;

return 0;
}
