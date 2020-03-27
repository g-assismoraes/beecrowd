#include <stdio.h>
#include <stdlib.h>

int main()
{
    double cod1, qtd1, price1, cod2, qtd2, price2, total = 0.0;

    scanf("%lf%lf%lf%lf%lf%lf%lf%lf%lf", &cod1, &qtd1, &price1, &cod2, &qtd2, &price2);

    total = qtd1 * price1 + qtd2 * price2;

    printf("VALOR A PAGAR: R$ %.2lf\n", total);

    return 0;
}
