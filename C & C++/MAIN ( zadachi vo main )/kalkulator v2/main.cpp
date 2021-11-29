#include <iostream>
using namespace std;
main()
{
main:{
char op;
cout<<"Odberi operacija (+, -, /, *) : "<<endl;
cin>>op;
while (cin.fail()){
cin.clear();
cin.ignore(CHAR_MAX, '\n');
cout <<endl<<"Izberete edno od ( +, -, /, *)";
cout <<endl<<"Vnesi operacija : ";
cin >>op;}
if (op == '+' ) goto add;
if (op == '-' ) goto exit;//in development
if (op == '/' ) goto exit;//in development
if (op == '*' ) goto exit;//in development
else goto main;}

add:{
int broj,vtor,x,chetvrt;
cout<<"Kolku broevi sakate da sobirate?"<<endl;
cin>>broj;
while (cin.fail()){
cin.clear();
cin.ignore(INT_MAX, '\n');
cout <<endl<<"Mozhe da vnesuvash samo broevi";
cout <<endl<<"Vnesi broj : ";
cin >>broj;}
chetvrt=0;
vtor=1;
while(vtor<=broj)
{
cout<<"Vnesi go "<<vtor<<"-iot broj:";
cin>>x;
while (cin.fail()){
cin.clear();
cin.ignore(INT_MAX, '\n');
cout <<endl<<"Mozhe da vnesuvash samo broevi";
cout <<endl<<"Vnesi broj : ";
cin >>x;}
chetvrt=chetvrt+x;
vtor++;}
cout<<"Zbirot na vnesenite broevi e:"<<chetvrt<<endl;
goto exit;}

exit:{
string chs;             
cout <<"Vi blagodarime za koristenje na nashata programa "<<endl;
cout <<"Dali sakate da izlezete od programata? - (da/ne) : "<<endl;
cin >>chs;
if( chs == "da") goto exit2;
if( chs == "ne") goto main;
else goto exit2;}

exit2:
cout <<"Vi blagodarime za koristenje na nashata programa "<<endl;
return 0;
}
