#include <iostream>
using namespace std;

int main()
{

int n, sum=0;
    cout<<" vnesi golemina na nizata: "; cin>>n; int a[n], minimum;
    for ( int i=0; i<n; i++ ) {
     cout<<" vnesi broj "<<i+1<<": "; cin>>a[i]; } minimum = a[0];

    for ( int i=0; i<n; i++ ) {
        if ( a[i] < minimum ){ minimum = a[i]; } }
    cout<<" najmaliot vnesen broj e: "<<minimum;

    return 0;
}
