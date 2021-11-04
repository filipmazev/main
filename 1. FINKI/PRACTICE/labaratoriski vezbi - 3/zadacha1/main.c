#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int counter(int number) { int cnt=0; while(number){cnt++; number/=10;} return cnt; }

int main()
{
    int number, size, sum=0, mult=1; scanf("%d", &number); size=counter(number);

    if(size == 7)
    {
        for(int i=size-1; i>=0; i--){
        int power_of=pow(10,i), num=(number/power_of)%10;
        sum+=num; mult*=num; printf("%d\n",num);}
        printf("%d\n%d\n",sum, mult);
    }

    else printf("Vneseniot broj ne e 7 cifren");

    return 0;
}
