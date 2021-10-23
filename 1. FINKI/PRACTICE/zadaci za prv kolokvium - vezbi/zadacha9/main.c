#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
int sum=0;

int main()
{
    char character;

    while (character != '.')
    {
        scanf("%c", &character);

        character=toupper(character);

        if(((int)character - '0') > 0 && !isdigit(character)){
            sum+=((int)character - '0') - 7; }

        if(isdigit(character)) { sum+=character - '0'; }
    }

    if(sum % 16 == 0)
    {
        if(sum%10 == 6 && (sum/10)%10 == 1) {
            printf("Poln pogodok"); }

        else printf("Pogodok");
    }
    else printf("%d", sum);

    return 0;
}
