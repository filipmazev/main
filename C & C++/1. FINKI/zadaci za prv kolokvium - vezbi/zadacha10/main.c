#include <stdio.h>
#include <stdlib.h>

int alternate_check(int num, int num_org, int prev)
{
    if(num==0){ return num_org; }
    if(num/10>0){ if(((num%10 >= (num/10)%10)?1:0) == prev) { return 0; }; }
    alternate_check(num/10, num_org, ((num%10 >= (num/10)%10)?1:0));
}

int main()
{

    int num, is_int=1, i=0; int Array[10000];

    while(is_int == 1 || i>10000)
    {
        is_int = scanf("%d", &num);
        while(num < 10 && is_int == 1) { is_int = scanf("%d", &num); }

        if(is_int == 1){
        int compare = 0; if (num%10 <= (num/10%10)) { compare = 1; }
        Array[i] = alternate_check(num, num, compare); i++; }
    }

    for(int j=0; j<i; j++){ if(Array[j] != 0 ) { printf("%d \n", Array[j]); } }

    return 0;
}
