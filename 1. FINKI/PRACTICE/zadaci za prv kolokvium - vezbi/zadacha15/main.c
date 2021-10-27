#include <stdio.h>
#include <stdlib.h>
float sum_failed=0.0, sum_passed = 0.0;

int main()
{
    int number, number_of_students, position=0, cnt_failed=0, cnt_passed=0;

    scanf("%d", &number_of_students); int Array[number_of_students];

    for(int i=0; i<number_of_students; i++)
    {
        scanf("%d", &number);
        if(number<50) { sum_failed+=number; cnt_failed++; }
        else { sum_passed+=number; cnt_passed++;   }
        Array[position] = number; position++;

    }

    if(cnt_failed != 0){ printf("Sredna vrednost na padnati %.02lf \n", (sum_failed / cnt_failed));
    for(int i=0; i<(cnt_failed+cnt_passed); i++){ if(Array[i] < 50){ printf("%d ", Array[i]); } } }

    if(cnt_passed != 0){ printf("\nSredna vrednost na polozeni %.02lf \n", (sum_passed / cnt_passed));
    for(int i=0; i<(cnt_failed+cnt_passed); i++){ if(Array[i] >= 50){ printf("%d ", Array[i]); } } }

    return 0;
}
