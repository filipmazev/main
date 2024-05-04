// Could you solve it without converting the integer to a string?
#include <iostream>
#include <limits.h>

int reverse(int x) {
    int reversed = 0;

    while (x) {
        if (reversed > INT_MAX / 10 || reversed < INT_MIN / 10) { return 0; }
        reversed = reversed * 10 + (x % 10); x /= 10;
    }

    return reversed;
}

int main()
{
    int x; std::cin >> x;
    std::cout << reverse(x);
    return 0;
}
