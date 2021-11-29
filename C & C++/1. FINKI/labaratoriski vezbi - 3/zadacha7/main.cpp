#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, digit=0, ocena, mod, last_digit;
    scanf("%d", &n); last_digit=n%10;

    if(n < 100 && n>=0){
        if(n%10 == 0){ mod=0; } else { mod=1; }
            while(n){ digit=n%10; n/=10; }
        if(digit>=5) { ocena=digit+mod; } else { ocena=5; } }
    else if(n == 100){ ocena=10; }
    else{ printf("Nevalidna vrednost za poeni!"); return 0; }

    printf("Ocenka %d",ocena);
    if(ocena>5) { switch(last_digit){
    case 1: case 2: case 3: printf("-"); break;
    case 9: case 8: case 0: printf("+"); break;
    } }

    return 0;
}
