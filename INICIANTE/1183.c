#include <stdio.h>
#include <stdlib.h>

void ler_matriz(int len, float mat[len][len]){
    for(int lin = 0; lin < len; lin++)
        for(int col = 0; col < len; col++)
            scanf("%f", &mat[lin][col]);
}

float soma_superior(int len, float mat[len][len]){
    float soma = 0.0;
    for(int lin = 0; lin < len; lin++)
        for(int col = 0; col < len; col++)
            if(col > lin)
                soma += mat[lin][col];
    return soma;
}

void mostra_resposta(char op, float som){
    if (op == 'S')
        printf("%.1f\n", som);
    else if( op == 'M')
        printf("%.1f\n", som/66);
}

int main(){
    float matriz[12][12];
    char operacao;
    scanf("%c", &operacao);

    ler_matriz(12, matriz);
    mostra_resposta(operacao, soma_superior(12, matriz));

    return 0;
}
