#include <stdio.h>
#include <stdlib.h>

int prevrten_rekurzija(int number, int reversed)
{
    if (number == 0) return reversed;
    reversed = reversed * 10 + (number % 10);
    return prevrten_rekurzija(number/10, reversed);
}

int digit_counter(int number)
{
    int counter=0;
    while(number) { counter++; number/=10; }
    return counter;
}

int main()
{
    int number, range=9; scanf("%d", &number);

    if(number<range) { scanf("%d", &number); printf("Brojot ne e validen"); return 0; }

    if(number>0) number-=1;

    while(prevrten_rekurzija(number, 0) % digit_counter(number) != 0 )
    { number--; }

    printf("%d \n", number);

    return 0;
}
