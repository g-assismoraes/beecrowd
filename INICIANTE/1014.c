#include <stdio.h>
#include <stdlib.h>

int main(){

    double distancia, gastoCombust, consumo = 0.0;

    scanf("%lf%lf", &distancia, &gastoCombust);

    consumo = distancia/gastoCombust;

    printf("%.3lf km/l\n", consumo);


    return 0;
}
