#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int calcula_tamanho(int lin, int col, int len, long long int mat[len][len]){
    long long int num = mat[lin][col];
    if(num == 0)
        return 1;
    int tam = 0;
    tam = 2*log10(num) + 1;
    return tam;
}

void ler_matriz(int len, long long int mat[len][len]){
    for(int lin = 0; lin < len; lin++)
        for(int col = 0; col < len; col++)
            scanf("%llu", &mat[lin][col]);
}

void resposta_formatada(int len, long long int mat[len][len], int t, int stop){
    printf("Quadrado da matriz #%d:\n", t);
    for(int lin = 0; lin < len; lin++){
        for(int col = 0; col < len; col++){
            int tamanho = 0;
            for(int aux = 0; aux < len; aux++)
                if(calcula_tamanho(aux, col, len, mat) > tamanho)
                    tamanho = calcula_tamanho(aux, col, len, mat);

            if(col != len && col != 0)
                printf(" ");

            printf("%*llu", tamanho, (mat[lin][col]*mat[lin][col]));
        }
        printf("\n");
    }
    if(stop != 0)
        printf("\n");
}

int main(){
    int qtd_matrizes = 0, teste = 4;
    scanf("%d", &qtd_matrizes);
    int qtd = qtd_matrizes;
    for(int i = 0; i < qtd_matrizes; i++){
        int dimensao = 0;
        scanf("%d", &dimensao);
        long long int matriz[dimensao][dimensao];

        ler_matriz(dimensao, matriz);
        resposta_formatada(dimensao, matriz, teste++, --qtd);
    }
    return 0;
}
