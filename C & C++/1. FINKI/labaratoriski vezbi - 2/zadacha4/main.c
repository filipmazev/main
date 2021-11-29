#include <stdio.h>
#include <stdlib.h>

int main()
{
    int kilometars;
    scanf("%d", &kilometars);

    int start_price, start_km, extra_price, taxi_1;
    scanf("%d", &start_price); scanf("%d", &start_km); scanf("%d", &extra_price);

    int speed, starting_price, km_pirce, minute_price, taxi_2;
    scanf("%d", &speed); scanf("%d", &starting_price); scanf("%d", &km_pirce); scanf("%d", &minute_price);

    taxi_1 = start_price + (kilometars - start_km) * extra_price;
    taxi_2 = starting_price + ((int)kilometars/speed) * km_pirce  + kilometars * minute_price;

    printf("%d %d\n", taxi_1, taxi_2);
    if(taxi_1 <= taxi_2){ printf("1"); }
    else printf("0");

    return 0;
}
