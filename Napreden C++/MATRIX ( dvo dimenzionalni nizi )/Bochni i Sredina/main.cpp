#include <iostream>
using namespace std;

int main()
{
    int n; cin>>n; int A[n][m];
    for ( int i=0; i<n; i++) {
          for ( int j=0; j<n; j++) {
            A[i][j] = 1; } }

    for ( int i=0; i<n; i++)
    {
          for ( int j=0; j<n; j++)
            {
            if ( ( j == 0 || i == 0 ) || ( j == n-1 || i == n-1 )  ){
            if ( i + j == 0 || i + j == n - 1 || i + j == (n-1) * 2 ) {
            cout<<" "<<A[i][j]<<" "; }
            else cout<<" Y "; }
            if ( ( j != 0 && j < n-1 ) && ( i != 0 && i < n-1 ) ){
            if ( i == j && i + j == n-1 ){ cout<<" "<<A[i][j]<<" "; }
            else cout<<" N "; }
            }
          cout<<endl;
    }

system("PAUSE"); return 0;
}
