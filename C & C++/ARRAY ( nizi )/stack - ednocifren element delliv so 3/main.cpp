#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int n, x, sum=0; 
    stack<int> stackM;
    cout<<" vnesi kolku elementi ke ima stackot: "; cin>>n;

    for(int i=0; i<n; i++){ cin>>x; stackM.push(x); }

     while(!stackM.empty()) {
            if ( stackM.top() < 10 && stackM.top() % 3 == 0 )
                { sum += stackM.top(); }
            stackM.pop(); }

    cout<<" sum: "<<sum<<endl;

return 0;
}
