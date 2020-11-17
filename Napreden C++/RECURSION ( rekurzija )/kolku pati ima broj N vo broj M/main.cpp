#include <iostream>
using namespace std;

int checkM8( int A[], int b, int cnt, int i )
{
    if ( i == cnt ){ return 0; }

    if ( A[i] != A[i+1] && A[i] == b ) {
        return 1 + checkM8(A, b, cnt, i+1); }
    else return checkM8(A, b, cnt, i+1);
}

int main()
{
    int a, b;
    cout << "Vnesi dva broja: ";
    cin >> a >> b ;
    int a2=a, b2=b, c=1, cnt=0;
    while ( b2 != 0 ) { b2 /= 10; c*=10; }
    while ( a2 != 0 ) { a2 /= 10; cnt++; }

    int A[cnt];
    for ( int i=0; i<cnt; i++ ){ A[i] = a % c; a/=10; }

    cout<<checkM8(A, b, cnt-1, 0);

return 0;
}
