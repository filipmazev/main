#include <cstdlib>
#include <iostream>
using namespace std;
int main()
{
	int x,y;
	cout << "Vnesi go prviot broj: "<<endl;
	cin >>x;
	cout << "Vnesi go vtoriot broj: "<<endl;
	cin >>y;
	while (x!=y)
	{
		if (x>y)
        x=x-y;
        
   else
        y=y-x;
	}
cout<<"NZD e: "<<x<<endl;;
system ("PAUSE");
return 0;
}
