#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double x, y, Arr_X[3], Arr_Y[3], max=0, d; int pos_1=0, pos_2=0;
    char point[3]={'A','B','C'};

    for(int i=0; i<3; i++)
    {
        scanf("%lf", &x); scanf("%lf", &y); Arr_X[i]=x; Arr_Y[i]=y;
    }

    for(int i=0; i<3; i++)
    {

        for(int j=i; j>=0; j--)
        {
            d = sqrt(pow((Arr_X[i] - Arr_X[j]),2) + pow((Arr_Y[i] - Arr_Y[j]),2));
            if (d>max){ max=d; pos_1=j; pos_2=i; }
        }

        for(int k=i; k<3; k++)
        {
            d = sqrt(pow((Arr_X[k] - Arr_X[i]),2) + pow((Arr_Y[k] - Arr_Y[i]),2));
            if (d>max){ max=d; pos_1=i; pos_2=k; }
        }

    }

    printf("%c%c", point[pos_1], point[pos_2]);

    return 0;
}
