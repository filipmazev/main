#include <stdio.h>

int main()
{
    int num1, num2, i=1;
    scanf("%d %d", &num1, &num2); if(num1 <=0 || num2 <= 0){ printf("Invalid input"); return 0; }

    int temp_num; if(num2>num1){ temp_num=num1; num1=num2; num2=temp_num; }

    while(num2){ if(i%2 == 0) { if(num1%10 != num2%10) { printf("NE"); return 0; } num2/=10; } num1/=10; i++; }

    printf("PAREN");

    return 0;
}
