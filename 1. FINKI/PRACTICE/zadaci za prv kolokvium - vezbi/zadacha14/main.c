#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, is_int=1, maximum=0, sum=0;

    while(is_int == 1)
    {
        sum=0; sum += maximum;

        is_int = scanf("%d", &number);

        int temp_number = number; maximum = 0;

        while(temp_number)
        {
            if(temp_number % 10 > maximum){ maximum = temp_number%10; }

            sum+=temp_number%10; temp_number/=10;
        }

        if(is_int == 1){ printf("%d: %d \n", number, sum); }
    }

    return 0;
}
