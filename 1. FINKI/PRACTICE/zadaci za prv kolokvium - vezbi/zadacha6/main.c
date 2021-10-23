#include <stdio.h>
#include <stdlib.h>
int sum=0;
double counter=0, counter_2=0;

int main()
{
    int compare, number_1, number_2;
    double procent=0.00;

    printf("VNESI BROJ ZA SPOREDBA: ");
    scanf("%d", &compare);
    printf("VNESI PAR 0 0 ZA DA PREKINES \n");
    printf("(1) vnesi par na broevi: ");
    scanf("%d", &number_1); scanf("%d", &number_2);

    while(number_1 != 0, number_2 != 0)
    {
        sum += number_1 + number_2;

        if (compare == sum) { counter++; }

        counter_2++; sum=0;

        printf("(%d) vnesi par na broevi: ", (int)counter_2+1);
        scanf("%d", &number_1); scanf("%d", &number_2);
    }

    procent = counter / counter_2;
    printf("\nvnesovte %d par(ovi) od broevi chij zbir e %d \n", (int)counter, compare);
    printf("procentot na parovi so zibr %d e %.02lf %% \n", compare, procent * 100);

    return 0;
}

