#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, sum=0, maximum=0;
    scanf("%d", &number);

    for (int i=1; i<=number; i++)
    {
        sum = 0;

        for (int j=1; j<i; j++)
        {
            if (i % j == 0) { sum += j; }
        }

        if (sum > maximum) { maximum = sum; }
    }

    printf("%d", maximum);

    return 0;
}

