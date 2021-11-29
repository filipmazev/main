#include <stdio.h>
#include <stdlib.h>

int main()
{
    int index, grade=0, award=0;
    float sum=0.00;

    scanf("%d", &index);

    for(int i=0; i<6; i++) { scanf("%d", &grade); sum+=grade; }
    if((sum/6.00) >= 9.5) { award = 1; }

    printf("Prosek: %.3f\n", sum/6.00);
    printf("Student: %d\n", index);
    printf("%d godina", 20-((int)index/10000));
    printf("\nNagraden: %d", award);

    return 0;
}
