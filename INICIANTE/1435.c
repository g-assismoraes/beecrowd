#include <stdio.h>
#include <stdlib.h>

void cria_matriz(int len, int mat[len][len], int aux, int index_i, int index_f){
    for(int lin = index_i; lin < index_f; lin++)
        for(int col = index_i; col < index_f; col++){
            if(lin == index_i || col == index_i)
                mat[lin][col] = aux;
            else if((lin == (index_f - 1)) || (col == (index_f - 1)))
                mat[lin][col] = aux;
            else if((col == index_i))
                mat[lin][col] = aux;
    }
    if(index_f > -1){
        index_i += 1;
        index_f -= 1;
        aux += 1;
        cria_matriz(len, mat, aux, index_i, index_f);
    }
}

void resposta_formatada(int len, int mat[len][len]){
    for(int lin = 0; lin < len; lin++){
        for(int col = 0; col < len; col++){
            // caso 1x1 para lidar com a questao de pula linha
            if(len == 1)
                printf("%3d\n", mat[lin][col]);
            else if(col == 0)
                printf("%3d", mat[lin][col]);
            else if (col == len - 1)
                    printf(" %3d\n", mat[lin][col]);
            else
                printf(" %3d", mat[lin][col]);
        }
    }
    printf("\n");
}

int main(){
    int dimensao = -1;
    scanf("%d", &dimensao);

    while(dimensao != 0){
        int matriz[dimensao][dimensao];
        cria_matriz(dimensao, matriz, 1, 0, dimensao);
        resposta_formatada(dimensao, matriz);
        scanf("%d", &dimensao);
    }
    return 0;
}
