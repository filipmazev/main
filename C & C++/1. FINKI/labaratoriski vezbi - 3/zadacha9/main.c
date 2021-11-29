#include <stdio.h>
#include <stdlib.h>

int main()
{
    double number, sum=0;
    scanf("%lf", &number);

    if(number>=500){ sum+=5 * 500; } else { sum+=5 * number; } number-=500;

    if(number>0){ if(number>=150){ sum+=7.5 * 150; } else { sum+=7.5 * number; } number-=150;
        if(number>0) { if(number>=200){ sum+=11 * 200; } else { sum+=11 * number; } number-=200;
            if(number>0) { sum+=13.5 * number; } } }

    if(sum<7000) { sum*=1.10; }
    if(sum>7000) { sum*=1.18; }
    printf("%.2lf", sum);

    return 0;
}
