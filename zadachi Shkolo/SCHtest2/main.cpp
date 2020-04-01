#include <iostream>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <windows.h>
#include <direct.h>
#include <float.h>
#include <string>
using namespace std;

/*
class student
- vnes na nov student
- vnes na oceni
- pecatenje prosek
*/

void error()
{
    cin.clear();
    cin.ignore(DBL_MAX, '\n');
    cout<<endl<<" mozes da vnesuvas samo brojki: ";
}

class student
{
    string student; double Prosek;
    public:
        string setS() { string S; cout<<" vnesi ime na student: "; cin>>S; student = S; }
        string getS(){ return student; }

        void newS()
        {
            string slash = "\\", checkerGet; char asker;
            string pathSet = + "C:" + string(slash) + "UserData" + string(slash) + string(student);
            ifstream checker; checker.open(string(pathSet) + string(slash) + "student.txt" ); while(getline(checker, checkerGet));
            if( student.compare(checkerGet) != 0  ){ mkdir ( pathSet.c_str() ); }
            else {
                cout<<" vekje postoi toj student, vnesi kako nov student? ( y/n ): "; cin>>asker;
                if ( asker == 'y' ) { mkdir ( pathSet.c_str() ); } else { _Exit(0); }
            }
            ofstream newSt; newSt.open(string(pathSet) + string(slash) + "student.txt" );
            newSt<<student;
        }

        double oceni()
        {
            double n, ocena, sum=0.00;  double prosek; string predmet, slash = "\\";
            cout<<endl<<" kolku predmeti ima studentot: "; cin>>n;
            for ( int i=0; i<n; i++ )
            {
                cout<<" predmet "<<i+1<<": "; cin>>predmet;
                string pathSet2 = "C:" + string(slash) + "UserData" + string(slash) + string(student) + string(slash) + string(predmet) + ".txt";
                ofstream pSet; pSet.open(string(pathSet2));
                cout<<" ocena: "; cin>>ocena;  while(cin.fail()){error(); cin>>ocena;} pSet<<ocena; sum+=ocena;
            } prosek = sum / n;
            string pathSet3 = "C:" + string(slash) + "UserData" + string(slash) + string(student) + string(slash) + "prosek.txt";
            ofstream pSet2; pSet2.open(string(pathSet3)); pSet2<<prosek;
            return prosek;
        }

         double setProsek(double prosek){ Prosek = prosek; return Prosek; }

        void print (){ cout<<" student: "<<student; }
        void printProsek() { cout<<" prosek: "<<Prosek; }

};

int main()
{
    main:{ system("cls");
    mkdir("C:\\UserData");
    student s; int ask2;
    cout<<" (1)     NOV STUDENT    (1) "<<endl;
    cout<<" (2) PREGLED NA STUDENT (2) "<<endl;
    cout<<" IZBERI: "; cin>>ask2; while(cin.fail()){error(); cin>>ask2;}
    while(ask2 > 2 || ask2 < 1){ cout<<endl<<" Enter valid option: "; cin>>ask2; }
    if ( ask2 == 1){ s.setS(); s.newS(); s.print();
    s.setProsek(s.oceni()); s.printProsek(); }
    if ( ask2 == 2) { system("cls"); cout<<endl<<" OVAA OPCIJA DOAGJA NASKORO! "<<endl; cout<<endl; Sleep(1000); cout<<" "; system("PAUSE"); goto main; } }
}
