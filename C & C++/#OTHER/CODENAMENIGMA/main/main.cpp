#define WINVER 0x0500
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <string.h>
#include <cstring>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <fstream>

const size_t lower = 33, upper = 126, min_elements=2, max_elements=3;

int PRNG(int lower, int upper){ return (rand() % (upper - lower+1) + lower); }

int main()
{
    srand((unsigned)time(NULL)); size_t lenght=1024; char *input = (char *)calloc(lenght, sizeof(char)); char curr=' '; unsigned int pos=0;

    while(curr != '\n')
    {
        if(pos>=lenght){lenght*=2; char *temp = (char *)realloc(input, lenght*sizeof(char)); input=temp;} scanf("%c", &curr); *(input+pos)=curr; pos++;
    }

    std::ofstream save; save.open("save.txt"); save<<input;
    size_t max_pos = ((((int)strlen(input))-1) * (max_elements+1)); char converted[max_pos]; unsigned int cnt=0;

    for(unsigned int i=0; i<strlen(input)-1; i++)
    {
        int ASCII_POS = PRNG(lower,upper), new_pos = ASCII_POS + (int)*(input+i); while(new_pos>upper){ new_pos-=(upper-lower); }
        size_t lim=PRNG(min_elements,max_elements); char temp[lim]; strcpy(temp, ""); *(converted+cnt)=(char) new_pos; cnt++;
        for(unsigned int j=1; j<lim; j++){ ASCII_POS = PRNG(lower,upper); *(converted+cnt) = (char)ASCII_POS; cnt++; }
    }

    save<<converted; save.close(); system("password_tester.exe");
}
