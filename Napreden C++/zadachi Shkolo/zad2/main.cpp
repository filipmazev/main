#include <iostream>
#include <cstdlib>
#include <windows.h>
using namespace std;

int main()
{
    int br; cout<<endl<<" Vnesi go prviot broj:"; cin>>br;
    int br2; cout<<endl<<" Vnesi go vtoriot broj:"; cin>>br2; system("cls");

    int broj = br, broj2 = br2, b2=0, cnt2 = 0, b=0, cnt = 0, brojach3 = 0, cifriVkupno = 0;

    while( br != 0 ) { br = br / 10; cnt++; }
    while( br2 != 0 ) { br2 = br2 / 10; cnt2++; }

    cout<<" BROJ1 : "<<broj<<" BROJ2 : "<<broj2<<endl; cout<<endl;

    int A1[cnt], cntOriginal = cnt, i=0;
    int A2[cnt2], cntOriginal2 = cnt2, k=0;
    cifriVkupno = cnt + cnt2;

    while(broj != 0 && i != cnt )
    {
        b = broj % 10;
        broj = broj / 10;
        A1[i] = b;
        i++;
    }

    while(broj2 != 0 && k != cnt2 )
    {
        b2 = broj2 % 10;
        broj2 = broj2 / 10;
        A2[k] = b2;
        k++;
    }

    for ( int i=0; i<cntOriginal; i++)
    {
            for ( int j = 0; j<cntOriginal2; j++)
                {
                    if(A1[i] == A2[j] ){ cout<<" BROJ1["<<i+1<<"]: "<<A1[i]<<" = "<<"BROJ2["<<j+1<<"]: "<<A2[j]<<endl; brojach3++; }
                }

    } cout<<endl;

    cout<<" BROJ NA ISTI CIFRI : "<<brojach3<<endl;
    cout<<" BROJ NA RAZLICHNI CIFRI : "<<cifriVkupno - brojach3<<endl;

    Sleep(1500); cout<<endl; system("PAUSE"); _Exit;
}
