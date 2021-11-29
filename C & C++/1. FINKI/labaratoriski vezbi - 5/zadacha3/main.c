#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number=1, cnt=0, c=0;

    while(number < 90 && number > 0)
    {
        cnt++; scanf("%d", &number);
        if(cnt<=7){ c = c*10 + number %10; }
        else if(number<=90 && number>=0){ c+=number;  }
    }

    printf("%d", c);

    return 0;
}
