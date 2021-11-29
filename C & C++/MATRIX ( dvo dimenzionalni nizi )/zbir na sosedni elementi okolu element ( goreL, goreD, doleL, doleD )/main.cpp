#include <iostream>
using namespace std;

int main()
{
    int r, m; cin>>r>>m; int A[r][m];

    for( int i=0; i<r; i++) {
        for( int j=0; j<m; j++){ cin>>A[i][j]; } } cout<<endl;

        for( int i=0; i<r; i++) {
            for( int j=0; j<m; j++) {
            int goreL=0, goreD=0, doleL=0, doleD=0;
            if ( i-1 >=0 && j-1 >= 0 ) { goreL = A[i-1][j-1]; }
            if ( i-1 >=0 && j+1 < m ) { goreD = A[i-1][j+1]; }
            if ( i+1 < r && j-1 >=0 ) { doleL = A[i+1][j-1]; }
            if ( i+1 < r && j+1 < m ) { doleD = A[i+1][j+1]; }
            cout<<goreL + goreD + doleL + doleD<<" "; }
        cout<<endl; }

return 0;
}
