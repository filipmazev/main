#include <iostream>
#include <windows.h>
#include <float.h>
#include<bits/stdc++.h>
#include <cmath>
using namespace std;

#ifdef  USE_FLOAT128
    typedef __float128  long_double_t;
#else
    typedef long double long_double_t;
#endif

/*  READ ME !
! ovaa programa gi sledi slednite pravila za chitanje na kod ! :
RED 1 - deklarirani vrednosti, funkcii, return ( long_double_t, stringstream, void, char, return, itn... )
RED 2 - output - cout, printanje ( vazhi i za void shto printa )
RED 3 - funkcii od vazhnost ( for, while, if, switch, itn. )
RED 4 - input - cin, vnesuvanje i neshta povrzani so vnesuvanje ( cin.clear, cin.ignore, void za vnes, itn... ) */

int digits(int number);
int decimals(double number, int decimalP);
long_double_t mainConvertor(int type, int div, long_double_t toDecimal, string cnv2, int sp, int rtrn);
long_double_t decimalConvertor(int convChs, long_double_t number, long long int decimalP, long_double_t toDecimal, long long int cnNum  );
long long int decimalPlaces(long_double_t number);
char hexa(int subtraction);

void error() {
            cin.clear(); cin.ignore(INT_MAX, '\n');
    cout<<endl<<" you can only enter numbers: "; }

char hexa(int subtraction) {
char hexaReturn=' ';
    switch(subtraction) {
    case 10: hexaReturn = 'A'; break; case 15: hexaReturn = 'F'; break; case 11: hexaReturn = 'B'; break; 
    case 12: hexaReturn = 'C'; break; case 13: hexaReturn = 'D'; break; case 14: hexaReturn = 'E'; break; }
return hexaReturn; }

int decimals(double number, int decimalP) {
double dummy; double decimal = modf(number,&dummy);
return round(decimal*pow(10,decimalP)); }

long_double_t decimalConvertor(int convChs, long_double_t number, long long int cnNum) {
long long int decimalP, no3=0, no32=0, iM2=0, no22, iM=0, sum=0, no2 = number; long_double_t sum2=0, toDecimal; decimalP = decimalPlaces(number);
        while (no2 != 0) { no3 = no2 % 10; no2 /= 10; iM++; sum += no3 * (pow(cnNum,(iM-1))); }
        no22 = decimals(number,decimalP); iM2 = decimalP;
        while ( no22 != 0 ){ no32 = no22 % 10; no22 /= 10;
        if( convChs == 2 ) { if(no32 == 1 ) { sum2 += 1 / (no32 * (pow(cnNum,(iM2)))); } if(no32 == 0 ){ sum2 += 0; } }
        if( convChs == 3 ) { sum2 += no32 / (pow(cnNum,(iM2))); } iM2--; } toDecimal = sum+sum2;
return toDecimal; }

long long int decimalPlaces(long_double_t number) {
stringstream ss; string s; long long int decimalP=0;
        if ( number - int(number ) != 0 ) { ss << abs(number-(int)number); ss >> s; decimalP = s.length()-2; }
return decimalP; }

long_double_t mainConvertor(int type, int div, long_double_t toDecimal, string cnv2, int sp, int rtrn) {
long_double_t num = toDecimal, noOrg = toDecimal, numI, numD; long long int A[1000], B[1000], i=0, i2=0, sub, sub2; char H[1000], H2[1000];
if(type != 4 ){ numI = int(num); numD = num - int(num);
    if(rtrn == 0 && sp != 1 ) { cout<<" "<<cnv2<<" |"; }
        while ( numI > 0 ) {  i++; num /= div; sub = (num - int(num)) * div;
        if( type == 1 ){ if( num - int(num) == 0.00 ) { A[i] = 0; } if( num - int(num) != 0.00 ) { A[i] = 1; } }
        if( type == 2 ){ A[i] = sub; } if( type == 3 ){ if(sub >= 10 ){ H[i] = hexa(sub); } if(sub < 10 ){ H[i] = '0' + sub; } }
        numI = int(num); num = numI; }
    if(rtrn == 0 ){ cout<<" "; for(int n=i; n>0; n-- ){ if( type == 3 ){ cout<<H[n]; } else { cout<<A[n]; } } }

        if(rtrn == 0 && numD != 0.00 ){ cout<<"."; } if ( numD != 0.00 ){ int cnt=0;
        while( cnt != 5 ) { i2++; cnt++; numD *= div; sub2 = numD; if( type == 1 ){
        if ( sub2 == 0 ) { B[i2] = 0; } if ( sub2 != 0 ) { B[i2] = 1; } } if( type == 2 || 3 ){ B[i2] = sub2; }
        if( type == 3 ){ if(sub2 >= 10 ){ H2[i2] = hexa(sub2); } if(sub2 < 10 ){ H2[i2] = '0' + sub2; } } numD = numD - sub2; }
    if(rtrn == 0 ){ for(int k=1; k<=i2; k++ ){ if( type == 3 ){ cout<<H2[k]; } else { cout<<B[k]; } } } if( rtrn == 0 && sp != 1 ) { cout<<endl; } } }
    if(rtrn == 0 && type == 4 ){ if ( sp != 1 ) { cout<<" DECIMAL | "<<toDecimal<<endl; } if( sp == 1 && rtrn ==0 ) { cout<<" "<<toDecimal; } }
return toDecimal; }

