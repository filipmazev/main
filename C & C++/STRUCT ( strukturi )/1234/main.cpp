#include <iostream>
using namespace std;

int main()
{
    int n=204, A[n], B[n];

    for(int i=0; i<=n; i++)
    {
        A[i] = i;
    }

    for (int i=-200; i>=-403; i--)
    {
        B[i] = i;
    }


    for(int i=0; i<=n; i++)
    {
        cout<<A[i] + B[i]<<endl;
    }

return 0;
}
