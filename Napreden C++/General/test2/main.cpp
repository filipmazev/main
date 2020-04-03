#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
main:{
int a,b;
cout <<endl<<"Vnesi dva broja ";
cout <<" "<<" : "<<endl;
cin >>a>>b;
while ( a != b){
if ( a > b ) a = a - b;
else b = b - a;}
cout <<" NZD e: "<<a<<endl;
int a2,b2,pgl,pml;
cout <<"Vnesi ushte dva broja: "<<endl;
cin >>a2>>b2;
if ( a2 > b2 ){ pgl = a2; pml = b2;}
else{ pgl = b2; pml = a2;}
int nzs = 0; int whl = 1;
while ( whl == 1 ){
nzs = nzs + pgl;
if ( nzs % pml == 0) whl = 0;}
cout <<" NZS e: "<<nzs<<endl;
int a3; a3 = a + nzs;
cout <<" Zbirot na nzs i nzd e: "<<a3<<endl;
int c=0;
while ( a3 != 0 ){
b = a3 % 10;
a3 = a3 / 10;
c++;}
if ( c % 2 == 0 ){ cout <<"brojot na cifri vo ovoj rezultat e paren"<<endl;
goto exit;}
if ( c % 2 != 0 ){ cout <<"brojot na cifri vo ovoj rezultat ne e paren"<<endl;
goto exit;}}
exit:{
cout <<"Vi blagodarime za koristenje na ovaa programa "<<endl;
cout <<"(1) Back (1)"<<endl;
cout <<"(2) Exit (2)"<<endl;
int chs;
cin>>chs;
if (chs == 2 ) goto exit2;
if (chs == 1 ) goto main;
else goto exit;}
exit2:{
cout <<" "<<endl;
system ("PAUSE");}

return 0;
}
