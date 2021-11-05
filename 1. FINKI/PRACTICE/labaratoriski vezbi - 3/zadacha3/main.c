#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int index, index2=0, tmp_index=0, cnt=0; scanf("%d", &index);

    for(int i=3; i>=0; i--){
        int mod=0, power_of=pow(10,i), num=(index/power_of)%10;
        if(num == 5){ cnt++; mod=1; }
        index2 = index2 + power_of * (num+mod); }

    if(cnt>=2){
    tmp_index=index; if(index2>index){ index=index2; index2 = tmp_index; }
    printf("%.04f%%", ((index - index2) / (float)tmp_index) * 100);}

    else { printf("Error"); }

    return 0;
}
