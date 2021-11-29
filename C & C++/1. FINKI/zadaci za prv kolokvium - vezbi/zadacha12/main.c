#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, is_int=1, digit_limit = 5, max_size=100000;

    int Array_Position[digit_limit];
    for(int i=0; i<digit_limit; i++){ Array_Position[i] = 0; }

    while(is_int == 1)
    {
        int maximum=0, counter=0, position=0;

        is_int = scanf("%d", &number);
        while(number / max_size != 0) { is_int = scanf("%d", &number);  }

        while(number)
        {
            if(number % 10 > maximum){ maximum = number%10; position=counter; }

            number/=10; counter++;
        }

        if (is_int == 1) { Array_Position[position] += 1; }
    }

    for(int i=0; i<digit_limit; i++){ printf("%d: %d \n", i, Array_Position[i]); }

    return 0;
}
