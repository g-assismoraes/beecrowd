#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double p1, p2, p3, p4, resposta = 0.0;

    scanf("%lf%lf%lf%lf", &p1, &p2, &p3, &p4);

    resposta = sqrt(((p3 - p1) * (p3 - p1)) + ((p4 - p2) * (p4 - p2)));

    printf("%.4lf\n", resposta);

    return 0;
}
