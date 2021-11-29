#include <iostream>

using namespace std;

int FizzBuzz ( int num )
{
    if ( num == 0 ){ return 0; }
    if ( num % 3 == 0 && num % 5 == 0 ){ cout<<" FizzBuzz "<<endl; }
    else if ( num % 3 == 0 ){ cout<<" Fizz "<<endl; }
    else if ( num % 5 == 0 ){ cout<<" Buzz "<<endl; }
    FizzBuzz( num-=1 );
}

int main()
{
    FizzBuzz(100);
}
