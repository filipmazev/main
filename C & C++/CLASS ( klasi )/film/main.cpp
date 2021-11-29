#include<iostream>
#include<cstring>
using namespace std;

class Ucenik{
	private:
        char  film[30]; char  zanr[30]; int godina; int vreme;
	public:
		Ucenik(){ }

		Ucenik(char  *f, char *z, int god, int vr){
		strcpy(film, f); strcpy(zanr, z);
        godina = god; vreme = vr; }

		void setFilm(char *f){ strcpy(film,f); }
		char *getFilm(){ return film; }

        void setZanr(char *z){ strcpy(zanr, z); }
        char *getZanr(){ return zanr; }

        void setGod(int god){ godina = god; }
        int getGod(){ return godina; }

        void setVreme(int vr){ vreme = vr; }
        int getVreme(){ return vreme; }

};

int main (){
	char film[30], zanr[30];
	int godina, vreme, max1=1000000, index=0, i, n;
    Ucenik u[100]; cout<<"Vnesi broj na filmovi koi ke gi vnesuvash:"; cin>>n;

    for(i=0;i<n;i++){
    cout<<" vnesi ime na film: "; cin>>film; u[i].setFilm(film);
    cout<<" vnesi zhanra: "; cin>>zanr; u[i].setZanr(zanr);
    cout<<" vnesi godina: "; cin>>godina; u[i].setGod(godina);
    cout<<" vnesi vreme-traenje: "; cin>>vreme; u[i].setVreme(vreme); }

	for(int i=0;i<n;i++){ if(  u[i].getVreme() < max1 ) { max1 = u[i].getVreme(); index = i; } }

    cout<<" filmot so najmaloto vremetraenje e: "<<u[index].getFilm()<<" | zanra:"<<u[index].getZanr()<<" | godina:"<<u[index].getGod()<<" | vremetraenje: "<<u[index].getVreme()<<endl;
	return 0;

return 0;
}

