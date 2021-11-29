#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, number_2=0, cnt=0, size_required=5;
    scanf("%d", &number); int tmp_number = number;

    while(tmp_number) { cnt++; number_2 = number_2*10+tmp_number%10; tmp_number/=10; }

    if(cnt!=size_required){ printf("Nevaliden vlez"); }
    else if(number != number_2) { printf("Ne e palindrom"); }
    else { printf("Palindrom"); }

    return 0;
}
