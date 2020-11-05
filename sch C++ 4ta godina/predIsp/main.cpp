#include <iostream>
using namespace std;

int broj(int N,int Br){

if ( Br > N ){ return N; }

if (Br>=N){
    if(Br%2==0) { cout<<(Br);}
    return 0;
}

else{
    cout<<(Br)<<endl;
    broj(N,Br+2);
    }
}

int main()
{
   int N;
   cout<<"Vnesi broj N"<<endl;
   cin>>N;
   broj(N,2);

   return 0;
}
