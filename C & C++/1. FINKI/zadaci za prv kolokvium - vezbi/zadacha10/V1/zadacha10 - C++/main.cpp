#include <iostream>
#include <vector>
using namespace std;

int checker(int number)
{
    vector<int> storage_digits;
    int temp_number=number, counter=0;
    bool alternate_check = true;

    while(temp_number) { storage_digits.push_back(temp_number%10); temp_number/=10; }

    int Array_Alternate[storage_digits.size()];

    for (unsigned int i=0; i<storage_digits.size()-1; i++)
    {
        if (storage_digits[i] < storage_digits[i+1]){ Array_Alternate[i] = 1; counter++; }

        if (storage_digits[i] > storage_digits[i+1]){ Array_Alternate[i] = 0; counter++; }

        if (storage_digits[i] == storage_digits[i+1]){ alternate_check = false; }
    }

    for (int i=0; i<counter-1; i++){
        if (Array_Alternate[i] == Array_Alternate[i+1] ){ alternate_check=false; } }

    if (alternate_check == true && counter != 0){ return number; }
    else return 0;
}

int main()
{
    int number, test=0;
    vector<int> storage;

    while(!cin.fail())
    {
        cin>>number;
        while(number < 10 && !cin.fail()){ cin>>number; }

        if(!cin.fail()){ storage.push_back(checker(number)); }
    }

    cout<<endl<<"uslovot cik-cak vazhi za:"<<endl;

    for(int i=0; i<storage.size(); i++){
        if(storage[i] != 0 ){ cout<<storage[i]<<endl; } }

    return 0;
}

