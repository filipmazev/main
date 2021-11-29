#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int re(int num)
{
    if (num == 0) { return 0; }
    int div = pow(10,((int)((num==0)?1:log10(num)))), digit = num/div;
    if(digit % 2 != 0) { digit+=1; if(digit>=10){ digit=0; } } printf("%d", digit);
    return re(num - (num/div) * div);
}

int main()
{
    int num; scanf("%d", &num); re(num);
    return 0;
}
