#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;

class Ucenik{
	private:
		char ime[30];
		float mat; float fiz; float prj;
	public:
Ucenik(){
}
	Ucenik(char *i, float m, float f, float p){
		strcpy(ime,i);
		mat = m; fiz = f; prj = p;
		 }

	~Ucenik(){ }

	void setIme(char *i){ strcpy(ime,i); }
	char *getIme(){ return ime; }

    void setMat(float m){ mat = m; }
	float getMat(){ return mat; }

    void setFiz(float f){ fiz = f; }
	float getFiz(){ return fiz; }

    void setPrj(float p){ prj = p; }
	float getPrj(){ return prj; }

};

int main()
{
    char ime[30]; string ucenikMain;
	float mat, fiz, prj; Ucenik u; float cnt=0, povtor; float max1=0.00, sum=0.00;
    cout<<" broj na uchenici: "; cin>>povtor;

    while ( cnt < povtor ){
    cout<<" Vnesi ime: "; cin>>ime; u.setIme(ime);
    cout<<" Vnesi ocena mat: "; cin>>mat; u.setMat(mat);
    cout<<" Vnesi ocena fiz: "; cin>>fiz; u.setFiz(fiz);
    cout<<" Vnesi ocena programski: "; cin>>prj; u.setPrj(prj);
        cout<<" "<<cnt+1<<" | vnesovte: "<<endl;
        cout<<" Ime: "<<u.getIme()<<endl;
        cout<<" Matematika: "<<u.getMat()<<endl;
        cout<<" Fizika: "<<u.getFiz()<<endl;
        cout<<" Programski: "<<u.getPrj()<<endl;
        sum = (u.getMat() + u.getFiz() + u.getPrj()) / 3 ;
        if ( max1 < sum ) { max1 = sum; ucenikMain = u.getIme(); } sum = 0;
    cnt++; cout<<endl; }

    cout<<setprecision(3)<<ucenikMain<<" | "<<max1;

return 0;
}
