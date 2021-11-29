#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n; scanf("%d",&n); int Arr[n];
    if (n<2){ printf("Nevaliden vlez"); return 0; }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(j == (n-i-1)){ printf("*"); }
            else if(i==0 || j==0){ printf("*"); }
            else printf(" ");
        }
        printf("\n");
    }
}
