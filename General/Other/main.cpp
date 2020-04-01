#include <iostream>
using namespace std;
int main() 
{
grades:
char chs25;
int o1, o2 ,o3, o4, o5, o6, o7, o8, o9, o10, o11, o12, o13, num;
char p1[20], p2[20], p3[20], p4[20], p5[20], p6[20], p7[20], p8[20], p9[20], p10[20], p11[20], p12[20], p13[20];
cout << endl << "! DO 13 OCENI !";
cout << endl << "! dokolku ima pomalku od 13 oceni vnesi 0 za brojot na predmet nad brojot na predmeti koj e potreben ! ";
cout << endl << " Vnesi '13' - broj na predmeti : ";
cin >> num;
cout << endl << "Vnesi ime na predmet 1 : ";
cin >> p1;
cout << endl << "Vnesi ime na predmet 2 : ";
cin >> p2;
cout << endl << "Vnesi ime na predmet 3 : ";
cin >> p3;
cout << endl << "Vnesi ime na predmet 4 : ";
cin >> p4;
cout << endl << "Vnesi ime na predmet 5 : ";
cin >> p5;
cout << endl << "Vnesi ime na predmet 6 : ";
cin >> p6;
cout << endl << "Vnesi ime na predmet 7 : ";
cin >> p7;
cout << endl << "Vnesi ime na predmet 8 : ";
cin >> p8;
cout << endl << "Vnesi ime na predmet 9 : ";
cin >> p9;
cout << endl << "Vnesi ime na predmet 10 : ";
cin >> p10;
cout << endl << "Vnesi ime na predmet 11 : ";
cin >> p11;
cout << endl << "Vnesi ime na predmet 12 : ";
cin >> p12;
cout << endl << "Vnesi ime na predmet 13 : ";
cin >> p13;
cout << endl << "Vnesi ocena na :"<< p1 <<" : ";
cin >> o1;
cout << endl << "Vnesi ocena na :"<< p2 <<" : ";
cin >> o2;
cout << endl << "Vnesi ocena na :"<< p3 <<" : ";
cin >> o3;
cout << endl << "Vnesi ocena na :"<< p4 <<" : ";
cin >> o4;
cout << endl << "Vnesi ocena na :"<< p5 <<" : ";
cin >> o5;
cout << endl << "Vnesi ocena na :"<< p6 <<" : ";
cin >> o6;
cout << endl << "Vnesi ocena na :"<< p7 <<" : ";
cin >> o7;
cout << endl << "Vnesi ocena na :"<< p8 <<" : ";
cin >> o8;
cout << endl << "Vnesi ocena na :"<< p9 <<" : ";
cin >> o9;
cout << endl << "Vnesi ocena na :"<< p10 <<" : ";
cin >> o10;
cout << endl << "Vnesi ocena na :"<< p11 <<" : ";
cin >> o11;
cout << endl << "Vnesi ocena na :"<< p12 <<" : ";
cin >> o12;
cout << endl << "Vnesi ocena na :"<< p13 <<" : ";
cin >> o13;
cout << endl << p1 << " : " << o1;
cout << endl << p2 << " : " << o2;
cout << endl << p3 << " : " << o3;
cout << endl << p4 << " : " << o4;
cout << endl << p5 << " : " << o5;
cout << endl << p6 << " : " << o6;
cout << endl << p7 << " : " << o7;
cout << endl << p8 << " : " << o8;
cout << endl << p9 << " : " << o9;
cout << endl << p10 << " : " << o10;
cout << endl << p11 << " : " << o11;
cout << endl << p12 << " : " << o12;
cout << endl << p13 << " : " << o13;
double add1 = o1 + o2 + o3 + o4 + o5 + o6 + o7 + o8 + o9 + o10 + o11 + o12 + o13;
double prosek = (double)add1 / num;
cout << endl << "Prosek : "<< ((double)add1 / num);
if ( (double)add1 / num < 1.500000)
cout << endl << "  ";
cout <<(double)add1 / num<<" - "<<"Vasiot uspeh e nedovolen!"<<endl;
else if ( (double)add1 / num > 1.500000)
cout << endl << "  ";
cout <<(double)add1 / num<<" - "<<"Vasiot uspeh e dovolen!"<<endl;
else if ( (double)add1 / num > 2.500000)
cout << endl << "  ";
cout <<(double)add1 / num<<" - "<<"Vasiot uspeh e dobar!"<<endl;
else if ( (double)add1 / num > 3.500000)
cout << endl << "  ";
cout <<(double)add1 / num<<" - "<<"Vasiot uspeh e mnogu dobar!"<<endl;
else if ( (double)add1 / num > 4.500000)
cout << endl << "  ";
cout <<(double)add1 / num<<" - "<<"Vasiot uspeh e odlichen!"<<endl;
else if ( (double)add1 / num > 5)
cout << endl << "  ";
cout <<(double)add1 / num<<" - "<<"error - Prosekot e ili pod 0 ili nad 5 - error "<<endl;
cout << endl << " CONTINUE ? (y/n): ";
cin >> chs25;
if (chs25 == 'y') goto grades;
if (chs25 == 'n') goto end;

end:
cout << endl << " Vi blagodarime za koristenje na nashite uslugi ";
return 0;
}

