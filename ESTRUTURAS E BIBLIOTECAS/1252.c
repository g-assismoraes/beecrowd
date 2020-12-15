#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compara(int x, int y, int mod){
    if(x%mod < y%mod)
        return 1;
    else if(x%mod == y%mod){
        if(abs(x) % 2 != 0 && abs(y) % 2 == 0)
            return 1;
        else if(abs(x) % 2 != 0 && abs(y) % 2 != 0){
            if(x > y)
                return 1;
            else
                return 0;
        }else if(abs(x) % 2 == 0 && abs(y) % 2 == 0){
            if(x < y)
                return 1;
            else
                return 0;
        }
    }

    return 0;
}

void merge(int inicio, int meio, int fim, int *vetor, int mod){
    int tam = fim - inicio + 1;
    int *aux;
    aux = (int *) malloc(tam*sizeof(int));
    int i = inicio, j = meio + 1, k = 0;

    while((i <= meio) && (j <= fim)){
        if(compara(vetor[i], vetor[j], mod)){
            aux[k] = vetor[i];
            i++;
        }
        else{
            aux[k] = vetor[j];
            j++;
        }
        k++;
    }
    while(i <= meio){
        aux[k] = vetor[i];
        i++;
        k++;
    }
    while(j <= fim){
        aux[k] = vetor[j];
        j++;
        k++;
    }

    for(int k = inicio; k <= fim; k++)
        vetor[k] = aux[k-inicio];

    free(aux);
}

void mergesort_mod(int inicio, int fim, int *vet, int mod){
    if(inicio < fim){
        int meio = floor((inicio + fim) / 2);
        mergesort_mod(inicio, meio, vet, mod);
        mergesort_mod(meio+1, fim, vet, mod);
        merge(inicio, meio, fim, vet, mod);
    }
}

void imprime_libera(int *vet, int tam, int mod){
    printf("%d %d\n", tam, mod);
    for(int i = 0; i < tam; i++)
            printf("%d\n", vet[i]);
    free(vet);
}

int main(){
    int tam = -1, mod = -1, *vetor;
    scanf("%d%d", &tam, &mod);
    vetor = (int *) malloc(tam*sizeof(int));
    while(tam != 0 && mod != 0){
        for(int i = 0; i < tam; i++)
            scanf("%d", &vetor[i]);

        mergesort_mod(0, tam - 1, vetor, mod);

        imprime_libera(vetor, tam, mod);

        scanf("%d%d", &tam, &mod);
        vetor = (int *) malloc(tam*sizeof(int));
    }
    printf("0 0\n");
    return 0;
}