int digits(int number) {
int cnt=0;
        while (number != 0) { number /= 10; cnt++; }
return cnt; }

int checker(long_double_t numberM, int convChs) {
long long int number = numberM, num=0, num2=0, answer=0, decimalP=0, dcNum; decimalP = decimalPlaces(numberM);
        while (number != 0) { num = number % 10; number /= 10;
        if ( convChs == 2 ) { if ( num == 0 || num == 1 ) { if ( answer != 1 ) { answer = 0; } else answer = 1; } else { answer = 1; } }
        if ( convChs == 3 ) { if( ( num != 8  ||  num != 9 ) && answer != 1 ){ answer = 0; } if( num == 8 || num == 9 ){ answer = 1; } } }
        if( (numberM - int(numberM)) != 0 ){ dcNum = decimals(numberM,decimalP); while (dcNum != 0) { num2 = dcNum % 10; dcNum /= 10;
        if ( convChs == 2 ) { if ( num2 == 0 || num2 == 1 ) { if ( answer != 1 ) { answer = 0; } else answer = 1; } else{answer = 1; } }
        if ( convChs == 3 ) { if( ( num2 != 8 || num2 != 9 ) && answer != 1 ){ answer = 0; } if( num2 == 8 || num2 == 9 ){      answer = 1; } } } }
return answer; }

void precision(int type, int div, long_double_t toDecimal, string cnv){
    cout<<fixed<<setprecision(decimalPlaces(mainConvertor(type,div,toDecimal,cnv,0,1)) + digits(mainConvertor(type,div,toDecimal,cnv,0,1)));}

