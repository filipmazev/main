#include <stdio.h>
#include <stdlib.h>

int size(int n){ int cnt=0; while(n){ cnt++; n/=10; } return cnt; }

int main()
{
    int number, num_org, temp_number=0;
    scanf("%d", &number); num_org = number;
    int size_of = size(number); int numArr[size_of];

    for(int i=0; i<=(size_of-1); i++){ numArr[i] = number%10; number/=10; }

    printf("0");
    for(int i=(size_of-1); i>=0; i--){
    switch(i){ case 2: printf("-"); break; case 5: printf("/"); break; }
    printf("%d", numArr[i]); }


    switch((num_org/1000000 % 10)){
    case 0: case 1: case 2: printf(" T-Mobile"); break;
    case 5: case 6: case 7: case 8: printf(" A1"); break;
    case 9: printf(" Lycamobile"); break; }

    return 0;
}
