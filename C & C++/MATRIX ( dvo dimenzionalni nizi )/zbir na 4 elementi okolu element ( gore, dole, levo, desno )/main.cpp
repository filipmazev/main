#include <iostream>
using namespace std;

int main()
{
    int r, m; cin>>r>>m; int A[r][m];

    for( int i=0; i<r; i++) {
        for( int j=0; j<m; j++){ cin>>A[i][j]; } } cout<<endl;

        for( int i=0; i<r; i++) {
            for( int j=0; j<m; j++) {
            int gore=0, dole=0, levo=0, desno=0;
            if ( i-1 >= 0 ) { gore = A[i-1][j]; }
            if ( i+1 < r ) { dole = A[i+1][j]; }
            if ( j-1 >= 0 ) { levo = A[i][j-1]; }
            if ( j+1 < m ) { desno = A[i][j+1]; }
            cout<<gore + dole + levo + desno<<" "; }
        cout<<endl; }

return 0;
}
