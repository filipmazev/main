#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;

class Ucenik{
	private:
		char ime[30];
		double Matematika;
		double Fizika;
		double Informatika;
	public:
Ucenik(){
}
	Ucenik(char *i, double m, double f, double p)
	{
		strcpy(ime,i); Matematika = m; Fizika = f; Informatika = p;
    }

	~Ucenik(){ }

	void setIme(char *i){ strcpy(ime,i); }
        char *getIme(){ return ime; }

    void setMatematika(double m){ Matematika = m; }
        double getMatematika(){ return Matematika; }

    void setFizika(double f){ Fizika = f; }
        double getFizika(){ return Fizika; }

    void setInformatika(double p){ Informatika = p; }
        double getInformatika(){ return Informatika; }

	double getProsek(){ return (Matematika + Fizika + Informatika ) / 3; }

};

int main()
{
    char ime[30]; string ucenikMain;
	double Matematika, Fizika, Informatika;
	double cnt=0, max1=0.00, sum=0.00;
	int n, temp;
    cout<<" broj na uchenici: "; cin>>n; Ucenik u[n];

    for ( int i=0; i<n; i++ )
    {
        cout<<" Vnesi ime: ";
            cin>>ime;
            u[i].setIme(ime);
        cout<<" Vnesi ocena Matematika: ";
            cin>>Matematika;
            u[i].setMatematika(Matematika);
        cout<<" Vnesi ocena Fizika: ";
            cin>>Fizika;
            u[i].setFizika(Fizika);
        cout<<" Vnesi ocena Informatika: ";
            cin>>Informatika;
            u[i].setInformatika(Informatika);
        cout<<" Prosekot na ucenikot e: "<<u[i].getProsek()<<endl;
    }

    double p[n];
    for ( int i=0; i<n; i++ )
    {
        p[i]=u[i].getProsek();
    }

    for ( int i=0; i<n-1; i++)
    {
        for( int j=i+1; j<n; j++ )
        {
            if ( p[i] < p[j] )
            {
                temp = p[i]; p[i] = p[j]; p[j] = temp;
            }
        }
    }

	cout<<"Prosekot na ucenicite od najgolem do najmal e:"<<endl;
	for(int i=0;i<n;i++)
    {
        cout<<p[i].getIme()<<" "<<p[i].getFizika()<<" "<<p[i].getMatematika()<<" "<<p[i].getInformatika()<<" "<<endl;
	}
	return 0;
}
