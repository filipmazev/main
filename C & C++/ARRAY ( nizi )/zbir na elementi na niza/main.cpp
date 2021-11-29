# include <iostream>
using namespace std;

int main()
{
int n, sum=0;

cout<<" vnesi golemina na nizata: "; cin>>n; int num[n];

    for(int i=0; i<n; i++) {
    cout<<" vnesi broj "<<i+1<<": ";
    cin>>num[i]; sum+=num[i]; }

    cout<<" sum: "<<sum;
return 0;
}
