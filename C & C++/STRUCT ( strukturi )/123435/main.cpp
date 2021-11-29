#include <iostream>
using namespace std;

int main()
{
 int i, a[277];
 a[0]=276;
 cout<<"a[0]="<<a[0]<<endl;

 for (i=1;i<277;i++)
 {
    a[i]=a[i-1]-1;
    cout<<"a["<<i<<"]="<<a[i]<<endl;
 }

return 0;
}


