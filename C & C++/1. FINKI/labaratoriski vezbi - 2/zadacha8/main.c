#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char c; int Array_One[3], Array_Two[3];

    for(int i=0; i<3; i++)
    {

    scanf("%c", &c);

    if ( isdigit(c) || (c >= 97 && c <= 122) || (c >= 65 && c <= 90) )
        {
            Array_One[i]=1;
            if(!isdigit(c)){ Array_Two[i]=0; }
            else Array_Two[i]=1;
        }

    else { Array_One[i]=0; Array_Two[i]=1; }

    }

    for(int i=0; i<3; i++ ) { printf("%d",Array_One[i]); } printf("\n");
    for(int i=0; i<3; i++ ) { printf("%d",Array_Two[i]); }

    return 0;
}
