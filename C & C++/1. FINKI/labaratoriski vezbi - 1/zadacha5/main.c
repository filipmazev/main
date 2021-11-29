#include <stdio.h>
#include <stdlib.h>

int main()
{
    int time;
    float hours=0.0, minutes=0.0, seconds=0.0;
    scanf("%d", &time);

    hours = time / 3600.00;
    minutes = (hours - (int)hours) * 60;
    seconds = (minutes - (int)minutes) * 60;

    printf("%d sekundi se %d casovi, %d minuti i %.f sekundi", time, (int)hours, (int)minutes, seconds);

    return 0;
}
