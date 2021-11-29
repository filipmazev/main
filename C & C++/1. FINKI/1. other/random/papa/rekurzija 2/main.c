#include <stdio.h>
#include <stdlib.h>

int re(int num)
{
    if(num == 0){ return 1; }
    if( (num%100 / 10) != 0) {
    if(((num%10)+1) % ((num%100) / 10) != 0 ){ return 0; } }
    re(num/10);
}

int main()
{
    int num; scanf("%d", &num); printf("%d", re(num));
    return 0;
}
