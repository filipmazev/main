#include <iostream>
#include <vector>
using namespace std;

int number_sum(int number)
{
    int sum=0;
    while(number){ sum+=number%10; number/=10; }
    return sum;
}

int number_maximum(int number)
{
    int temp_max=0;
    while(number)
    {
        if(number%10 > temp_max){
            temp_max = number%10; }
        number/=10;
    }
    return temp_max;
}

int main()
{
    int number, sum=0;
    vector<int> storage_number; vector<int> storage_sum; vector<int> storage_maximum;

    while(!cin.fail())
    {
        cin>>number;
        if(!cin.fail())
        {
            storage_number.push_back(number);
            storage_sum.push_back(number_sum(number));
            storage_maximum.push_back(number_maximum(number));
        }
    }

    for(unsigned i=0; i<storage_number.size(); i++)
    {
        sum=0; sum+=storage_sum[i];
        if (i!=0){ sum+=storage_maximum[i-1]; }

        cout<<storage_number[i]<<": "<<sum<<endl;
    }

    return 0;
}
