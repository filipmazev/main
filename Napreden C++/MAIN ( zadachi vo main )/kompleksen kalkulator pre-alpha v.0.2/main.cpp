#include <iostream>
#include <climits> 
using namespace std;
int main(){
main:{
int choice1;
cout <<"               MAIN MENU                   "<<endl;
cout <<"(1)             broenje                 (1)"<<endl;
cout <<"(2)      klasifikacija na broevi        (2)"<<endl;
cout <<"(3)            calculator               (3)"<<endl;
cout <<"(4)              oceni                  (4)"<<endl;
cout <<"(5)              BACK                   (5)"<<endl;
cout <<"(6)              EXIT                   (6)"<<endl;
cout <<" "<<endl;
cout <<"ENTER : "<<endl;
cin >>choice1;
while (cin.fail()){
cin.clear();
cin.ignore(INT_MAX, '\n'); 
cout << "Vnesi edna od opciite "<<endl;
cout << "Enter: "<<endl;
cin >>choice1;}
if ( choice1 == 1) goto counting;
if ( choice1 == 2) goto parnepar;
if ( choice1 == 3) goto calculator;
if ( choice1 == 3) goto grades;
if ( choice1 == 4) goto main;
if ( choice1 == 5) goto exit;
else goto main;}

parnepar:{
int choice152;
cout <<"                   MAIN MENU                      "<<endl;
cout <<"(1)     klasifikacija na pren ili neparen      (1)"<<endl;
cout <<"(2) klasifikacija na brojot na koj zavrshuvaat (2)"<<endl;
cout <<"(3)                  BACK                      (3)"<<endl;
cout <<"(4)                  EXIT                      (4)"<<endl;
cout <<" "<<endl;
cout <<"ENTER : "<<endl;
cin >>choice152;
while (cin.fail()){
cin.clear();
cin.ignore(INT_MAX, '\n'); 
cout << "Vnesi edna od opciite "<<endl;
cout << "Enter: "<<endl;
cin >>choice152;}
if ( choice152 == 1) goto parnepar2;
if ( choice152 == 2) goto parnepar3;
if ( choice152 == 3) goto main;
if ( choice152 == 4) goto exit;
else goto parnepar;}

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
while (cin.fail()){
cin.clear();
cin.ignore(CHAR_MAX, '\n');
cout << "Vnesi edna od opciite "<<endl;
cout << "Enter: "<<endl;
cin>>chs164;}
if (chs164 == '+' ) cha163 = num16 + num162;
if (chs164 == '-' ) cha163 = num16 - num162;
if (chs164 == '/' ) cha163 = num16 / num162;
if (chs164 == '*' ) cha163 = num16 * num162;
else goto parnepar;
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
while (cin.fail()){
cin.clear();
cin.ignore(INT_MAX, '\n'); 
cout << "Vnesi edna od opciite "<<endl;
cout << "Enter: "<<endl;
cin >>num15;}
if ( num15 % 2 == 0){
cout <<num15<<" E paren broj "<<endl;}
if ( num15 % 2 == 1){
cout <<num15<<" E neparen broj "<<endl;}}

calculator:{
int choice3;
cout <<"             CALCULATOR MENU              "<<endl;
cout <<"(1)        Standard Calculator         (1)"<<endl;
cout <<"(2)              NZS                   (2)"<<endl;
cout <<"(3)              NZD                   (3)"<<endl;
cout <<"(4)              BACK                  (4)"<<endl;
cout <<"(5)              EXIT                  (5)"<<endl;
cout <<" "<<endl;
cout <<"ENTER : "<<endl;
cin >>choice3;
while (cin.fail()){
cin.clear();
cin.ignore(INT_MAX, '\n'); 
cout << "Vnesi edna od opciite "<<endl;
cout << "Enter: "<<endl;
cin >>choice3;}
if ( choice3 == 1) goto standardcal;
if ( choice3 == 2) goto nzs;
if ( choice3 == 3) goto nzd;
if ( choice3 == 4) goto main;
if ( choice3 == 5) goto exit;}

standardcal:{
float first,second,add123,choice4;
char op;
cout << endl << " Vnesi prv broj : ";
cin >>first;
cout << endl << " Vnesi vtor broj : ";
cin >>second;
cout << endl << " Vnesi operacija ( +, -, *, / ) : ";
cin >>op;
while (cin.fail()){
cin.clear();
cin.ignore(CHAR_MAX, '\n'); 
cout << "Vnesi edna od opciite "<<endl;
cout << "Enter: "<<endl;
cin >>op;}
if (op == '+' ) add123 = (float)first + (float)second;
if (op == '-' ) add123 = (float)first - (float)second;
if (op == '/' ) add123 = (float)first / (float)second;
if (op == '*' ) add123 = (float)first * (float)second;
else goto standardcal;
cout << endl << " = "<<add123;
cout << endl << " (1) Back (1)";
cout << endl << " (2) Exit (2)";
cout <<" "<<endl;
cout <<"Enter : "<<endl;
cin >>choice4;
while (cin.fail()){
cin.clear();
cin.ignore(INT_MAX, '\n'); 
cout << "Vnesi edna od opciite "<<endl;
cout << "Enter: "<<endl;
cin >>choice4;}
if ( choice4 == 1 ) goto main;
if ( choice4 == 2 ) goto exit;
else goto standardcal;}


