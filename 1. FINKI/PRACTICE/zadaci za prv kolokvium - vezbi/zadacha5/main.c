#include <stdio.h>
#include <stdlib.h>

int main()
{

    int range_start, range_end, counter = 0;
    scanf("%d", &range_start); scanf("%d", &range_end);

    if (range_start <=0 || range_end <=0)
    {
        printf("Invalid input");
        return 0;
    }

    if (range_start > range_end) {
        int temp; temp = range_start; range_start = range_end; range_end = temp; }

    while (range_end)
    {

        int last2FromEnd = range_end%100, last1FromStart = range_start%10;

        if (last2FromEnd/10 != last1FromStart) { printf("NE"); return 0; }

        range_end /= 100; range_start /= 10;
    }

    printf("PAREN");

    return 0;
}
