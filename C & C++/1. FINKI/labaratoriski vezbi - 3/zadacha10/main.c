#include <stdio.h>
#include <stdlib.h>

int counter(int number) { int cnt=0; while(number){cnt++; number/=10;} return cnt; }
int power(int i){ int pow=1; while(i){ pow*=10; i--; } return pow; }

int main()
{
    int number; scanf("%d", &number);
    int size=counter(number);

    int first_digit = (number/power(size-1)) % 10;
    int second_digit = (number/power(size-2)) % 10;
    int sum_of_last_two = number%10 + (number/10) % 10;

    if(first_digit == 0 || second_digit == 0 || sum_of_last_two == 0 || number == 0 ){ printf("Nevaliden broj"); return 0; }

    if (number % first_digit == 0 && number % sum_of_last_two != 0 ){ printf("DA"); }
    else if (number % second_digit != 0 && number % sum_of_last_two != 0 ){ printf("DA"); }
    else printf("NE");

    return 0;
}
