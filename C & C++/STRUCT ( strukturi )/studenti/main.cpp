#include <iostream>
#include <windows.h>
#include <fstream>
using namespace std;

struct Studenti
{
    char imeNaStudent[30];
    char prezimeNaStudent[30];
    double brojNaBodovi;
};

int main()
{
    int n;
    cout<<" kolku studenti kje vnesuvate:"; cin>>n;

    Studenti s[n], temp;

    for(int i=0; i<n; i++)
    {
        cout<<endl<<" STUDENT "<<i+1<<endl;
        cout<<" vnesi ime:"; cin>>s[i].imeNaStudent;
        cout<<" vnesi prezime:"; cin>>s[i].prezimeNaStudent;
        cout<<" vnesi bodovi:"; cin>>s[i].brojNaBodovi;
    }

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(s[i].brojNaBodovi < s[j].brojNaBodovi)
            {
                temp = s[i]; s[i] = s[j]; s[j] = temp;
            }
        }
    }

    system("cls");
    cout<<" Prosekot na studentite po opagjacki redosled e:"<<endl;

    //fstream zacuvaj; zacuvaj.open("testing.txt");

	for(int i=0;i<n;i++)
    {
        /*zacuvaj*/cout<<endl<<" STUDENT "<<i+1<<endl;
        /*zacuvaj*/cout<<" Ime:"<<s[i].imeNaStudent<<endl;
        /*zacuvaj*/cout<<" Prezime:"<<s[i].prezimeNaStudent<<endl;
        /*zacuvaj*/cout<<" Bodovi:"<<s[i].brojNaBodovi<<endl;
	}

	/*zacuvaj.close(); zacuvaj.open("testing.txt");
    string citaj2;

	while(!zacuvaj.eof()){
        getline(zacuvaj,citaj2);
        cout<<citaj2<<endl; } */

return 0;
}
