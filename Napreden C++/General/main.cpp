#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
int a, b=1, c=0, d, e, f;
cout <<"Enter a number"<<endl;
cin>>a; d = a;
while (cin.fail()){
cin.clear(); cin.ignore(INT_MAX, '\n'); cin>>a;}
while ( a != 0){
b = a % 10;	a = a / 10; c = c * 10 + b;}
e = d % 10; f = c % 10; 
cout <<"Broj : "<<d<<endl;
cout <<"Prva cifra: "<<f<<"  "<<"Posledna cifra: "<<e<<endl;
cout <<"Obratno : "<<c<<endl;
cout <<"Prva cifra: "<<e<<"  "<<"Posledna cifra: "<<f<<endl;
system ("PAUSE");
return 0;}

