#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

vector<int> first_digit_array(int num, vector<int> digits)
{
    if (num == 0) { return digits; }
    int div = pow(10,((int)((num==0)?1:log10(num)))); digits.push_back(num/div);
    return first_digit_array(num - (num/div) * div, digits);
}

vector<int> last_digit_array(int num, vector<int> digits)
{
    if (num == 0) { return digits; } digits.push_back(num%10);
    return last_digit_array(num/10, digits);
}

int main()
{
    vector<int> first_digits; vector<int> last_digits;
    int num; cin>>num;
    first_digits = first_digit_array(num, first_digits);
    last_digits = last_digit_array(num, last_digits);

    for(unsigned int i=0; i<first_digits.size() / 2; i++)
    {
        printf("%d | %d <-> %d\n", i+1, first_digits[i], last_digits[i]);
    }

    return 0;
}
