#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num; scanf("%d",num);

    if ( num % 3 == 0 && num % 5 == 0 ){ printf("Tik - Tak"); }
    else if ( num % 3 == 0 ){ printf("Tik"); }
    else if ( num % 5 == 0 ){ printf("Tak"); }
    else{ printf("Losh Broj"); }

    return 0;
}
