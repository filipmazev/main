#include <stdio.h>
#include <stdlib.h>

int first(int number)
{
    while (number>=10) { number/=10; }
    return number;
}

int main()
{
    int range_start, range_end, bigger, smaller, counter=0;
    scanf("%d", &range_start); scanf("%d", &range_end);

    while(range_start<0 || range_end<0){
    scanf("%d", &range_start); scanf("%d", &range_end); }
    if(range_start > range_end) { int temp;
    temp = range_start; range_start = range_end; range_end = temp; }

    while (bigger)
    {
        if (counter % 2 == 0)
        {
            if (first(bigger)%10 != first(smaller)%10) { bigger=0; counter=-1; }
            smaller/=10;
        }

        counter++; bigger/=10;
    }

    if (counter != 0) { printf("PAREN"); }

    else printf("NEPAREN");

    return 0;
}

