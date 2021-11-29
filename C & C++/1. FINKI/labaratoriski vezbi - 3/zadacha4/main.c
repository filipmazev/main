#include <stdio.h>
#include <stdlib.h>

int counter(int num){
int cnt=0; while(num){ cnt++; num/=10; } return cnt; }

int main()
{
    long long embg;
    scanf("%lld", &embg);

    int year = 1000+(embg % 1000);
    int month = (embg / 1000) % 100;
    int day = (embg / 100000) % 100;
    int number = (day*100) + (month*1000) + year;

    if(counter(number) != 5){
    if(year%100 > 60 && year%100 <=80){ number+=80000; }
    if(year%100 > 80 && year%100 <= 99){ number+=90000; }
    else { number+=70000; } }

    printf("%d", number);

    return 0;
}
