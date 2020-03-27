#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double t = 1, aplicacoes = 0, produzidos = 0;
    scanf("%lf", &aplicacoes);

    while(aplicacoes != -1){
        printf("Teste %.0lf\n", t);
        t += 1;
        produzidos = (1 + pow(2, aplicacoes)) * (1 + pow(2, aplicacoes));
        printf("%.0lf\n\n", produzidos);
        scanf("%lf", &aplicacoes);
    }
    return 0;
}
