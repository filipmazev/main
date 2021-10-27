#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, temp_number, denominator=10000;
    scanf("%d", &number); temp_number = number;

    for(int i=0; i<2; i++)
    {
        printf("%d ", number % 10 + (temp_number/denominator % 10));
        number/=10; denominator/=10;
    }

    printf("%d ", number%10);

    return 0;
}
