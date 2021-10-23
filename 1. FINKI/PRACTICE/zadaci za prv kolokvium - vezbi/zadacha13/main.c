#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size, broj_na_grupi=3;
    printf(" vnesi kolku indexi kje vnesuvas: "); scanf("%d", &size);
    int Array_index[size];

    for(int i=0; i<size; i++)
    {
        printf(" (%d) vnesi index: ", i+1); scanf("%d", &Array_index[i]);

        while(Array_index[i] >= 100000 || Array_index[i] < 10000){
            printf(" vnesi 5 cifren index: "); scanf("%d", &Array_index[i]); }
    }

    for(int i=1; i<=broj_na_grupi; i++)
    {
        printf(" grupa %d:", i);

        for(int j=0; j<size; j++)
        {
            if(i == 1) { switch(Array_index[j] % 10) { case 0: case 1: case 2: printf(" %d ", Array_index[j]); break; } }
            if(i == 2) { switch(Array_index[j] % 10) { case 3: case 4: case 5: printf(" %d ", Array_index[j]); break; } }
            if(i == 3) { switch(Array_index[j] % 10) { case 6: case 7: case 8: case 9: printf(" %d ", Array_index[j]); break; } }
        }

        printf("\n");
    }

    return 0;
}

