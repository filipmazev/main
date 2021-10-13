#include <iostream>
using namespace std;

bool blag_broj_checker(int i)
{
    int cnt1=0, cnt2=0, a=0;

    while( i != 0)
    {
        cnt2++;
        a = i % 10; i = i / 10;
        if( a % 2 == 0 ){ cnt1++; }
    }

    if( cnt2 == cnt1 ) { return true; }
    else return false;
}

int main()
{
    int n, m, cnt=0;
    cin>>m>>n;

    int min=n;

    for(int i=m; i<n; i++)
    {
        if (blag_broj_checker(i) == 1) {
            if (i < min) { min = i; } cnt++;  }
    }

    if(cnt > 0 ){cout<<" najmal blag broj od opsegot "<<m<<" do "<<n<<" e: "<<min<<endl; }
    else cout<<" NE ";

    return 0;
}
