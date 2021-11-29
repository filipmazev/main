#include <stdio.h>
#include <stdlib.h>

int flip(int n){ int c=0; while(n){ c=c*10+n%10; n/=10; } return c; }

int main()
{
    int m,n, cnt=0; scanf("%d %d", &m, &n);

    for(int i=m; i<n; i++){
    if( i+flip(i) <= i*2 ){ printf("%d\n",i); cnt++; }}

    printf("Vkupno: %d",cnt); cnt++;

    return 0;
}
