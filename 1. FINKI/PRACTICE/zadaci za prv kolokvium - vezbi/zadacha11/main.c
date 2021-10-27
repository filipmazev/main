#include <stdio.h>
#include <stdlib.h>
int size_check(int number);

int size_check(int number)
{
    int counter=0;
    while(number) { counter++; number/=10; }
    return counter;
}

int checker(int number)
{
    int size = size_check(number), temp_number=number, counter=0, position=0, alternate_check = 0;
    int  Array[size], Alternate_Array[size];

    while(temp_number) { Array[position] = temp_number%10; temp_number/=10; position++; }

    for (int i=0; i<size-1; i++)
    {
        if(i+1 <= size-1)
        {
            if (Array[i] < 5) { Alternate_Array[i] = 1; counter++; }

            if (Array[i] >= 5) { Alternate_Array[i] = 0; counter++; }

            if (Array[i] == Array[i+1]) { alternate_check=1; }

        }
    }

    for (int i=0; i<counter-1; i++){
        if (Alternate_Array[i] == Alternate_Array[i+1] ) { alternate_check=1; } }

    if (alternate_check == 0 && counter != 0 && number != 10) { return number; }

    else return 0;
}

int main()
{
    int number, is_int=1, i=0;
    int Array[10000];

    while(is_int == 1 || i>10000)
    {
        is_int = scanf("%d", &number);

        while(number < 10 && is_int == 1) { is_int = scanf("%d", &number); }

        if(is_int == 1) { Array[i] = checker(number); i++; }
    }

    for(int j=0; j<i; j++){
        if(Array[j] != 0 ) { printf("%d \n", Array[j]); } }

    return 0;
}
