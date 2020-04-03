#include <iostream>
using namespace std;
int main()
{
choice:
int choice1;
main:
cout <<"               MAIN MENU                   "<<endl;
cout <<"(1)         counting numbers            (1)"<<endl;
cout <<"(2)       number classification         (2)"<<endl;
cout <<"(3)            calculator               (3)"<<endl;
cout <<"(4)             oceni                   (4)"<<endl;
cout <<"(5)              BACK                   (5)"<<endl;
cout <<"(6)              EXIT                   (6)"<<endl;
cout <<" "<<endl;
cout <<"ENTER : "<<endl;
cin >>choice1;
if ( choice1 == 1) goto counting;
if ( choice1 == 2) goto parnepar;
if ( choice1 == 3) goto calculator;
if ( choice1 == 3) goto grades;
if ( choice1 == 4) goto choice;
if ( choice1 == 5) goto exit;

parnepar:{
int choice152;
cout <<"                   MAIN MENU                      "<<endl;
cout <<"(1)     klasifikacija na pren ili neparen      (1)"<<endl;
cout <<"(2) klasifikacija na brojot na koj zavrshuvaat (2)"<<endl;
cout <<"(3)                  BACK                      (3)"<<endl;
cout <<"(4)                  EXIT                      (4)"<<endl;
cout <<" "<<endl;
cout <<"ENTER : "<<endl;
if ( choice152 == 1) goto parnepar2;
if ( choice152 == 2) goto parnepar3;
if ( choice152 == 3) goto main;
if ( choice152 == 4) goto exit;}

parnepar3:{
int num18;
int num16,num162,num17,cha163;
char chs164;
cout <<" RABOTI SAMO SO CELI BROEVI! : "<<endl;
cout <<" Vnesi prv broj : "<<endl;
cin>>num16;
cout<<" Vnesi. vtor broj : "<<endl;
cin >>num162;
cout << endl << " Vnesi operacija : ( +, -, *, / ) : ";
cin >>chs164;
if (chs164 == '+' ) cha163 = num16 + num162;
if (chs164 == '-' ) cha163 = num16 - num162;
if (chs164 == '/' ) cha163 = num16 / num162;
if (chs164 == '*' ) cha163 = num16 * num162;
cout << endl <<" Vnesi go brojot na koj mislish deka rezultatot zavrshuva : ";
cin >>num18;
if ( cha163 % 10 == num18){
cout <<" Tochno "<<" Rezultatot iznesuva"<< cha163 <<" i zavrshuva na "<<(cha163 % 10)<<endl;}
if ( cha163 % 10  != num18){
cout <<" Greshno "<<"Rezultatot iznesuva"<< cha163 <<" i zavrshuva na "<<(cha163 % 10)<<endl;}}

parnepar2:{
int num15;
cout <<" Vnesi cel broj : "<<endl;
cin >>num15;
if ( num15 % 2 == 0){
cout <<num15<<" E paren broj "<<endl;}
if ( num15 % 2 == 1){
cout <<num15<<" E neparen broj "<<endl;}}

calculator:{
int choice3;
cout <<"             CALCULATOR MENU              "<<endl;
cout <<"(1)        Standard Calculator         (1)"<<endl;
cout <<"(2)        Numeral  seperation         (2)"<<endl;
cout <<"(3)              NZD                   (3)"<<endl;
cout <<"(4)              BACK                  (4)"<<endl;
cout <<"(5)              EXIT                  (5)"<<endl;
cout <<" "<<endl;
cout <<"ENTER : "<<endl;
cin >>choice3;
if ( choice3 == 1) goto standardcal;
if ( choice3 == 2) goto numeralcal;
if ( choice3 == 3) goto nzd;
if ( choice3 == 4) goto choice;
if ( choice3 == 5) goto exit;}

nzd:{
int x1,y1,choice5;
cout << "Vnesi go prviot broj: "<<endl;
cin >>x1;
cout << "Vnesi go vtoriot broj: "<<endl;
cin >>y1;
while (x1!=y1)
{
if (x1>y1)
x1=x1-y1;
else
y1=y1-x1;
}
cout<<"NZD e: "<<x1<<endl;;
cout << endl << " (1) Back (1)";
cout << endl << " (2) Exit (2)";
cout <<" "<<endl;
cout <<"Enter : "<<endl;
cin >>choice5;
if ( choice5 == 1 ) goto choice;
if ( choice5 == 2 ) goto exit;}

numeralcal:{
float add;
char chs, chs2;
int a, b, c, d, e, f, g, h, h2, i, i2, j, j2, e2, z, z2, x, x2, v, v2, n, n2, m, m2,k, q, q2, w, w2, r, r2, t, t2, u, u2;
cout << endl << "Vnesi broj (od 10 do 10000000) : ";
cin >> c;
if ( c < 100)
{
cout << endl << " Odberi operacija ( +, -, *, /) : ";
cin >> chs2;
a = c / 10; 
b = c % 10; 
if (chs2 == '+') add = a + b;
if (chs2 == '-') add = a - b;
if (chs2 == '*') add = a * b;
if (chs2 == '/') add = a / b; 
cout << endl <<"" "Prviot broj e : "" "<< a <<" "" Vtoriot broj e : " " "<< b <<" "" Zbirot na broevite e : "<<  (float)add;
cout << endl <<" Dali bi sakal da vnesesh nov broj ? (Y/N): ";
cin >> chs;
if ( chs == 'y') goto choice;
if ( chs == 'n') goto end;
}
else if ( c < 1000)
{
cout << endl << " Odberi operacija ( +, -, *, /) : ";
cin >> chs2;
d = c / 100; 
e2 = c / 10; 
e = e2 % 10; 
f = c % 10; 
if (chs2 == '+') add = d + e + f;
if (chs2 == '-') add = d - e - f;
if (chs2 == '*') add = d * e * f;
if (chs2 == '/') add = d / e / f; 
cout << endl <<"" "Prviot broj e : "" "<< d <<" "" Vtoriot broj e : " ""<< e <<" "" Tretiot broj e : "<< f <<" "" Zbirot na broevite e : "<<  (float)add;	
cout << endl <<" Dali bi sakal da vnesesh nov broj ? (Y/N): ";
cin >> chs;
if ( chs == 'y') goto choice;
if ( chs == 'n') goto end;
}
else if ( c < 10000)
{
cout << endl << " Odberi operacija ( +, -, *, /) : ";
cin >> chs2;
g = c / 1000; 
j2 = c / 100; 
j = j2 % 10; 
h2 = c / 10; 
h = h2 % 10; 
i = c % 10; 
if (chs2 == '+') add = g + h + i + j;
if (chs2 == '-') add = g - h - i - j;
if (chs2 == '*') add = g * h * i * j;
if (chs2 == '/') add = g / h / i / j; 
cout << endl <<"" "Prviot broj e : "" "<< g <<" "" Vtoriot broj e : " ""<< j <<" "" Tretiot broj e : "<< h <<" " " Chetvrtiot broj e : "<< i << " "" Zbirot na broevite e : "<<  (float)add;	
cout << endl <<" Dali bi sakal da vnesesh nov broj ? (Y/N): ";
cin >> chs;
if ( chs == 'y') goto choice;
if ( chs == 'n') goto end;
}
else if ( c < 100000)
{
cout << endl << " Odberi operacija ( +, -, *, /) : ";
cin >> chs2;
z = c / 10000;  
x2 = c / 1000;  
x = x2 % 10; 
v2 = c / 100; 
v = v2 % 10; 
n2 = c / 10; 
n = n2 % 10; 
m2 = c / 100; 
m = c % 10;
if (chs2 == '+') add = z + x + v + n + m;
if (chs2 == '-') add = z - x - v - n - m;
if (chs2 == '*') add = z * x * v * n * m;
if (chs2 == '/') add = z / x / v / n / m; 
cout << endl <<"" "Prviot broj e : "" "<< z <<" "" Vtoriot broj e : " " "<< x <<" "" Tretiot broj e : "<< v << "" " Chetvrtiot broj e : "<< n << " Petiot broj e : "" "<< m << " ""Zbirot na broevite e : "<< (float)add;
cout << endl <<" Dali bi sakal da vnesesh nov broj ? (Y/N): ";
cin >> chs;
if ( chs == 'y') goto choice;
if ( chs == 'n') goto end;
}
else if ( c < 1000000)
{
cout << endl << " Odberi operacija ( +, -, *, /) : ";
cin >> chs2;
k = c / 100000;  
q2 = c / 10000;  
q = q2 % 10;  
w2 = c / 1000; 
w = w2 % 10; 
r2 = c / 100; 
r = r2 % 10; 
t2 = c / 10; 
t = t2 % 10; 
u = c % 10; 
if (chs2 == '+') add = k + q + w + r + t + u;
if (chs2 == '-') add = k - q - w - r - t - u;
if (chs2 == '*') add = k * q * w * r * t * u;
if (chs2 == '/') add = k / q / w / r / t / u; 
cout << endl <<"" "Prviot broj e : "" "<< k <<" "" Vtoriot broj e : " " "<< q <<" "" Tretiot broj e : "<< w << "" "" " Chetvrtiot broj e : "<< r << " Petiot broj e : "" "<< t << " "" Shestiot broj e : "<< u <<"" " Zbirot na broevite e : "<< (float)add;
cout << endl <<" Dali bi sakal da vnesesh nov broj ? (Y/N): ";
cin >> chs;
if ( chs == 'y') goto choice;
if ( chs == 'n') goto end;
}
else if ( c < 10)
{
cout << endl << " Vnese : "<<c;
cout << endl << "! Vneseniot broj e ednocifen !";
cout << endl << "! Vnesi minimum dvo cifren broj !";
cout << endl << "! vnesi broj pogolem od 10 ! ";
cout <<" " << endl;
cin.ignore(); 
goto choice;
}
else if ( c > 10000000)
{
cout << endl << " Vnese : "<<c;
cout << endl << "! vnesi broj pomal od 1 milion ! ";
cout <<" " << endl;
cin.ignore(); 
goto choice;
}
end:
cout << endl << "  ";
goto exit;}

standardcal:{
float first,second,add123,choice4;
char op;
cout << endl << " Vnesi prv broj : ";
cin >>first;
cout << endl << " Vnesi vtor broj : ";
cin >>second;
cout << endl << " Vnesi operacija ( +, -, *, / ) : ";
cin >>op;
if (op == '+' ) add123 = (float)first + (float)second;
if (op == '-' ) add123 = (float)first - (float)second;
if (op == '/' ) add123 = (float)first / (float)second;
if (op == '*' ) add123 = (float)first * (float)second;
cout << endl << " = "<<add123;
cout << endl << " (1) Back (1)";
cout << endl << " (2) Exit (2)";
cout <<" "<<endl;
cout <<"Enter : "<<endl;
cin >>choice4;
if ( choice4 == 1 ) goto choice;
if ( choice4 == 2 ) goto exit;}

counting:{
int choice2;
cout <<"                COUNTING MENUE                  "<<endl;
cout <<"(1)                Forwards                  (1)"<<endl;
cout <<"(2)                Backwards                 (2)"<<endl;
cout <<"(3)                  BACK                    (3)"<<endl;
cout <<"(4)                  EXIT                    (4)"<<endl;
cout <<" "<<endl;
cout <<"ENTER : "<<endl;
cin >>choice2;
if ( choice2 == 1 ) goto forwards;
if ( choice2 == 2 ) goto backwards;
if ( choice2 == 3 ) goto choice;
if ( choice2 == 4 ) goto exit;}

forwards:{
int frw,frw2;
cout <<" Vnesi cel broj nad 0 "<<endl;
cout <<"ENTER : "<<endl;
cin >>frw;
cout <<" Do koj broj da brojam? "<<endl;
cout <<"ENTER : "<<endl;
cin >>frw2;
while (frw < frw2)
{
cout <<endl<<frw;
frw++;
}
goto counting;}

backwards:{
int bkw,bkw2;
cout <<" Vnesi cel broj, pod\nad (ne pomal od onoj do koj se broi) 0 "<<endl;
cout <<"ENTER : "<<endl;
cin >>bkw;
cout <<"Vnesi negativen broj do koj sakash da brojam (pr: - 5000)?"<<endl;
cout <<"ENTER : "<<endl;
cin >>bkw2;
while (bkw > bkw2)
{
cout <<endl<<bkw;
bkw--;
}
goto exit;}

grades:
{
char chs25;
int prosek2;
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
cout <<endl<<"Vnesi ja brojkata koja ja dobi pogore za da go vidish tvojot uspeh";
cin >>prosek2;
switch (prosek2)
{
case 1:
cout<<endl<<prosek2<<" : "<<"Tvojot uspeh e nedovolen";
break;
case 2:
cout<<endl<<prosek2<<" : "<<"Tvojot uspeh e dovolen";
break;
case 3:
cout<<endl<<prosek2<<" : "<<"Tvojot uspeh e dobar";
break;
case 4:
cout<<endl<<prosek2<<" : "<<"Tvojot uspeh e mnogu dobar";
break;
case 5:
cout<<endl<<prosek2<<" : "<<"Tvojot uspeh e odlichen";
break;
}
cout << endl << "Prosek : "<< ((double)add1 / num);
cout << endl << " CONTINUE ? (y/n): ";
cin >> chs25;
if (chs25 == 'y') goto grades;
if (chs25 == 'n') goto exit;	
}

exit:{
cout << " "<<endl;
cout <<"THANKS FOR USING THIS PROGRAM "<<endl;}

return 0;
}


