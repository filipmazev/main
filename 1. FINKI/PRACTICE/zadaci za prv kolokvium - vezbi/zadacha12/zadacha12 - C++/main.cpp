#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    int number, i=0, digit_limit = 5, max_size=pow(10,digit_limit);
    vector<int> storage; vector<int> position_storage;

    while(!cin.fail())
    {
        cin>>number;
        while(number / max_size != 0){ cin>>number; }
        storage.push_back(number);
    }

    for(unsigned int i=0; i<storage.size() - 1; i++)
    {
        int temp_number=storage[i], temp_max=0, position=0, counter=0;

        while(temp_number)
        {
            if(temp_number % 10 > temp_max){
                temp_max = temp_number%10; position=counter; }

            temp_number/=10; counter++;
        }

        position_storage.push_back(position);
    }

    for(int i=0; i<digit_limit; i++)
    {
        cout<<" "<<i<<":";

        int cnt=0;
        for(unsigned int j=0; j<position_storage.size(); j++){
            if (position_storage[j] == i) { cnt++; } }

        cout<<cnt<<endl;
    }

    return 0;
}
