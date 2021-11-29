#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout<<" vnesi broj na redovi: ";
    cin>>n;
    cout<<" vnesi broj na koloni: ";
    cin>>m; int A[n][m];
    cout<<" vnesi gi elementite: "<<endl;
    for ( int i=0; i<n; i++) {
          for ( int j=0; j<n; j++) {
            cin>>A[i][j]; } }

   for (int j = 0; j < m; j++)
    {
      int max1 = A[0][j];
        for (int i = 1; i < n; i++)
            {
                if (A[i][j] > max1) max1 = A[i][j];
            }
        cout<<max1<<endl;
   }

system("PAUSE"); return 0;
}
