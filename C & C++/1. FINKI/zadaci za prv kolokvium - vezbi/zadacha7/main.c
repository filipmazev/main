#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    scanf("%d", &number);
    char char_1='%', char_2='.', char_3='@';

    while (number<=2) { scanf("%d", &number); }

    for (int i=0; i<number; i++)
    {
        for (int j=0; j<number; j++)
        {
            if (j == 0 || j == number-1) { printf("%c", char_1); }

            else if (i != 0 && i < number-1) { printf("%c", char_2); }

            else printf("%c", char_3);
        }
        printf("\n");
    }

    return 0;
}

