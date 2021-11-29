#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, cost;
    scanf("%d", &number); scanf("%d", &cost);

    if(number - (cost*1.18) > 0 ){ printf("1"); }
    else { printf("0"); }

    return 0;
}
