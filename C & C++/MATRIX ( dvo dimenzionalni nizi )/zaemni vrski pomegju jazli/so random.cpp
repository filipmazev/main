#include <iostream>
using namespace std;

int main()
{
  srand((unsigned) time(0));
  int n, k, r, grad1, grad2, cnt=0; cin>>n;
  int A[n][n];
  
  for ( int i=0; i<n; i++) {
    for(int j=0; j<n; j++){
        A[i][j] = 0; } }

    for ( int i=1; i<=n*2; i++)
    {
        k = rand() % n+1; r = rand() % n+1;
            if ( k > n-1 ){ while ( k > n-1 ){ k = rand() % n+1; } }
            if ( r > n-1 ){ while ( r > n-1 ){ r = rand() % n+1; } }
        A[k][r] = 1;
    } cout<<endl;
	
      for ( int i=0; i<n; i++) {
            for(int j=0; j<n; j++){ cout<<A[i][j]<<" "; }
      cout<<endl; } cout<<endl;

    for ( int m=0; m<n; m++ )
        { for ( int i=0; i<n; i++)
            { for(int j=0; j<n; j++) {
                if ( A[i][j] == 1 && ( i != j && i == m ) ) cnt++; }
            } if( cnt !=0 ) { cout<<"i/j:"<<m<<" | vrski: "<<cnt<<endl; cnt=0; } }

return 0;
}


