#include <stdio.h>
#include <stdlib.h>

int main(){
    int t = 1, aldo = 0, beto = 0, qtdRodadas = 0, i = 0, cWhile = 0, tAldo = 0, tBeto = 0;
    scanf("%d", &qtdRodadas);
    cWhile = qtdRodadas;
    while (cWhile != 0){
        printf("Teste %d\n", t);
        t += 1;
        i = 0;
        for (i; i < qtdRodadas; ++i){
            scanf("%i%i", &aldo, &beto);
            tAldo += aldo;
            tBeto += beto;
        }
        if (tAldo > tBeto){
            printf("Aldo\n\n");
        }else{
            printf("Beto\n\n");
        }
        scanf("%d", &qtdRodadas);
        cWhile = qtdRodadas;
        tAldo = 0;
        tBeto = 0;
    }
    return 0;
}
