#include <iostream>
using namespace std;
int main(){
int a,b=1,c=0,d;
cin>>a;
d = a;
while ( a != 0){
b = a % 10; 
a = a / 10; 
c = c * 10 + b;}
if ( d % 10 == 1 && c % 10 == 1){
cout <<"YAY, poslednata i prvata cifra se 1 "<<endl;}
else {
cout <<"fucka yu"<<endl;}
return 0;}
