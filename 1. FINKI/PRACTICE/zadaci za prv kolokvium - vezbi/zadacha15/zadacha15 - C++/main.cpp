#include <iostream>
#include <vector>
#include<cstdio>
using namespace std;

int main()
{
    int number, points;
    double sum_passed=0.00, sum_failed=0.00, average=0.00;
    vector<int> storage_passed; vector<int> storage_failed;

    cout<<"KOLKU STUDENTI POLAGALE KOLOKVIUM:"; cin>>number;

    for(int i=0; i<number; i++)
    {
        cin>>points;

        if(points >= 50){ storage_passed.push_back(points); sum_passed+=points; }

        else{ storage_failed.push_back(points); sum_failed+=points; }
    }

    cout<<endl<<"sredna vrednost na padnati: ";
    average = sum_failed / storage_failed.size(); printf("%.2f \n", average);
    for(unsigned i=0; i<storage_failed.size(); i++){ cout<<storage_failed[i]<<" "; }
    cout<<endl;

    cout<<endl<<"sredna vrednost na polozeni: ";
    average = sum_passed / storage_passed.size(); printf("%.2f \n", average);
    for(unsigned i=0; i<storage_passed.size(); i++){ cout<<storage_passed[i]<<" "; }
    cout<<endl;

    return 0;
}
