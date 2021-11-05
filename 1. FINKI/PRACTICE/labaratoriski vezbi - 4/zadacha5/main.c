#include <stdio.h>
#include <stdlib.h>

int main()
{
    float tax=0, taxed=0, sum=0; char type;
    int n, cost; scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%d %c", &cost, &type);
        switch(type){ case 'A': tax=1.18; break; case 'B': tax = 1.05; break; case 'V': tax=0.00; break; }
        if(tax!=0){sum+=((float)cost*tax) - cost; }
    }

    printf("Total tax return is: %.2f", (sum * 1.15) - sum);

    return 0;
}
