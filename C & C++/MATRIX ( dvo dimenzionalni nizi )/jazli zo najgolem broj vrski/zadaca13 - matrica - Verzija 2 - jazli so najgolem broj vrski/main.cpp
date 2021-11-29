#include <iostream>
using namespace std;

void brojVrskiMax ( int *A, int red, int kolona, int maxVrski, int cnt )
{
    int brojac=0;

        for ( int i=0; i<red; i++) {
            for(int j=0; j<kolona; j++)
            { brojac+=*(A+i*kolona+j); }
            if ( cnt == 0 && ( brojac > maxVrski ) ) {
                maxVrski = brojac; }
            if( brojac != 0 ) {
                if ( brojac == maxVrski && cnt != 0 )
            { cout<<"i:"<<i<<" | "<<maxVrski<<endl; } brojac=0; } }

    if( cnt==0 ) { cnt+=1; brojVrskiMax((int *)A, red, kolona, maxVrski, cnt ); }
}

int main()
{
    int red, kolona;
    cin>>red>>kolona; int A[red][kolona];

    for ( int i=0; i<red; i++) { for(int j=0; j<kolona; j++){ cin>>A[i][j]; } }

    brojVrskiMax((int *)A, red, kolona, 0, 0);
}




