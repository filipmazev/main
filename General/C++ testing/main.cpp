#include <iostream>
using namespace std;
int main() 
{
choice:
char chs;
int a, b, c, d, e, f, g, h, h2, i, i2, j, j2, e2, z, z2, x, x2, v, v2, n, n2, m, m2,k, q, q2, w, w2, r, r2, t, t2, u, u2;
cout << endl << "Vnesi broj (od 10 do 10000) : ";
cin >> c;
if ( c < 100)
{
cout << endl << " Zbir od sekoj broj vo celiot brojot koj e vnesen ( pomal od 100)";
a = c / 10; // ova e broj vnesen od korisnik so primer vredonost 53 podele so 10
b = c % 10; // ova e razlikata , aka od 53-50 dobivame 3 ili vtoriot broj
cout << endl <<"" "Prviot broj e : "" "<< a <<" "" Vtoriot broj e : " " "<< b <<" "" Zbirot na broevite e : "<<  a + b;
cout << endl <<" Dali bi sakal da vnesesh nov broj ? (Y/N): ";
cin >> chs;
if ( chs == 'y') goto choice;
if ( chs == 'n') goto end;
}
else if ( c < 1000)
{
cout << endl <<" Zbir od sekoj broj vo celiot brojot koj e vnesen ( pomal od 1k)";
d = c / 100; // ova e broj vnesen od korisnik so primer vredonost 534 podelen so 100, shto dava 5.34 ili 5 zatoa shto e vo int
e2 = c / 10; // ova e broj vnesen od korisnik so primer vrednost 534 podelen so 10, shto dava vrednost od 53,4
e = e2 % 10; // ova e taa predhodno dobienata vrednost i nejzinata razlika dobivajki go 3
f = c % 10; // razlika od 534 so deset aka 4 ili posledniot broj od vneseniot broj
cout << endl <<"" "Prviot broj e : "" "<< d <<" "" Vtoriot broj e : " ""<< e <<" "" Tretiot broj e : "<< f <<" "" Zbirot na broevite e : "<<  d + e + f;	
cout << endl <<" Dali bi sakal da vnesesh nov broj ? (Y/N): ";
cin >> chs;
if ( chs == 'y') goto choice;
if ( chs == 'n') goto end;
}
else if ( c < 10000)
{
cout << endl <<" Zbir od sekoj broj vo celiot brojot koj e vnesen ( pomal od 10k)";
g = c / 1000; // ova e broj vnesen od korisnikot so primer vrednost 5342 podelen so 1000, shto dava 5.342 ili 5 zatoa shto e vo int
j2 = c / 100; // ova e brojot vnesen od korisnikot so primer vrednost 5342 podelen so 100, shto dava 53,42 
j = j2 % 10; // ova e razlikata od 53,42 aka 3
h2 = c / 10; // ova e broj vnesen od korisnik so primer vrednost 5342 podelen so 10, shto dava vrednost od 53,4
h = h2 % 10; // ova e taa predhodno dobienata vrednost i nejzinata razlika dobivajki go 3
i = c % 10; // razlika od 534 so deset aka 4 ili posledniot broj od vneseniot broj
cout << endl <<"" "Prviot broj e : "" "<< g <<" "" Vtoriot broj e : " ""<< j <<" "" Tretiot broj e : "<< h <<" " " Chetvrtiot broj e : "<< i << " "" Zbirot na broevite e : "<<  g + h + i + j;	
cout << endl <<" Dali bi sakal da vnesesh nov broj ? (Y/N): ";
cin >> chs;
if ( chs == 'y') goto choice;
if ( chs == 'n') goto end;
}
else if ( c < 100000)
{
cout << endl << " Zbir od sekoj broj vo celiot brojot koj e vnesen ( pomal od 100k)";
z = c / 10000; // ova e broj vnesen od korisnikot so primer vrednost 53421 podelen so 10000, shto dava 5.3421 
x2 = c / 1000; // ova e brojot vnesen od korisnikot so primer vrednost 53421 podelen so 1000, shto dava 53,421 
x = x2 % 10; // ova e razlikata od 53,421 aka 3
v2 = c / 100; // ova e broj vnesen od korisnik so primer vrednost 53421 podelen so 100, shto dava vrednost od 534,21
v = v2 % 10; // ova e taa predhodno dobienata vrednost i nejzinata razlika so procent 10 dobivajki go 4
n2 = c / 10; // ova e broj vnesen od korisnikot so primer vrednost 53421 podelen so 10 davajki go brojot 5342,1
n = n2 % 10; // ova e razlikata od predhodniot broj so procent od 10 aka 2
m2 = c / 100; // ova e broj vnesen od korisnikot so primer vrednost 53421 podelen so 100, shto dava vrednost od 534,21
m = c % 10; // ova e razlikata od predhodniot broj so procent od 10 aka 1
cout << endl <<"" "Prviot broj e : "" "<< z <<" "" Vtoriot broj e : " " "<< x <<" "" Tretiot broj e : "<< v << "" " Chetvrtiot broj e : "<< n << " Petiot broj e : "" "<< m << " ""Zbirot na broevite e : "<< z + x + v + n + m;
cout << endl <<" Dali bi sakal da vnesesh nov broj ? (Y/N): ";
cin >> chs;
if ( chs == 'y') goto choice;
if ( chs == 'n') goto end;
}
else if ( c < 1000000)
{
cout << endl << " Zbir od sekoj broj vo celiot brojot koj e vnesen ( pomal od 1 milion )";
k = c / 100000; // ova e broj vnesen od korisnikot so primer vrednost 534213 podelen so 100000, shto dava 5.34213 
q2 = c / 10000; // ova e brojot vnesen od korisnikot so primer vrednost 534213 podelen so 10000, shto dava 53,4213 
q = q2 % 10; // ova e razlikata od 53,4213 aka 3 
w2 = c / 1000; // ova e broj vnesen od korisnik so primer vrednost 534213 podelen so 1000, shto dava vrednost od 534,213
w = w2 % 10; // ova e taa predhodno dobienata vrednost i nejzinata razlika so procent 10 dobivajki go 4
r2 = c / 100; // ova e broj vnesen od korisnik so primer vrednost 534213 podelen so 100, shto dava vrednost od 534,213
r = r2 % 10; // ova e taa predhodno dobienata vrednost i nejzinata razlika so procent 10 dobivajki go 2
t2 = c / 10; // ova e broj vnesen od korisnikot so primer vrednost 534213 podelen so 10 davajki go brojot 5342,13
t = t2 % 10; // ova e razlikata od predhodniot broj so procent od 10 aka 1 
u = c % 10; // ova e razlikata od vneseniot broj so 10 dobivajki go vo ovoj sluchaj brojot 3
cout << endl <<"" "Prviot broj e : "" "<< k <<" "" Vtoriot broj e : " " "<< q <<" "" Tretiot broj e : "<< w << "" "" " Chetvrtiot broj e : "<< r << " Petiot broj e : "" "<< t << " ""Shestiot broj e : "<< u <<"""Zbirot na broevite e : "<< k + q + w + r + t + u;
cout << endl <<" Dali bi sakal da vnesesh nov broj ? (Y/N): ";
cin >> chs;
if ( chs == 'y') goto choice;
if ( chs == 'n') goto end;
}
else if ( c < 10)
{
cout << endl << " Vnese : "<<c;
cout << endl << "! Vneseniot broj e ednocifen !";
cout << endl << "! Vnesi dvo cifren broj za da mozhe da se soberat cifrite edna so druga !";
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
cout << endl << " Vi blagodarime za koristenje na nashite uslugi ";
return 0;
}

