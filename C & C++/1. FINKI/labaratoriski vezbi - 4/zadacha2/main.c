#include <stdio.h>
#include <stdlib.h>

int digit_sum(int n) { int sum=0; while(n){ sum+=n%10; n/=10; } return sum; }

int main()
{
    int num_A, num_P_compare, cnt=0;
    scanf("%d", &num_A); scanf("%d", &num_P_compare);

    for(int i=num_A; i>0; i--){
    if(cnt<5){ if ( (((digit_sum(i) / (float)i) * 100 )) == num_P_compare){ cnt++; printf("%d\n", i); } } }

    if(cnt==0){ printf("NEMA"); }

    return 0;
}
