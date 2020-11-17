#include <iostream>
using namespace std;

int main()
{
    int n, m,sredina; cin>>n>>m; int A[n][m];
    for ( int i=0; i<n; i++) {
          for ( int j=0; j<m; j++) {
            cin>>A[i][j]; } }

    for ( int i=0; i<n; i++) {
        for ( int j=0; j<n; j++) {
                cout<<A[i][j]<<" ";
        if ( i == j && i + j == n-1 ){ sredina = A[i][j]; } } cout<<endl; }

    cout<<"lev goren kjosh: "<<A[0][0]<<endl;
    cout<<"lev dolen kjosh: "<<A[n-1][0]<<endl;
    cout<<"desen goren kjosh: "<<A[0][m-1]<<endl;
    cout<<"desen dolen kjosh: "<<A[n-1][m-1]<<endl;
    cout<<"sredina: "<<sredina<<endl;

system("PAUSE"); return 0;
}
