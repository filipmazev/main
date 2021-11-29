#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;
    scanf("%d", &x); scanf("%d", &y); scanf("%d", &z);

    printf("%d ", ++x - --y + z++ + (x>z));

    z = z-- || (x>y) && (x>z);
    printf("%d", ++x - --y + z++ + x>z);

    return 0;
}
