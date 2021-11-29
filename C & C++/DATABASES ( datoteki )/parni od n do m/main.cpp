#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n, m;
    cout<<" od:"; cin>>n;
    cout<<" do:"; cin>>m;

    ofstream vnesi("vneseno.txt");
    for ( int i=n;  i<m; i++) {
        if( i % 2 == 0 ) {
        vnesi<<i<<endl; } }
    vnesi.close();

    string citaj2;
    ifstream citaj; citaj.open("vneseno.txt");

    while(!citaj.eof()){
        getline(citaj,citaj2);
        cout<<citaj2<<endl; }

    citaj.close();

return 0;
}
