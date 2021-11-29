#include <iostream>
#include <ctime>
using namespace std;

void CountNodesMax ( int *A, int row, int columb, int maxNodeCount, int cnt )
{
    int NodeCounter=0;
        for ( int i=0; i<row; i++) {
        for(int j=0; j<columb; j++) { NodeCounter+=*(A+i*columb+j); }
        if ( cnt == 0 && ( NodeCounter > maxNodeCount ) ){ maxNodeCount = NodeCounter; }
        if ( NodeCounter != 0 ) { if ( NodeCounter == maxNodeCount && cnt != 0 )
        { cout<<"i:"<<i<<" | "<<maxNodeCount<<endl; }
        if ( cnt == 0 ) { cout<<"i:"<<i<<" | "<<NodeCounter<<endl; } NodeCounter=0; } }
    if ( cnt == 0 ) { cout<<endl; cnt+=1; CountNodesMax((int *)A, row, columb, maxNodeCount, cnt ); }
}

int main()
{
    srand((unsigned) time(0));
    int row, columb, rowRand, columbRand; cin>>row>>columb; int A[row][columb];

    for ( int i=0; i<row; i++) { for(int j=0; j<columb; j++) { A[i][j] = 0; } }

    for ( int i=1; i<=row*2; i++) { rowRand = rand() % row; columbRand = rand() % row;
    if ( rowRand > row-1 ) { while ( rowRand > row-1 ){ rowRand = rand() % row; } }
    if ( columbRand > row-1 ) { while ( columbRand > row-1 ){ columbRand = rand() % row; } }
    A[rowRand][columbRand] = 1; } cout<<endl;

    for ( int i=0; i<row; i++) { for(int j=0; j<columb; j++){
    cout<<A[i][j]<<" "; } cout<<endl; } cout<<endl;

    CountNodesMax((int *)A, row, columb, 0, 0);
}




