// o uso de lista encadeada era obrigatorio para o escopo em questao
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct lista_strings{
    char *str;
    struct lista_strings *prox;
}ListaStrings;

ListaStrings* cria_lista(){
    return NULL;
}

void apaga_lista(ListaStrings* l){
    ListaStrings* p = l;

    while(p != NULL){
        ListaStrings* preserva = p->prox;

        free(p->str);
        free(p);

        p = preserva;
    }
}

void exibe_lista(ListaStrings* l){
    ListaStrings* p = l;

    while(p != NULL){
        //se o proximo eh null, hora de printar a ultima palavra
        if(p->prox == NULL)
            printf("%s", p->str);
        else
            printf("%s ", p->str);
        p = p->prox;
    }
    printf("\n");
}

ListaStrings* insereOrdenado_lista(ListaStrings* l, char *elemento){
    ListaStrings* anterior = NULL;

    ListaStrings* p = l;
    while(p != NULL && strlen(p->str) >= strlen(elemento)){
        anterior = p;
        p = p->prox;
    }

    ListaStrings* novo = (ListaStrings*) malloc(sizeof(ListaStrings));
    char* str = (char*) malloc(51 * sizeof(char));
    strcpy(str, elemento);
    novo->str = str;

    if(anterior == NULL){
        novo->prox = l;
        l = novo;
    }else{
        novo->prox = anterior->prox;
        anterior->prox = novo;
    }

    return l;
}


int qtd_palavras(char *lista){
    int cont = 1; //primeira palavra nao tem espaço
    int index = 0;

    while(lista[index] != '\0'){
        if(lista[index] == 32)
            cont++;
        index++;
    }
    return cont;
}

int main(){
    int execucoes = 0;

    scanf("%d", &execucoes);
    for(; execucoes != 0; execucoes--){
        char desordenadas[50*51];
        scanf(" %[^\n]", desordenadas);
        int qtd_pals = qtd_palavras(desordenadas);
        ListaStrings* lista = cria_lista();

        int x = 0;
        for(int i = 0; i < qtd_pals; i++){
            char palavra[51];
            int y = 0;

            //forma uma palavra a ser mandada para ser inserida a partir da entrada
            while(desordenadas[x] != 32 && desordenadas[x] != '\0'){
                palavra[y] = desordenadas[x];

                x++;
                y++;
            }
            palavra[y] = '\0';

            lista = insereOrdenado_lista(lista, palavra);

            x++;
        }

        exibe_lista(lista);
        apaga_lista(lista);

    }

    return 0;
}
