#include <iostream>
#include <math.h>
#include <cstring>
#include <cstdlib>

int main(){
    std::cout<<"     ----------------------------- \n";
    std::cout<<"ODBERI DALI SAKAS PLOSTINA ILI PERIMETAR \n";
    std::cout<<"A. ZA PLOSTINA ODBERI 1 \n";
    std::cout<<"B. ZA PERIMETAR ODBERI 2 \n";
    std::cout<<"     ----------------------------- \n";

    int a, b, b1, k, r, r0; std::cin>>a;
    while (a < 1  || a > 2){ std::cout<<"VNESI VALIDNA OPCIJA: "; std::cin>>a; }

    if (a == 1){
        std::cout<<"     ----------------------------- \n";
        std::cout<<"            ODBRA PLOSTINA \n"; std::cout<<"            ODBERI FIGURA \n"; std::cout<<"1. KVADRAT \n";
        std::cout<<"2. PRAVOAGOLNIK \n"; std::cout<<"3. ROMBOID \n"; std::cout<<"4. ROMB \n";
        std::cout<<"5. TRIAGOLNIK \n"; std::cout<<"6. TRAPEZ \n"; std::cout<<"7. DELTOID \n";
        std::cout<<"     ----------------------------- \n";
        std::cin>> b;
        while(b < 1 || b > 7){ std::cout<<"VNESI VALIDNA OPCIJA: "; std::cin>>b;}
    }

    else if(a == 2){
        std::cout<<"     ----------------------------- \n";
        std::cout<<"            ODBRA PERIMETAR \n"; std::cout<<"            ODBERI FIGURA \n";
        std::cout<<"1. KVADRAT, ROMB \n"; std::cout<<"2. PRAVOAGOLNIK, DELTOID, PARALELOGRAM \n"; std::cout<<"3. TRIAGOLNIK \n";
        std::cout<<"4. TRAPEZ, TRAPEZOID \n"; std::cout<<"5. KRUG \n"; std::cout<<"6. PRAVILEN MNOGUAGOLNIK \n";
        std::cout<<"     ----------------------------- \n";
        std::cin>> b1;
        while(b1 < 1 || b1 > 6){ std::cout<<"VNESI VALIDNA OPCIJA: "; std::cin>>b1; }
        }


    if (b == 1){
        std::cout<<"Za da presmetas so strani vnesi 1 za da presmetas so dijagonali vnesi 2! Sega vnesi broj: "; std::cin>>k;
        while(k < 1 || k > 2){ std::cout<<"VNESI VALIDNA OPCIJA: "; std::cin>>k;}
    }
    if (b == 2){
        int c, h;
        std::cout<<"Vnesi ja stranata a: "; std::cin>> c; std::cout<<"Vnesi ja stranata b: "; std::cin>> h;
        std::cout<<"Plostinata na pravoagolnikot e: " << c * h <<"\n";
    }
    if (b == 3){
        std::cout<<"Za da presmetas so strana i visina vnesi 1, za da presmetas so dvete strani i agolot vnesi 2! Sega vnesi broj: "; std::cin>>r;
        while( r < 1 || r >2){ std::cout<<"VNESI VALIDNA OPCIJA: "; std::cin>>r; }
    }
    if (b == 4){
        std::cout<<"Za da presmetas so strana i visina vnesi 1, za da presmetas so diagonalite vnesi 2, za da presmetas so stranata i agolot vnesi 3! Sega vnesi broj: "; std::cin>>r0;
        while ( r0 < 1 || r0 > 3 ){ std::cout<<"VNESI VALIDNA OPCIJA: ";std::cin>>r0; }
    }
    if (b == 5){
        int c, h;
        std::cout<<"Vnesi edna od stranite a,b ili c: "; std::cin>>c; std::cout<<"Vnesi ja visinata h: "; std::cin>>h;
        std::cout<<"Plostina na triagolnik e: "<<(c*h)/2<<"\n";
    } // ZA TRIAGOLNIK IMA USTE 3 FORMULI TIE ODPOSLE KE GI DODADAM
    if (b == 6){
        int c, h, l;
        std::cout<<"Vnesi ja stranata a: "; std::cin>>c; std::cout<<"Vnesi ja stranata b: "; std::cin>>h;
        std::cout<<"Vnesi ja visinata h: "; std::cin>>l; std::cout<<"Plostina na romb e: "<<((c+h)/2)*l<<"\n";
    }
    if (b == 7){
        int c, h;
        std::cout<<"Vnesi gi diagonalite d: "; std::cin>>c;std::cin>>h;
        std::cout<<"Plostina na deltoid e: "<<(c*h)/2<<"\n";
    }

    if (k == 1){
        int c;
        std::cout<<"Vnesi ja stranata a: "; std::cin>>c;
        std::cout<<"Plostinata na kvadrat spored stranite e: "<< pow(c,2) <<"\n";
    }
    if (k == 2){
        int c;
        std::cout<<"Vnesi ja dijagonalata d: "; std::cin>>c;
        std::cout<<"Plostinata na kvadrat spored dijagonala e: " <<(pow(c,2)/2)<<"\n";
    }

    if (r == 1){
        int c, h;
        std::cout<<"Vnesi ja stranata a: "; std::cin>>c;
        std::cout<<"Vnesi ja visinata h: "; std::cin>>h;
        std::cout<<"Plostinata na romboid so strana a i visina h: "<<c*h<<"\n";
    }
    if (r == 2){
        int c, h, l;
        std::cout<<"Vnesi ja stranata a: "; std::cin>>c;
        std::cout<<"Vnesi ja stranata b: "; std::cin>>h;
        std::cout<<"Vnesi go agolot Alpha: "; std::cin>>l;
        std::cout<<"Plostinata na romboid so strana a i visina h: "<<c*h*l<<"\n";
    }

    if (r0 == 1){
        int c, h;
        std::cout<<"Vnesi ja stranata a: "; std::cin>>c;
        std::cout<<"Vnesi ja visinata h: "; std::cin>>h;
        std::cout<<"Plostinata na romb so strana a i visina h: "<<c*h<<"\n";
    }
    if (r0 == 2){
        int c,h;
        std::cout<<"Vnesi gi diagonalite d: "; std::cin>>c; std::cin>>h;
        std::cout<<"Plostina na romb so diagonali e: "<<(c*h)/2<<"\n";
    }
    if (r0 == 3){
        int c,h;
        std::cout<<"Vnesi ja stranata a: "; std::cin>>c;
        std::cout<<"Vnesi go agolot Alpha: "; std::cin>>h;
        std::cout<<"Plostina na romb so strana a i agol Alpha e: "<<(pow(c,2)*h)<<"\n";
    }


    if (b1 == 1){
        int c;
        std::cout<<"Vnesi ja stranata a: "; std::cin>>c;
        std::cout<<"Perimetar na kvadrate/romb e: "<< 4*c <<"\n";
    }
    if (b1 == 2){
        int c, h;
        std::cout<<"Vnesi gi stranite a i b: "; std::cin>>c; std::cin>>h;
        std::cout<<"Perimetar na pravoagolnik, deltoid i paralelogram iznesuva: "<< 2*(c+h) <<"\n";
    }
    if (b1 == 3){
        int c, h, l;
        std::cout<<"Vnesi gi stranite a,b i c: "; std::cin>>c; std::cin>>h; std::cin>>l;
        std::cout<<"Perimetar na triagolnik e: "<< c+h+l <<"\n";
    }
    if (b1 == 4){
        int c, h, l, d;
        std::cout<<"Vnesi gi stranite a,b,c i d: "; std::cin>>c; std::cin>>h; std::cin>>l; std::cin>>d;
        std::cout<<"Perimetar na trapez i trapezoid e: "<< c+h+l+d <<"\n";
    }
    if (b1 == 5){
        int c;
        double Pi = 3.14;
        std::cout<<"Vnesi go radiusot R: "; std::cin>>c;
        std::cout<<"Perimetar na krug e: "<< 2*c*Pi <<"\n";
    }
    if (b1 == 6){
        int c, h;
        std::cout<<"Vnesi go brojot na strani: "; std::cin>>c; std::cout<<"Vnesi ja stranta a: "; std::cin>>h;
        std::cout<<"Perimetar na pravilen mnoguagolnik e: "<< c*h <<"\n";
        }

    std::cin.get(); return 0;
}