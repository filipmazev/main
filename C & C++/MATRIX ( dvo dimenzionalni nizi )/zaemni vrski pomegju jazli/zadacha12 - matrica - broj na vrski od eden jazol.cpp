#include <iostream>
using namespace std;

int main()
{
  int cnt=0;
    int A[7][7]={
        {0,1,0,0,0,0,0},
        {1,0,1,1,0,0,0},
        {0,1,0,0,0,1,1},
        {0,1,0,0,1,0,0},
        {0,0,0,1,0,1,0},
        {0,0,1,0,1,0,0},
        {0,0,1,0,0,0,0},
    };

    for ( int m=0; m<7; m++ )
        { for ( int i=0; i<7; i++)
            { for(int j=0; j<7; j++) {
                if ( A[i][j] == 1 && ( i != j && ( i == m ) ) ) cnt++; }
            } if( cnt !=0 ) { cout<<m+1<<"| vrski: "<<cnt<<endl; cnt=0; } }

return 0;
}


