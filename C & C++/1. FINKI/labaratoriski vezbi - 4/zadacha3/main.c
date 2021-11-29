#include <stdio.h>
#include <stdlib.h>

int summery(int n)
{ int sum=0; while(n){ if((n%10) % 2 == 0){sum+=n%10;} n/=10; } return sum; }

int main()
{
    int start, end, cnt=0;
    scanf("%d", &start); scanf("%d", &end);

    for(int i=start; i<=end; i++)
    {
        if(summery(i) > 0 && (summery(i) % 4 == 0) ){ cnt++; printf("%d\n", i);}
    }

    printf("Vkupno: %d", cnt);

    return 0;
}
