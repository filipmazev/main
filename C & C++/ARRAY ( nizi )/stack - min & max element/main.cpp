#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int n, x, minS, maxS;
    stack<int> stackM;
    cout<<" vnesi kolku elementi ke ima stackot: "; cin>>n;

    for(int i=0; i<n; i++){ cin>>x; stackM.push(x); }

    minS = stackM.top(); maxS = stackM.top();

    while(!stackM.empty()) {
        if ( stackM.top() < minS ){
            minS = stackM.top(); }

        if ( stackM.top() > maxS ){
            maxS = stackM.top(); }

        stackM.pop(); }

    cout<<" minimalniot element e: "<<minS<<" | maksimalniot element e: "<<maxS<<endl;


return 0;
}