nzs:{
int number1,number2,bigger,smaller;
cout <<"Vnesi go prviot broj "<<endl;
cin>>number1;
while (cin.fail()){
cin.clear();
cin.ignore(INT_MAX, '\n'); 
cout << "Vnesi edna od opciite "<<endl;
cout << "Enter: "<<endl;
cin >>number1;}
cout <<"Vnesi go vtoriot broj "<<endl;
cin>>number2;
while (cin.fail()){
cin.clear();
cin.ignore(INT_MAX, '\n'); 
cout << "Vnesi edna od opciite "<<endl;
cout << "Enter: "<<endl;
cin >>number2;}
if ( number1 > number2){
bigger = number1;
smaller = number2;}
else{
bigger = number2;
smaller = number1;}
int nzs = 0;
int whl = 1;
while ( whl == 1 ){
nzs = nzs + bigger;
if ( nzs % smaller == 0 )
whl = 0;}
cout<<"NZS e : "<<nzs;
int choice51;
cout << endl << " (1) Back (1)";
cout << endl << " (2) Exit (2)";
cout <<" "<<endl;
cout <<"Enter : "<<endl;
cin >>choice51;
while (cin.fail()){
cin.clear();
cin.ignore(INT_MAX, '\n'); 
cout << "Vnesi edna od opciite "<<endl;
cout << "Enter: "<<endl;
cin >>choice51;}
if ( choice51 == 1 ) goto main;
if ( choice51 == 2 ) goto exit;
else goto nzs;}

nzd:{
int x1,y1,choice5;
cout << "Vnesi go prviot broj: "<<endl;
cin >>x1;
while (cin.fail()){
cin.clear();
cin.ignore(INT_MAX, '\n'); 
cout << "Vnesi edna od opciite "<<endl;
cout << "Enter: "<<endl;
cin >>x1;}
cout << "Vnesi go vtoriot broj: "<<endl;
cin >>y1;
while (cin.fail()){
cin.clear();
cin.ignore(INT_MAX, '\n'); 
cout << "Vnesi edna od opciite "<<endl;
cout << "Enter: "<<endl;
cin >>y1;}
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
while (cin.fail()){
cin.clear();
cin.ignore(INT_MAX, '\n'); 
cout << "Vnesi edna od opciite "<<endl;
cout << "Enter: "<<endl;
cin >>choice5;}
if ( choice5 == 1 ) goto main;
if ( choice5 == 2 ) goto exit;
else goto nzd;}

counting:{
int choice2;
cout <<"                COUNTING MENUE                  "<<endl;
cout <<"(1)                Napred                    (1)"<<endl;
cout <<"(2)                 Nazad                    (2)"<<endl;
cout <<"(3)                 BACK                     (3)"<<endl;
cout <<"(4)                 EXIT                     (4)"<<endl;
cout <<" "<<endl;
cout <<"ENTER : "<<endl;
cin >>choice2;
while (cin.fail()){
cin.clear();
cin.ignore(INT_MAX,'\n');
cout << "Vnesi edna od opciite "<<endl;
cout << "Enter: "<<endl;
cin >>choice2;}
if ( choice2 == 1 ) goto forwards;
if ( choice2 == 2 ) goto backwards;
if ( choice2 == 3 ) goto main;
if ( choice2 == 4 ) goto exit;
else goto counting;}

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
int o1, o2 ,o3, o4, o5, o6, o7, o8, o9, o10, o11, o12, o13, num;
char p1[20], p2[20], p3[20], p4[20], p5[20], p6[20], p7[20], p8[20], p9[20], p10[20], p11[20], p12[20], p13[20];
cout << endl << "! DO 13 OCENI !";
cout << endl << "! dokolku ima pomalku od 13 oceni vnesi 0 za brojot na predmet nad brojot na predmeti koj e potreben ! ";
cout << endl << " Vnesi '13' - broj na predmeti : ";
cin >> num;
while (cin.fail());{
cin.clear();
cin.ignore(INT_MAX,'\n');
cout << "You can only enter numbers."<<endl;
cout << "Enter a number."<<endl;}
cin >>num;
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
