#include <stdio.h>
#include <stdlib.h>

int main(){
    char nome = "0";
    double salario, venda, total = 0.0;

    scanf("%s", &nome);
    scanf("%lf%lf", &salario, &venda);

    total = salario + (0.15*venda);

    printf("TOTAL = R$ %.2lf\n", total);

    return 0;
}
