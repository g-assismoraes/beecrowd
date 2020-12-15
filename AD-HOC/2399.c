#include <stdio.h>
#include <stdlib.h>

void ler_vetor(int len, int vet[len]){
    for(int i = 0; i < len; i++)
        scanf("%d", &vet[i]);
}

void imprime_resposta(int len, int vet[len]){
    for(int i = 0; i < len; i++){

        if(len == 1)
            printf("%d\n", vet[i]);
        else if(i == 0)
            printf("%d\n", (vet[i] + vet[i + 1]));
        else if(i == len - 1)
            printf("%d\n", (vet[i] + vet[i - 1]));
        else
            printf("%d\n",(vet[i] + vet[i + 1] + vet[i - 1]));
    }
}

int main(){
    int qtd_celulas = 0;
    scanf("%d", &qtd_celulas);
    int vetor[qtd_celulas];

    ler_vetor(qtd_celulas, vetor);
    imprime_resposta(qtd_celulas, vetor);
    return 0;
}
