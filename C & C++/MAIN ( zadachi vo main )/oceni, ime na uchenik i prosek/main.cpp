#include <iostream>
using namespace std;
int main ()
{
double prosek;
int add1,add2, add3, add4, add5, add6;
int o1, o2 ,o3, o4, o5, o6, o7, o8, o9, o10, o11, o12, o13;
char p1[20], p2[20], p3[20], p4[20], p5[20], p6[20], p7[20], p8[20], p9[20], p10[20], p11[20], p12[20], p13[20];
cout << endl <<" Dali si I(prva) godina sredno? : ";
int x;
cout << " 1 - Da \n";
cout << " 2 - Ne \n";
cout << " 3 - continue \n";
cout << " Vnesi broj (1-da; 2-ne) i pritisni enter: ";
cin >> x;
if ( x == 1 )
{
double prosek2;
int add12, add22, add32, add42, add52, add62;
int o12, o22 ,o32, o42, o52, o62, o72, o82, o92, o102, o112, o122, o132;
cout << endl << " VNESI OCENEI ";
cout << endl << " angliski : ";
cin >> o12;
cout << endl << " fizichko : ";
cin >> o22;
cout << endl << " likovno : ";
cin >> o32;
cout << endl << " geografija : ";
cin >> o42;
cout << endl << " informatika : ";
cin >> o52;
cout << endl << " matematika : ";
cin >> o62;
cout << endl << " germanski/francuski : ";
cin >> o72;
cout << endl << " fizika : ";
cin >> o82;
cout << endl << " biologija : ";
cin >> o92;
cout << endl << " hemija : ";
cin >> o102;
cout << endl << " makedonski : ";
cin >> o112;
cout << endl << " istorija : ";
cin >> o122;
cout << endl << " muzichko : ";
cin >> o132;
add12 = o12 + o22 + o32;
add22 = add12 + o42 + o52;
add32 = add22 + o62 + o72;
add42 = add32 + o82 + o92;
add52 = add42 + o102 + o112;
add62 = add52 + o122 + o132;
prosek2 = add62 / 13;
cout << endl << "Prosek : "<< (double)prosek2;
}	
if ( x == 2 || x == 3)
{
cout << endl << "! DO 13 OCENI !"; 
cout << endl << "! dokolku ima pomalku od 13 oceni vnesi 0 za brojot na predmet nad brojot na predmeti koj e potreben ! ";
cout << endl << "Vnesi ime na predmet 1 : ";
cin >> p1;
cout << endl << "Vnesi ocena na :"<< p1 <<" : ";
cin >> o1;
cout << endl << p1 << " : " << o1;
cout << endl << "Vnesi ime na predmet 2 : ";
cin >> p2;
cout << endl << "Vnesi ocena na :"<< p2 <<" : ";
cin >> o2;
cout << endl << p2 << " : " << o2;
cout << endl << "Vnesi ime na predmet 3 : ";
cin >> p3;
cout << endl << "Vnesi ocena na :"<< p3 <<" : ";
cin >> o3;
cout << endl << p3 << " : " << o3;
cout << endl << "Vnesi ime na predmet 4 : ";
cin >> p4;
cout << endl << "Vnesi ocena na :"<< p4 <<" : ";
cin >> o4;
cout << endl << p4 << " : " << o4;
cout << endl << "Vnesi ime na predmet 5 : ";
cin >> p5;
cout << endl << "Vnesi ocena na :"<< p5 <<" : ";
cin >> o5;
cout << endl << p5 << " : " << o5;
cout << endl << "Vnesi ime na predmet 6 : ";
cin >> p6;
cout << endl << "Vnesi ocena na :"<< p6 <<" : ";
cin >> o6;
cout << endl << p6 << " : " << o6;
cout << endl << "Vnesi ime na predmet 7 : ";
cin >> p7;
cout << endl << "Vnesi ocena na :"<< p7 <<" : ";
cin >> o7;
cout << endl << p7 << " : " << o7;
cout << endl << "Vnesi ime na predmet 8 : ";
cin >> p8;
cout << endl << "Vnesi ocena na :"<< p8 <<" : ";
cin >> o8;
cout << endl << p8 << " : " << o8;
cout << endl << "Vnesi ime na predmet 9 : ";
cin >> p9;
cout << endl << "Vnesi ocena na :"<< p9 <<" : ";
cin >> o9;
cout << endl << p9 << " : " << o9;
cout << endl << "Vnesi ime na predmet 10 : ";
cin >> p10;
cout << endl << "Vnesi ocena na :"<< p10 <<" : ";
cin >> o10;
cout << endl << p10 << " : " << o10;
cout << endl << "Vnesi ime na predmet 11 : ";
cin >> p11;
cout << endl << "Vnesi ocena na :"<< p11 <<" : ";
cin >> o11;
cout << endl << p11 << " : " << o11;
cout << endl << "Vnesi ime na predmet 12 : ";
cin >> p12;
cout << endl << "Vnesi ocena na :"<< p12 <<" : ";
cin >> o12;
cout << endl << p12 << " : " << o12;
cout << endl << "Vnesi ime na predmet 13 : ";
cin >> p13;
cout << endl << "Vnesi ocena na :"<< p13 <<" : ";
cin >> o13;
cout << endl << p13 << " : " << o13;
add1 = o1 + o2 + o3;
add2 = add1 + o4 + o5;
add3 = add2 + o6 + o7;
add4 = add3 + o8 + o9;
add5 = add4 + o10 + o11;
add6 = add5 + o12 + o13;
prosek = add6 / 13;
cout << endl << "Prosek : "<<  prosek;
cout << endl <<"Vnesi ja brojkata koga ja dobi pogore za da go vidish tvojot uspeh: ";
cin >>prosek2;
switch (prosek)
{
case 1:
cout<<endl<<prosek<<" : "<<"Tvojot uspeh e nedovolen";
break;
case 2:
cout<<endl<<prosek<<" : "<<"Tvojot uspeh e dovolen";
break;
case 3:
cout<<endl<<prosek<<" : "<<"Tvojot uspeh e dobar";
break;
case 4:
cout<<endl<<prosek<<" : "<<"Tvojot uspeh e mnogu dobar";
break;
case 5:
cout<<endl<<prosek<<" : "<<"Tvojot uspeh e odlichen";
break;
}

return 0;
}
}