int main() {
Convertor:{
long long int h, fChs=0, t1=0, tgl=0, T1=0, D1=0, op, t2=0, st1=0, toggle2=0, toggle=0, sT1=0, st2=0, sT2=0, cmb=0, type2, convChs, dOn=0, chs, div2, digitsNum=0, decimalP=0, cnNum, type, div;
long_double_t numberAdd, A[1000], B[1000], number, toDecimal=0; string cnv, cnv2, ct1, ct2; char OP=' ';

    cout<<" ENTER HOW MANY NUMBERS YOU WILL BE ENTERING: ";
            cin>>h; while(cin.fail()){error(); cin>>h;} while(h < 1 || h > 1000){
    cout<<endl<<" Enter valid option: ";
            cin>>h; while(cin.fail()){error(); cin>>h;}} system("cls");
    if( h > 1 ) { cout<<" CHOOSE OPERATION: "<<endl;
    cout<<" (1) - ADD       | + | "<<endl; cout<<" (2) - SUBTRACT  | - | "<<endl;
    cout<<" (3) - MULTIPLY  | * | "<<endl; cout<<" (4) - DIVIDE    | / | "<<endl;
            cout<<endl<<" Enter: "; cin>>op; while(cin.fail()){error(); cin>>op;} while(op > 4 || op < 1){
    cout<<endl<<" Enter valid option: ";
            cin>>op; while(cin.fail()){error(); cin>>op;}} system("cls");
        if( op == 1 ) { OP = '+'; } if( op == 2 ) { OP = '-'; } if( op == 3 ) { OP = '*'; } if( op == 4 ) { OP = '/'; }  }
    if( h == 1 ) { op = 1; }

    cout<<" CONVERTING FROM: "<<endl; cout<<endl;
    cout<<" (1) - DECIMAL - (1) "<<endl;
    cout<<" (2) - BINARY  - (2) "<<endl;
    cout<<" (3) - OCTAL   - (3) "<<endl;
    cout<<endl<<" Enter: "; cin>>convChs;
        while(cin.fail()){error(); cin>>convChs;} while(convChs > 3 || convChs < 1){
    cout<<endl<<" Enter valid option: ";
            cin>>convChs; while(cin.fail()){error(); cin>>convChs;}}
        if( convChs == 1 ) { cnv = "DECIMAL"; t1=1; type2=4; T1=4; D1=1;                              }
        if( convChs == 2 ) { cnv = "BINARY";  t1=2; type2=1; T1=1; D1=2; div2=2; dOn = 11; cnNum = 2; }
        if( convChs == 3 ) { cnv = "OCTAL";   t1=8; type2=2; T1=2; D1=8; div2=8; dOn = 12; cnNum = 8; }
            for(int i=0; i<h; i++ ){
    cout<<" ENTER "<<cnv<<" NUMBER "<<i+1<<": ";
            cin>>number; while( checker(number, convChs) == 1 ){
    cout<<endl<<" Enter valid option: "; cin>>number; }
        decimalP += decimalPlaces(number); digitsNum += digits(number); A[i] = number;
        if( convChs != 1 ) { numberAdd = decimalConvertor(convChs,number,cnNum); } if( convChs == 1 ) { numberAdd = number; }
        if( op != 1 ) { if ( toggle !=1 ){ toDecimal = numberAdd; toggle = 1; } if ( toggle2 == 1 ){
        switch(op){case 2: toDecimal -= numberAdd; B[i] = toDecimal; break; case 3: toDecimal *= numberAdd; B[i] = toDecimal; break;
                   case 4: toDecimal /= numberAdd; B[i] = toDecimal; break; } } if ( toggle == 1 ){ toggle2 = 1; B[i] = toDecimal; } }
        if( op == 1 ){ toDecimal+=numberAdd; B[i] = toDecimal; } }

    system ("cls"); cout<<" CONVERTING FROM "<<cnv<<" TO: "<<endl; cout<<endl;
    if(dOn != 11 ){ cout<<" (1) - BINARY      - (1) "<<endl; } if(dOn == 11 ){ { cout<<" (1) - DECIMAL     - (1) "<<endl; } }
    if(dOn != 12 ){ cout<<" (2) - OCTAL       - (2) "<<endl; } if(dOn == 12 ){ { cout<<" (2) - DECIMAL     - (2) "<<endl; } }
                    cout<<" (3) - HEXADECIMAL - (3) "<<endl; cout<<" Enter: ";
            cin>>chs; while(cin.fail()){error(); cin>>chs;} while(chs > 3 || chs < 1){
    cout<<endl<<" Enter valid option: ";
            cin>>chs; while(cin.fail()){error(); cin>>chs;}}
        if(chs == 1 ) { if( dOn != 11 ){  type = 1; div = 2;  cnv2 = "BINARY";      t2=2; }  if( dOn == 11 ){ type = 4; t2=1; cnv2 = "DECIMAL"; } }
        if(chs == 2 ) { if( dOn != 12 ){  type = 2; div = 8;  cnv2 = "OCTAL";       t2=8; }  if( dOn == 12 ){ type = 4; t2=1; cnv2 = "DECIMAL"; } }
        if(chs == 3 ) {                   type = 3; div = 16; cnv2 = "HEXADECIMAL"; t2=16; } cmb = t1 + t2;

    cout<<endl<<" ENTERED: "; if( h > 1 ){ cout<<endl; for(int i=0; i<(h-1); i++){ cout<<" "<<i+1<<" |"; if ( tgl == 1 ){
    precision(T1,D1,B[i],cnv2); mainConvertor(T1,D1,B[i],cnv2,1,0); } if( tgl != 1 ){
    precision(T1,D1,A[i],cnv2); cout<<" "<<A[i]; tgl = 1; } precision(T1,D1,A[i+1],cnv2); cout<<" "<<OP<<" "<<A[i+1]<<" =";
    precision(T1,D1,B[i+1],cnv2); mainConvertor(T1,D1,B[i+1],cnv2,1,0); cout<<endl;} } if( h == 1 ){ precision(T1,D1,A[0],cnv2); cout<<A[0]<<" | "<<cnv<<endl; }

    cout<<endl<<" CONVERTED FROM "<<cnv<<" TO "<<cnv2<<": "<<endl;
    precision(type2,div2,toDecimal,cnv); mainConvertor(type2,div2,toDecimal,cnv,0,0); precision(type,div,toDecimal,cnv2); mainConvertor(type,div,toDecimal,cnv2,0,0);
    cout<<endl<<" OTHER CONVERSIONS: "<<endl;
        switch(cmb){
        case  9: st1=3; sT1=16; st2=1; sT2=2; ct1="HEXADECIMAL"; ct2="BINARY";  break;
        case 10: st1=3; sT1=16; st2=4; sT2=1; ct1="HEXADECIMAL"; ct2="DECIMAL"; break;
        case  3: st1=3; sT1=16; st2=2; sT2=8; ct1="HEXADECIMAL"; ct2="OCTAL";   break;
        case 17: st1=2; sT1=8;  st2=1; sT2=2; ct1="OCTAL";       ct2="BINARY";  break;
        case 24: st1=1; sT1=2;  st2=4; sT2=1; ct1="BINARY";      ct2="DECIMAL"; break;
        case 18: st1=4; sT1=1;  st2=2; sT2=8; ct1="DECIMAL";     ct2="OCTAL";   break; }
    precision(st1,sT1,toDecimal,ct1); mainConvertor(st1,sT1,toDecimal,ct1,0,0); precision(st2,sT2,toDecimal,ct2); mainConvertor(st2,sT2,toDecimal,ct2,0,0);
    Sleep(1000); cout<<endl<<" "; system("PAUSE");

    cout<<endl;
    cout<<" (1) - BACK - (1) "<<endl;
    cout<<" (2) - EXIT - (2) "<<endl;
    cout<<endl<<" Enter: "; cin>>fChs;
        while(cin.fail()){error(); cin>>fChs;} while(fChs > 2 || fChs < 1){
    cout<<endl<<" Enter valid option: ";
            cin>>fChs; while(cin.fail()){error(); cin>>fChs;}}
        if(fChs == 1 ) { system("cls"); goto Convertor; }
        if(fChs == 2 ) { return(0); } } }
