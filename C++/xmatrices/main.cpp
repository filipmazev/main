#include <iostream>
#include <windows.h>
using namespace std;

void error() {
    cin.clear(); cin.ignore(INT_MAX, '\n');
    cout<<endl<<" you can only enter numbers: "; }

int main()
{
    int n; cout<<" ENTER THE SIZE OF THE MATRIX: "; cin>>n;
    while(cin.fail()){error(); cin>>n;} while(n <= 2 ){
    cout<<endl<<" Enter valid option: "; cin>>n; while(cin.fail()){error(); cin>>n;}} cout<<endl;
    char A[n][n]; int d1=0, d2=0, m1=0, m2=0, cnt=0, chs; bool a=false;
    if( n%2==0 ){ cout<<" TO GET AN X SHAPED MATRIX, YOU'LL NEED AN ODD NUMBER "<<endl;
    cout<<" (1) GET AN X SHAPED MATRIX (1)"<<endl;
    cout<<" (2) STICK WITH THIS NUMBER (2)"<<endl;
    cout<<" ENTER: "; cin>>chs;
    while(cin.fail()){error(); cin>>chs;} while(chs > 2 || chs < 1){
    cout<<endl<<" Enter valid option: "; cin>>chs; while(cin.fail()){error(); cin>>chs;}}
    if (chs == 1){ n=n+1;} if(chs == 2){ n=n; }
    system("cls"); cout<<" ENTER THE SIZE OF THE MATRIX: "<<n<<endl; cout<<endl; }

    for ( int i=0; i<n; i++ ){
        for ( int j=0; j<n; j++ ){
            A[i][j] = '.'; } }

    for ( int i=0; i<n; i++ )
    {   cout<<" ";
        for ( int j=0; j<n; j++ ){ a=false;
            if ( i == j ) { d1++; } if ( (i+j) == (n-1) ){ d2++; }
            if ( i == (n/2) ) m1=n/2; if ( i < (n/2) ){ m1=(n/2)-1; }
            if ( j == (n/2) ) m2=n/2; if ( j < (n/2) ){ m2=(n/2)-1; }
            if ( ((i+j) == (m1+m2)) && ( (i+j) != (n-1) ) ) { a=true; } if ( (n % 2) != 0 ) { a = false; }
            if ( (a == false) && ( d2 != ((n/2)+1) ) && ( d2 != (n/2) ) ){
                    if ( i == j ) {
                        if ( (i+j) < (n-1)){ cout<<" D1 | ";  } cout<<" "<<A[i][j];
                        if ( (i+j) >= n ){ cout<<" | D1"; } }
                    else if ( (i+j) == (n-1) ) {
                        if ( j < i ){ cout<<" D2 | "; } cout<<" "<<A[i][j];
                        if ( j > i){ cout<<" | D2"; } }
                    else { cout<<" "; } }
                else if ( n%2 == 0 ){ cout<<" "; }
            else{ if ( i == j ) { cout<<" D1 | "; cout<<" "<<A[i][j]; cout<<" | D2"; }
            else if ( (i+j) == (n-1) ) { cout<<" "<<A[i][j]; cout<<" | D2"; } else { cout<<" "; } }
                if ( ( i < j ) && ( (i + j) <= (n-2) ) ) { cout<<" "; }
                if ( (j < i) && ((i+j) < (n-1)) ) { if ( n%2 != 0 ) cout<<"*"; else cout<<" ";  }
                if ( ( i > j ) && ( (i + j) > (n-1) ) ) { cout<<" "; }
                if ( (j > i) && ((i+j) >= n) ){ if ( n%2 != 0 ) cout<<"*"; else cout<<" "; } }
        cout<<endl;
    }

    cout<<endl; Sleep(6000); system("PAUSE"); _Exit;
}
