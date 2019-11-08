#include <iostream>
#include <math.h>
#include <cstdlib>

using namespace std;

int main(){
     cout<<"     ----------------------------- \n";
     cout<<"ODBERI DALI SAKAS PLOSTINA ILI PERIMETAR \n";
     cout<<"A. ZA PLOSTINA ODBERI 1 \n";
     cout<<"B. ZA PERIMETAR ODBERI 2 \n";
     cout<<"     ----------------------------- \n";

    int a, b, b1, k, r, r0;  cin>>a;
    while (a < 1  || a > 2){  cout<<"VNESI VALIDNA OPCIJA: ";  cin>>a; }

    if (a == 1){
         cout<<"     ----------------------------- \n";
         cout<<"            ODBRA PLOSTINA \n";  cout<<"            ODBERI FIGURA \n";  cout<<"1. KVADRAT \n";
         cout<<"2. PRAVOAGOLNIK \n";  cout<<"3. ROMBOID \n";  cout<<"4. ROMB \n";
         cout<<"5. TRIAGOLNIK \n";  cout<<"6. TRAPEZ \n";  cout<<"7. DELTOID \n";
         cout<<"     ----------------------------- \n";
         cin>> b;
        while(b < 1 || b > 7){  cout<<"VNESI VALIDNA OPCIJA: ";  cin>>b;}
    }

    else if(a == 2){
         cout<<"     ----------------------------- \n";
         cout<<"            ODBRA PERIMETAR \n";  cout<<"            ODBERI FIGURA \n";
         cout<<"1. KVADRAT, ROMB \n";  cout<<"2. PRAVOAGOLNIK, DELTOID, PARALELOGRAM \n";  cout<<"3. TRIAGOLNIK \n";
         cout<<"4. TRAPEZ, TRAPEZOID \n";  cout<<"5. KRUG \n";  cout<<"6. PRAVILEN MNOGUAGOLNIK \n";
         cout<<"     ----------------------------- \n";
         cin>> b1;
        while(b1 < 1 || b1 > 6){  cout<<"VNESI VALIDNA OPCIJA: ";  cin>>b1; }
        }


    if (b == 1){
         cout<<"Za da presmetas so strani vnesi 1 za da presmetas so dijagonali vnesi 2! Sega vnesi broj: ";  cin>>k;
        while(k < 1 || k > 2){  cout<<"VNESI VALIDNA OPCIJA: ";  cin>>k;}
    }
    if (b == 2){
        int c, h;
         cout<<"Vnesi ja stranata a: ";  cin>> c;  cout<<"Vnesi ja stranata b: ";  cin>> h;
         cout<<"Plostinata na pravoagolnikot e: " << c * h <<"\n";
    }
    if (b == 3){
         cout<<"Za da presmetas so strana i visina vnesi 1, za da presmetas so dvete strani i agolot vnesi 2! Sega vnesi broj: ";  cin>>r;
        while( r < 1 || r >2){  cout<<"VNESI VALIDNA OPCIJA: ";  cin>>r; }
    }
    if (b == 4){
         cout<<"Za da presmetas so strana i visina vnesi 1, za da presmetas so diagonalite vnesi 2, za da presmetas so stranata i agolot vnesi 3! Sega vnesi broj: ";  cin>>r0;
        while ( r0 < 1 || r0 > 3 ){  cout<<"VNESI VALIDNA OPCIJA: "; cin>>r0; }
    }
    if (b == 5){
        int c, h;
         cout<<"Vnesi edna od stranite a,b ili c: ";  cin>>c;  cout<<"Vnesi ja visinata h: ";  cin>>h;
         cout<<"Plostina na triagolnik e: "<<(c*h)/2<<"\n";
    } /* ZA TRIAGOLNIK IMA USTE 3 FORMULI TIE ODPOSLE KE GI DODADAM */ 
    if (b == 6){
        int c, h, l;
         cout<<"Vnesi ja stranata a: ";  cin>>c;  cout<<"Vnesi ja stranata b: ";  cin>>h;
         cout<<"Vnesi ja visinata h: ";  cin>>l;  cout<<"Plostina na romb e: "<<((c+h)/2)*l<<"\n";
    }
    if (b == 7){
        int c, h;
         cout<<"Vnesi gi diagonalite d: ";  cin>>c; cin>>h;
         cout<<"Plostina na deltoid e: "<<(c*h)/2<<"\n";
    }

    if (k == 1){
        int c;
         cout<<"Vnesi ja stranata a: ";  cin>>c;
         cout<<"Plostinata na kvadrat spored stranite e: "<< pow(c,2) <<"\n";
    }
    if (k == 2){
        int c;
         cout<<"Vnesi ja dijagonalata d: ";  cin>>c;
         cout<<"Plostinata na kvadrat spored dijagonala e: " <<(pow(c,2)/2)<<"\n";
    }

    if (r == 1){
        int c, h;
         cout<<"Vnesi ja stranata a: ";  cin>>c;
         cout<<"Vnesi ja visinata h: ";  cin>>h;
         cout<<"Plostinata na romboid so strana a i visina h: "<<c*h<<"\n";
    }
    if (r == 2){
        int c, h, l;
         cout<<"Vnesi ja stranata a: ";  cin>>c;
         cout<<"Vnesi ja stranata b: ";  cin>>h;
         cout<<"Vnesi go agolot Alpha: ";  cin>>l;
         cout<<"Plostinata na romboid so strana a i visina h: "<<c*h*l<<"\n";
    }

    if (r0 == 1){
        int c, h;
         cout<<"Vnesi ja stranata a: ";  cin>>c;
         cout<<"Vnesi ja visinata h: ";  cin>>h;
         cout<<"Plostinata na romb so strana a i visina h: "<<c*h<<"\n";
    }
    if (r0 == 2){
        int c,h;
         cout<<"Vnesi gi diagonalite d: ";  cin>>c;  cin>>h;
         cout<<"Plostina na romb so diagonali e: "<<(c*h)/2<<"\n";
    }
    if (r0 == 3){
        int c,h;
         cout<<"Vnesi ja stranata a: ";  cin>>c;
         cout<<"Vnesi go agolot Alpha: ";  cin>>h;
         cout<<"Plostina na romb so strana a i agol Alpha e: "<<(pow(c,2)*h)<<"\n";
    }


    if (b1 == 1){
        int c;
         cout<<"Vnesi ja stranata a: ";  cin>>c;
         cout<<"Perimetar na kvadrate/romb e: "<< 4*c <<"\n";
    }
    if (b1 == 2){
        int c, h;
         cout<<"Vnesi gi stranite a i b: ";  cin>>c;  cin>>h;
         cout<<"Perimetar na pravoagolnik, deltoid i paralelogram iznesuva: "<< 2*(c+h) <<"\n";
    }
    if (b1 == 3){
        int c, h, l;
         cout<<"Vnesi gi stranite a,b i c: ";  cin>>c;  cin>>h;  cin>>l;
         cout<<"Perimetar na triagolnik e: "<< c+h+l <<"\n";
    }
    if (b1 == 4){
        int c, h, l, d;
         cout<<"Vnesi gi stranite a,b,c i d: ";  cin>>c;  cin>>h;  cin>>l;  cin>>d;
         cout<<"Perimetar na trapez i trapezoid e: "<< c+h+l+d <<"\n";
    }
    if (b1 == 5){
        int c;
        double Pi = 3.14;
         cout<<"Vnesi go radiusot R: ";  cin>>c;
         cout<<"Perimetar na krug e: "<< 2*c*Pi <<"\n";
    }
    if (b1 == 6){
        int c, h;
         cout<<"Vnesi go brojot na strani: ";  cin>>c;  cout<<"Vnesi ja stranta a: ";  cin>>h;
         cout<<"Perimetar na pravilen mnoguagolnik e: "<< c*h <<"\n";
        }

     cin.get(); return 0;
}