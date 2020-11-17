#include <iostream>
using namespace std;

int FindLessFive(int num )
{
    if ( num == 0 )  { return 0; }

    if( num % 10 < 5 ) { cout<<num % 10 <<",";

   return 1 + FindLessFive(num /= 10); }

    else return FindLessFive(num /= 10);
}

int main() {

    int num;

    cout<<"Enter your number: ";

    cin>>num;

    cout<<"Digits less than 5 are: ";

    cout<<endl<<"So there are "<<FindLessFive(num)<<" digits less than 5 in your number"<<endl;

    return 0;

}
