#include <stdio.h>
#include <stdlib.h>

int main()
{
    double tempo, velocidade, distancia, consumo = 0.0;
    scanf("%lf%lf", &tempo, &velocidade);

    distancia = tempo * velocidade;
    consumo = distancia / 12;

    printf("%.3lf\n", consumo);

    return 0;
}
