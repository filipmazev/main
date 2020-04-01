#include <iostream>
#include <cstdlib>
#include <climits>
using namespace std;
int main(){
main:{
int num;
cout <<endl<<"Vnesi broj koj e paren i zavrshuva na 2 : ";
cin >>num;
while (cin.fail()){
cin.clear();
cin.ignore(INT_MAX, '\n');
cout <<endl<<"Mozhe da vnesuvash samo broevi";
cout <<endl<<"Vnesi broj : ";}
cin >>num;
if ( num % 2 == 0 && num %10 == 2 ){
cout <<endl<<"Brojot "<<" "<<num<<" "<<"gi ispolnuva uslovite";}
else{
cout <<endl<<"Brojot "<<" "<<num<<" "<<"ne gi ispolnuva uslovite";}
goto main2;}

main2:{
int num2;
cout <<endl<<" ";
cout <<endl<<"Vnesi broj koj e pozotiven i ednocifren : ";
cin >>num2;
while (cin.fail()){
cin.clear();
cin.ignore(INT_MAX, '\n');
cout <<endl<<"Mozhe da vnesuvash samo broevi";
cout <<endl<<"Vnesi broj : ";}
cin >>num2;
if ( num2 >= 0 && num2 < 10 ){
cout <<endl<<"Brojot "<<" "<<num2<<" "<<"gi ispolnuva uslovite";}
else{
cout <<endl<<"Brojot "<<" "<<num2<<" "<<"ne gi ispolnuva uslovite";}
goto main3;}

main3:{
int num3;
cout <<endl<<" ";
cout <<endl<<"Vnesi broj deliv so 3 ili ednakov na 5 : ";
cin >>num3;
while (cin.fail()){
cin.clear();
cin.ignore(INT_MAX, '\n');
cout <<endl<<"Mozhe da vnesuvash samo broevi";
cout <<endl<<"Vnesi broj : ";}
cin >>num3;
if ( num3 % 3 == 0 || num3 == 5 ){
cout <<endl<<"Brojot "<<" "<<num3<<" "<<"gi ispolnuva uslovite";}
else{
cout <<endl<<"Brojot "<<" "<<num3<<" "<<"ne gi ispolnuva uslovite";}
goto exit;}

exit:
cout << " "<<endl;
cout <<"THANKS FOR USING THIS PROGRAM "<<endl;	
system ("PAUSE");
}
