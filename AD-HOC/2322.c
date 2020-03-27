#include <stdio.h>
#include <stdlib.h>

int main(){
    int qtdPecas = 0, i = 0, j = 0, k = 0, l = 0, x= 0, y = 0, ord = 0, aux = 0, resposta = 0;

    scanf("%d", &qtdPecas);

    int vetorPecas[qtdPecas - 1];
    int vetorAux[qtdPecas];

    for (i = 0; i < qtdPecas - 1; i++){
        scanf("%d", &aux);
        vetorPecas[i] = aux;
    }

    for (x = 0; x < qtdPecas - 1; x++){
        for (y = x; y < qtdPecas - 1; y++){
            if (vetorPecas[x] > vetorPecas[y]){
                ord = vetorPecas[x];
                vetorPecas[x] = vetorPecas[y];
                vetorPecas[y] = ord;
            }
        }
    }


    for (j = 1; j <= qtdPecas; j++){
        vetorAux[j - 1] = j;
    }

    for (k = 0; k < qtdPecas; k++){
        if (vetorPecas[k] != vetorAux[k]){
            resposta = vetorAux[k];
            break;
        }
    }

    printf("%d\n", resposta);

    return 0;
}
