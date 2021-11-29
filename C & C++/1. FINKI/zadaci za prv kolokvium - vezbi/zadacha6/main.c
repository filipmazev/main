#include <stdio.h>
#include <stdlib.h>
int sum=0;
double counter=0, counter_2=0;

int main()
{
    int compare, number_1, number_2;
    double procent=0.00;
    scanf("%d", &compare);
    scanf("%d", &number_1); scanf("%d", &number_2);

    while((number_1 + number_2) != 0 )
    {
        sum += number_1 + number_2;

        if (compare == sum) { counter++; }

        counter_2++; sum=0;

        scanf("%d", &number_1); scanf("%d", &number_2);
    }

    procent = counter / counter_2;
    printf("Vnesovte %d parovi od broevi chij zbir e %d \n", (int)counter, compare);
    printf("Procentot na parovi so zbir %d e %.02lf%% \n", compare, procent * 100);

    return 0;
}

