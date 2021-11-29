#include <stdio.h>
#include <stdlib.h>

int soft_number_checker(int number)
{
    if ( number == 0 ){ return 0; }
    if ( (number % 2) != 0 ) { return 1; }
    else return soft_number_checker(number/10);
}

int main()
{
    int range_start, range_end, count=0;

    scanf("%d", &range_start); scanf("%d", &range_end);
    if(range_start > range_end) { int temp;
    temp = range_start; range_start = range_end; range_end = temp; }

    int minimum = range_end;

    for(int i=range_start; i<range_end; i++)
    {
        count++;
        if(soft_number_checker(i) != 1 && i<minimum)
        {
            minimum = i;
        }
    }

    if (minimum != range_end || count == 1) { printf("%d", minimum); }
    else { printf("NE"); }

    return 0;
}
