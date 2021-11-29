#include<iostream>
#include<cstring>
using namespace std;
class Ucenik{
	private:
		char ime[30];
		char klas[30];
		char ime_na_uciliste[50];
	public:
Ucenik(){ //default constructor
}
	Ucenik(char *i,char k[30],char *u){// constructor so argumenti
		strcpy(ime,i);
		strcpy(klas,k);
		strcpy(ime_na_uciliste,u); }

	~Ucenik(){ } //destructor
	void setIme(char *i){ strcpy(ime,i); }
	char *getIme(){ return ime; }
	void setKlas(char *k){ strcpy(klas,k); }
	char *getKlas(){ return klas; }
	void setImeUciliste(char *u){ strcpy(ime_na_uciliste,u); }
	char *getImeUciliste(){ return ime_na_uciliste; }
};

int main(){
	char ime[30];
	char klas[30];
	char imeUciliste[50]; Ucenik u; int cnt=0, povtor;
    cout<<" broj na uchenici: "; cin>>povtor;

    while ( cnt < povtor ){
        cout<<" Vnesi ime: ";
    cin>>ime; u.setIme(ime); cout<<" Vnesi klas: ";
    cin>>klas; u.setKlas(klas); cout<<" Vnesi Ime na Uciliste: ";
    cin>>imeUciliste; u.setImeUciliste(imeUciliste);
        cout<<" "<<cnt+1<<" | vnesovte: "<<endl;
        cout<<" Ime:: "<<u.getIme()<<endl;
        cout<<" Klas: "<<u.getKlas()<<" klas"<<endl;
        cout<<" Uciliste: "<<u.getImeUciliste()<<" uciliste"<<endl;
    cnt++; cout<<endl; }

return 0;
}
