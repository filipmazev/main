#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, transaction;
    scanf("%d", &number);

    for(int i=0; i<5; i++){
        scanf("%d", &transaction); number+=transaction; }

    if(number>0){ printf("1"); } else printf("0");

    return 0;
}
