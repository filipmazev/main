#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n, a, b, c, min=0, d=0; scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%d", &a); scanf("%d", &b); scanf("%d", &c);
        d = abs((a-b)) + abs((b-c)); if(min==0){ min = d; } else if (d<min){ min=d; }
    }

    printf("%d", min);

    return 0;
}
