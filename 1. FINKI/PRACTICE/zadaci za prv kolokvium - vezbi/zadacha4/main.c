#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
int counter=0;

int main()
{
    char character;
    int sum=0, number=0;

    while (character != '!')
    {
        scanf("%c", &character);

        if(isdigit(character))
        {
            counter++;
            number = number * 10 + (character - '0');
            sum+=number;
        }

        else { number=0; counter=0; }

        if(counter==1) { sum-=(character - '0'); }
    }

    printf("sum: %d", sum);

    return 0;
}
