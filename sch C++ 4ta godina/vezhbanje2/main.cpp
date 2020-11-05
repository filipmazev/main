#include<iostream>
using namespace std;

int maximum( int A[], int min1, int max1 )
{
    int maxi;
    if ( min1 == max1 ) return A[min1];
    maxi = maximum(A, min1+1, max1);
    if ( A[min1] < maxi ) return A[min1];
    else return maxi;
}

int main()
{
    int A[3];
    for ( int i=0; i<3; i++ )
        {
            cin>>A[i];
        }
    cout<<maximum(A, 0, 2);
}
