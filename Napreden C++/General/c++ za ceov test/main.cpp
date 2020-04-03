#include <iostream>
using namespace std;
int main(){
int a,b;
cin>>a;
while ( a != 0 ){
b = a % 10; a = a / 10;}
if ( b % 2 == 0 ){ cout <<"brojot e paren "<<endl;}
else { cout <<"brojot ne e paren"<<endl;}
return 0;}
