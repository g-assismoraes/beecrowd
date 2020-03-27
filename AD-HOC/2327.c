#include <stdio.h>
#include <stdlib.h>

int main(){
    int tamLinha = 0, i = 0, j = 0;
    scanf("%d", &tamLinha);
    int vetor[tamLinha], matriz[tamLinha][tamLinha];

    //cria o quadrado
    for (j = 0; j < tamLinha; j++){
        for (i = 0; i < tamLinha; i++){
            scanf("%d", &matriz[j][i]);
        }
    }
    //cria o parametro a ser o comparador
    int parametro = 0, k = 0;
    for(k = 0; k < tamLinha; k++){
        parametro += matriz[0][k];
    }
    //comparar parametro com a soma das linhas e colunas
    int okLinha = 1, okColuna = 1, somaLinha = 0, somaColuna = 0, l = 0, m = 0;
    for(l = 0; l < tamLinha; l++){
        somaLinha = 0;
        somaColuna = 0;
        for(m = 0; m < tamLinha; m ++){
            somaLinha += matriz[l][m];
            somaColuna += matriz[m][l];
        }
        if (somaLinha != parametro){
            okLinha = 0;
            break;
        }
        if (somaColuna != parametro){
            okColuna = 0;
            break;
        }
    }
    //comparar parametro com a diagonal esquerda --> direita
    int okDiagonal1 = 1, somaDiagonal1 = 0, n = 0;
    for(n = 0; n < tamLinha; n++){
        somaDiagonal1 += matriz[n][n];
    }
    if(somaDiagonal1 != parametro){
        okDiagonal1 = 0;
    }

    //comparar parametro com a diagonal direita --> esquerda
    int aux = 0, somaDiagonal2 = 0, o = 0, okDiagonal2 = 1;
    for(o = (tamLinha - 1); o > -1; o--){
        somaDiagonal2 += matriz[o][aux];
        aux += 1;
    }
    if(somaDiagonal2 != parametro){
        okDiagonal2 = 0;
    }
    if(okLinha == 1 && okColuna == 1 && okDiagonal1 == 1 && okDiagonal2 == 1){
        printf("%d\n", parametro);
    }else{
        printf("-1\n");
    }

    return 0;
}
