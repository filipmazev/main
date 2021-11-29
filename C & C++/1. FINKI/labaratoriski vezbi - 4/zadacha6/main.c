#include <stdio.h>
#include <stdlib.h>

int main()
{
    double tax=0, sum=0, total=0, max_t=0, max_tax=0; char type;
    int n, m, cost; scanf("%d", &m);

    for(int j=0; j<m; j++)
    {
        sum=0; total=0; scanf("%d", &n);
        for(int i=0; i<n; i++)
        {
            scanf("%d %c", &cost, &type); total+=cost;
            switch(type){ case 'A': tax=1.18; break; case 'B': tax = 1.05; break; case 'V': tax=0.00; break; }
            if(tax!=0){sum+=((double)cost*tax) - cost; }
        }

    float taxed = (sum * 1.15) - sum;
    if(total<=30000){ printf("Total tax return is: %.2lf\n", taxed); if( taxed > max_tax  ) { max_tax = taxed; max_t=total; } }
    else { printf("Sum %d is bigger than 30000\n", (int)total); }
    printf("%lf\n", max_t);
    }

    printf("Max amount of reciept: %d. Max tax return for reciepts: %.02lf", (int)max_t, max_tax);

    return 0;
}
