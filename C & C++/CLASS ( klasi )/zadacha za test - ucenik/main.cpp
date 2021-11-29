#include<iostream>
#include<cstring>
#include<iomanip>
#include<cstdlib>
#include<windows.h>
using namespace std;

class Ucenik{
	private:
		char ime[30];
		double mat; double fiz; double prj;
	public:
Ucenik(){
}
	Ucenik(char *i, double m, double f, double p){
		strcpy(ime,i);mat = m; fiz = f; prj = p; }

	~Ucenik(){ }

	void setIme(char *i){ strcpy(ime,i); }
	char *getIme(){ return ime; }

    void setMat(double m){ mat = m; }
	double getMat(){ return mat; }

    void setFiz(double f){ fiz = f; }
	double getFiz(){ return fiz; }

    void setPrj(double p){ prj = p; }
	double getPrj(){ return prj; }

	double getAvg(){ return (mat + fiz + prj ) / 3; }

};

int main()
{
    char ime[30]; string ucenikMain;
	double mat, fiz, prj; double cnt=0, max1=0.00, sum=0.00; int povtor, temp;
    cout<<" broj na uchenici: "; cin>>povtor; Ucenik u[povtor];

    for ( int i=0; i<povtor; i++ ){
    cout<<" Vnesi ime: "; cin>>ime; u[i].setIme(ime);
    cout<<" Vnesi ocena mat: "; cin>>mat; u[i].setMat(mat);
    cout<<" Vnesi ocena fiz: "; cin>>fiz; u[i].setFiz(fiz);
    cout<<" Vnesi ocena programski: "; cin>>prj; u[i].setPrj(prj); system("CLS");
        cout<<" "<<cnt+1<<" | vnesovte: "<<endl;
        cout<<" Ime: "<<u[i].getIme()<<endl;
        cout<<" Matematika: "<<u[i].getMat()<<endl;
        cout<<" Fizika: "<<u[i].getFiz()<<endl;
        cout<<" Programski: "<<u[i].getPrj()<<endl;
        cout<<" Prosekot na ucenikot e: "<<u[i].getAvg()<<endl;
    system("PAUSE"); system("CLS"); }

    double p[povtor];
    for ( int i=0; i<povtor; i++ ){ p[i]=u[i].getAvg(); }

    for ( int i=0; i<povtor-1; i++){
        for( int j=i+1; j<povtor; j++ ) {
            if ( p[i] < p[j] ) {
                temp = p[i]; p[i] = p[j]; p[j] = temp; } } }

        for (int i=0; i<povtor; i++){
        cout<<p[i]<<endl; }

return 0;
}
