#include <stdio.h>
#include <stdlib.h>

int main()
{
    float weight, height;
    scanf("%f", &weight);
    scanf("%f", &height); height/=100;

    printf("%.2f", weight/(height*height));

    return 0;
}
