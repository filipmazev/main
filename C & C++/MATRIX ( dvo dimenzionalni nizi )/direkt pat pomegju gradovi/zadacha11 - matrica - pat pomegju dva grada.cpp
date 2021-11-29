#include <cstdlib>
#include <ctime>
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
        k = rand() % n+1;; r = rand() % n+1;
            if ( k > n-1 ){ while ( k > n-1 ){ k = rand() % n+1; } }
            if ( r > n-1 ){ while ( r > n-1 ){ r = rand() % n+1; } }
        A[k][r] = 1;
    } cout<<endl;

    cout<<"Grad 1: "; cin>>grad1;
    cout<<"Grad 2: "; cin>>grad2;
    if ( A[grad1][grad2] == 1 ) cout<<endl<<"Postoi pat pomegu tie 2 grada "<<endl;
    else cout<<endl<<"Ne postoi pat pomegu tie 2 grada "<<endl;
    cout<<endl<<"pritisni 'Enter' za da gi vidish site patishta "<<endl; cout<<endl; system("PAUSE");

    cout<<endl; for ( int i=0; i<n; i++) { for(int j=0; j<n; j++){
    if (A[i][j] == 1 ) { cnt++; cout<<"pat "<<cnt<<" | pomegju grad: "<<i<<" i grad: "<<j<<endl; } } }

return 0;
}


