#include <iostream>
using namespace std;

int main()
{
    int n, cnt=0, sum=0; cin>>n; int A[n], K[n];

    for(int i=0; i<n; i++)
    {
        cin>>A[i];
        if (A[i] % 100 == 55){ cnt++; K[cnt-1] = A[i]; }
    }

    for(int i=0; i<cnt; i++)
    {
        sum+=K[i]; cout<<K[i]<<endl;
    }

    cout<<" aritmeticka sredina e: "<<sum / cnt<<endl;

return 0;
}
