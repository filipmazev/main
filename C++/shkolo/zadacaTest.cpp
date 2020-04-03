#include <iostream>
using namespace std;

/*
class student
- vnes na nov student
- vnes na oceni
- pecatenje prosek
*/

class student
{
    string student; double Prosek;
    public:
        string setS() { string S; cout<<" vnesi ime na student: "; cin>>S; student = S; }
        string getS(){ return student; }

        double oceni()
        {
            double n, sum=0.00;  double prosek; string predmet; 
            cout<<endl<<" kolku predmeti ima studentot: "; cin>>n; double ocena[n];
            for ( int i=0; i<n; i++ )
            {
                cout<<" predmet "<<i+1<<": "; cin>>predmet;
                cout<<" ocena po"<<predmet<<": "; cin>>ocena[i]; sum+=ocena[i];
            } prosek = sum / n;
            
            for ( int i=0; i<n; i++ ) { cout<<" ocena "<<i+1<<": "<<ocena[i]<<endl; } 
            
            return prosek;
        }

        double setProsek(double prosek){ Prosek = prosek; return Prosek; }

        void print (){ cout<<" student: "<<student; }
        void printProsek() { cout<<" prosek: "<<Prosek; }

};

int main()
{
    student s;
    s.setS(); s.newS(); s.print();
    s.setProsek(s.oceni()); s.printProsek(); 
}
