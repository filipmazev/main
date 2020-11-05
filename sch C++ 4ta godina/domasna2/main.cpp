#include <iostream>
using namespace std;

int sum( int br1 )
{
    if ( br1 == 0 ){ return 0; }
    else { return br1 % 10 + sum( br1 / 10 ); }

}

int main()
{
    int a; cin>>a;
    cout<<endl<<sum(a)<<endl;
    system("PAUSE");
}
