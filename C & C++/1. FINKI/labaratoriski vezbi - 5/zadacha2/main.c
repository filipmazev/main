#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num_1, num_2; scanf("%d %d", &num_1, &num_2);

    while(num_1)
    {
        int temp=num_2, digit=num_1%10, checker=0;
        while(temp){ if(temp%10 == digit) { checker=1; } temp/=10;  }
        if(checker==0){ printf("NE"); return 0; } num_1/=10;
    }

    printf("DA");

    return 0;
}
