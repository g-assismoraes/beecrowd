#include <stdio.h>
#include <stdlib.h>

int main(){
    float numero, qtdHoras, salHoras, salario = 0.0;
    scanf("%f%f%f", &numero, &qtdHoras, &salHoras);
    salario = qtdHoras * salHoras;
    printf("NUMBER = %.0f\nSALARY = U$ %.2f\n", numero, salario);

    return 0;
}
