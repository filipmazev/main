#include <iostream>
using namespace std;

int faktoriel(int n)
{
    if (n==1) return 1;
        else return (n)*faktoriel(n-1);
}

int main()
{
   int x;
   cout<<" Vnesi broj: ";
   cin>>x;
   cout<<endl<<" Faktoriel: "<<faktoriel(x)<<endl;
   cout<<endl;
   system("PAUSE");
   return 0;
}
