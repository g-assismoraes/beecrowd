#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int qtdDiscos = 0, t = 1, resposta = 0;
    scanf("%d", &qtdDiscos);
    while(qtdDiscos != 0){
     printf("Teste %d\n", t);
     resposta = pow(2.0, (qtdDiscos));
     printf("%d\n\n", (resposta - 1));
     t += 1;
     scanf("%d", &qtdDiscos);
    }
    return 0;
}
