#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n, brojac=0; cin>>n;
    string chitaj;

    ofstream vnes; vnes.open("broj.txt");

    for (int i = 2; i < n; i++) {
     if (n % i == 0) { brojac++; } }

    if ( brojac == 0 ){
    vnes<<n<<" brojot e prost!"<<endl; }

    else vnes<<" brojot ne e prost!"<<endl;

    vnes.close();

    ifstream izlez;
    izlez.open("broj.txt");

    if(izlez.is_open())
    {
        getline(izlez, chitaj);
        cout<<chitaj<<endl;
    }

    izlez.close();

return 0;
}
