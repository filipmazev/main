#include <iostream>

using namespace std;

int main()
{
    int n, zbir1=0, zbir2=0; cin>>n;
    int A[n][n];

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
                cin>>A[i][j]; } }

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++)
            {
                if( j > i ) zbir1+= A[i][j];
                if( j < i ) zbir2+= A[i][j];
            }
        }

        for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++)
            {
                if( j > i ) cout<<zbir1;
                if( i == j ) cout<<" ";
                if( j < i ) cout<<zbir2;
                if( i + j == (n-1) ) cout<<" ";
            }
            cout<<endl;
        }

    cout<<" z1: "<<zbir1<<endl;
    cout<<" z2: "<<zbir2<<endl;
}
