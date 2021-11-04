#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c, first_half, solve;
    scanf("%f", &a); scanf("%f", &b); scanf("%f", &c);

    first_half = (pow((int)b,2)-(4*a*c));

    if( first_half != 0 ){
    if(first_half>0){ printf("Reshenija na ravenkata se: %.02f i %.02f\n",
    (-b - sqrt(first_half)) / (2* a), (-b + sqrt(first_half)) / (2* a));}
    else { printf("Ravenkata nema realni reshenija"); return 0; } }

    else { printf("Dvojno reshenie na ravenkata e: %.02f", -b / 2*a); }

    return 0;
}

