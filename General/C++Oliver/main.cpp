#include <iostream>
#include <cstdlib>
using namespace std;

int flip(int a)
{
    int c=0, b=0;
    while (a != 0)
    {
        b = a % 10;
        a = a / 10;
        c = c * 10 + b;
    }
    return c;
}

int main()
{
    int a2;
    cin>>a2;
    cout<<flip(a2)<<endl;
    system("PAUSE");
    _Exit;
}
