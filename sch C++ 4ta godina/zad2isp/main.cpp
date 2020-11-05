#include <iostream>
using namespace std;

int maximum(int A[], int i, int max1 )
{
    int maxi;
    if ( i == max1 ){ return A[i]; }
    maxi = maximum(A, i+1, max1 );
    if ( A[i] > maxi ) return A[i];
    else return maxi;
}

int main()
{
    int n; cin>>n; int A[n];
    for ( int i=0; i<n; i++ ){ cin>>A[i]; }
    cout<<maximum(A, 0, n-1)<<endl;
}
