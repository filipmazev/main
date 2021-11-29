#include <iostream>

using namespace std;

int main()
{

    int P[7][7]={
        {0,1,0,0,0,0,0},
        {1,0,1,1,0,0,0},
        {0,1,0,0,0,1,1},
        {0,1,0,0,1,0,0},
        {0,0,0,1,0,1,0},
        {0,0,1,0,1,0,0},
        {0,0,1,0,0,0,0},
    };

    int g1, g2;
    cout<<"Grad 1: ";
    cin>>g1;
    cout<<"Grad 2: ";
    cin>>g2;

    if(P[g1][g2]==1)
    cout<<"Postoi pat pomegu tie 2 grada!"<<endl;
    else
    cout<<"Ne postoi pat pomegu tie 2 grada!"<<endl;
    return 0;
}
