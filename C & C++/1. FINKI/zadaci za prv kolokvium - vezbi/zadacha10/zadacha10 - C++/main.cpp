#include <iostream>
#include <vector>
using namespace std;

int alternate_check(int num, int num_org, int prev)
{
    if(num==0){ return num_org; }
    if(num/10>0){ if(((num%10 >= (num/10)%10)?1:0) == prev) { return 0; } }
    alternate_check(num/10, num_org, ((num%10 >= (num/10)%10)?1:0));
}

int main()
{
    int num; cin>>num; vector<int> results;

    while(!cin.fail()){
    if(num >= 10){ int compare = 0; if (num%10 <= (num/10%10)) { compare = 1; }
    results.push_back(alternate_check(num,num, compare)); } cin>>num; }

    for(unsigned int i=0; i<results.size(); i++){ if(results[i] !=0 ){ cout<<results[i]; } }

    return 0;
}
