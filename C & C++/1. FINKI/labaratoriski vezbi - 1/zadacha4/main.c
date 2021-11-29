#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n; float sum=0;

    for(int i=0; i<5; i++){ scanf("%d", &n); sum+=n; }
    printf("%.2f", sum / 5.00);

    return 0;
}
