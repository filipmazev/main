#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n; scanf("%d",&n); int Arr[n];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j || j == (n-i-1)){ printf("*"); }
            else if(j==0 || j==n-1){ printf("*"); }
            else printf(" ");
        }
        printf("\n");
    }
}
