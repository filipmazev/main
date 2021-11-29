#include <stdio.h>

int main()
{
    int m,n; scanf("%d %d", &m, &n);

    for(int i=m; i<n; i++)
    {
        int temp = i, mult=1, sum=0;
        while(temp>10){ sum+=temp%10; temp/=10; mult*=10; }
        if(sum == i/mult){ printf("%d\n", i); }
    }

    return 0;
}
