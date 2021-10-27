#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>

int main()
{
    char character;
    int sum=0, number=0;

    while (character != '!')
    {
        scanf("%c", &character);

        if(isdigit(character)) { number = number * 10 + (character - '0'); }
        else { sum+=number; number=0; }
    }

    printf("%d", sum);

    return 0;
}
