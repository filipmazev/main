#include <stdio.h>
#include <stdlib.h>

int checker(int num_1, int temp_num_1, int num_2, int temp_num_2, int counter)
{
    if (num_1 == 0) {
        if (counter!=0){ return 1+(temp_num_1-counter); }
        else return temp_num_1-counter; }

    if (num_2 == 0) {
        return checker (num_1/10,temp_num_1,temp_num_2,temp_num_2,counter); }

    if (num_1%10 == num_2%10) {
        return checker(temp_num_1-counter,temp_num_1,temp_num_2,temp_num_2,counter+1); }

    else return checker(num_1,temp_num_1,num_2/10,temp_num_2,counter);
}

int main()
{
    int num_1, num_2;
    scanf("%d", &num_1); scanf("%d", &num_2);
    printf("%d", checker(num_1-1,num_1-1,num_2,num_2,0));

    return 0;
}
