#include <stdio.h>
#include <stdlib.h>

int main(){
    int somaLinha = 0, somaColuna = 0, l = 0, c = 0, i = 0, j = 0;
    scanf("%d%d", &l, &c);
    int matriz[l][c];

    for (j = 0; j < l; j++){
        for (i = 0; i < c; i++){
            scanf("%d", &matriz[j][i]);
        }
    }

    int somaL = 0, k = 0, m = 0;
    for(k = 0; k < l; k++){
        somaL = 0;
        for(m = 0; m < c; m++){
            somaL += matriz[k][m];
            if(somaL > somaLinha){
                somaLinha = somaL;
            }
        }
    }

    int somaC = 0, n = 0, o = 0;
    for(n = 0; n < c; n++){
        somaC = 0;
        for(o = 0; o < l; o++){
            somaC += matriz[o][n];
            if(somaC > somaColuna){
                somaColuna = somaC;
            }
        }
    }

    if(somaColuna > somaLinha){
        printf("%d\n", somaColuna);
    }else{
        printf("%d\n", somaLinha);
    }

    return 0;
}
