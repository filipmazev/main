#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int bill=0, cnt=0, Bill_Array[9]={5000,1000,500,100,50,10,5,2,1};
    scanf("%d", &number);

    for(int i=0; i<9; i++)
    {
        if(cnt!=0) { cnt-=1; number-=(bill*cnt); }
        cnt=0; bill=Bill_Array[i];
        while((bill*cnt) <= number){ cnt++; }
        printf("%d*%d\n", cnt-1,bill);
    }

    return 0;
}
