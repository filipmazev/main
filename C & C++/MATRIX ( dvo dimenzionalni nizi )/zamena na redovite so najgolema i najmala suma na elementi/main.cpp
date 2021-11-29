#include <iostream>
using namespace std;

int main()
{
    int n, m, suma=0, min1, index1, index2, max1=0; cin>>n>>m; int A[n][m];

    for( int i=0; i<n; i++ ) { for( int j=0; j<m; j++ ) { cin>>A[i][j]; } }

        for( int i=0; i<n; i++ ) { suma = 0;
            for( int j=0; j<m; j++ ) { suma+=A[i][j]; }
        if ( suma > max1 ){ max1 = suma; index1 = i; }
        } min1 = max1;

        for( int i=0; i<n; i++ ) { suma = 0;
            for( int j=0; j<m; j++ ) { suma+=A[i][j]; }
        if ( suma < min1 ){ min1 = suma; index2 = i; } }

        for( int i=0; i<n; i++ ) { swap(A[index1][i], A[index2][i]); }

        for( int i=0; i<n; i++ ) { for( int j=0; j<m; j++ ) {
        cout<<A[i][j]<<" "; } cout<<endl; }

        cout<<" red so najmal zbir: "<<" i:"<<index2<<" | "<<index2+1<<endl;
        cout<<" red so najgolem zbir: "<<" i:"<<index1<<" | "<<index1+1<<endl;

return 0;
}
