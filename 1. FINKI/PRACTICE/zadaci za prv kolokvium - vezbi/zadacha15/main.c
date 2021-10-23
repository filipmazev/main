#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, is_int=1, number_of_students, position=0;
    double sum_failed=0.00, sum_passed = 0.00, cnt_failed=0.00, cnt_passed=0.00;

    scanf("%d", &number_of_students); int Array[number_of_students];

    while(is_int == 1)
    {
        is_int = scanf("%d", &number);

        if(number<50) { cnt_failed++; sum_failed+=number; }
        else { cnt_passed++;  sum_passed+=number; }

        if(is_int == 1){ Array[position] = number; position++; }
    }

    if(cnt_failed != 0){ printf("Sredna vrednost na padnati %.02lf \n", (sum_failed / cnt_failed));
    for(int i=0; i<(cnt_failed+cnt_passed)-1; i++){ if(Array[i] < 50){ printf("%d ", Array[i]); } } }

    if(cnt_passed != 0){ printf("\nSredna vrednost na polozeni %.02lf \n", (sum_passed / cnt_passed));
    for(int i=0; i<(cnt_failed+cnt_passed)-1; i++){ if(Array[i] >= 50){ printf("%d ", Array[i]); } } }

    return 0;
}
