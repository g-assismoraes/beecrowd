//o uso de lista encadeada era obrigatorio pelo escopo em questao
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct lista_compras{
    char *item;
    struct lista_compras *prox;
}ListaCompras;

ListaCompras* cria_lista(){
    return NULL;
}

void apaga_lista(ListaCompras* l){
    ListaCompras* p = l;

    while(p != NULL){
        ListaCompras* preserva = p->prox;

        free(p->item);
        free(p);

        p = preserva;
    }
}

void exibe_lista(ListaCompras* l){
    ListaCompras* p = l;

    while(p != NULL){
        //se o proximo eh null, estou para printar o ultimo
        if(p->prox == NULL)
            printf("%s", p->item);
        else
            printf("%s ", p->item);
        p = p->prox;
    }
    printf("\n");
}

ListaCompras* insereOrdenado_lista(ListaCompras* l, char *elemento){
    ListaCompras* anterior = NULL;

    ListaCompras* p = l;
    while(p != NULL && strcmp(p->item, elemento) < 0){
        anterior = p;
        p = p->prox;
    }
    
    // se p eh != null, while foi quebrado pela outra condicao
    if(p != NULL)
        //sigifica que a palavra eh igual, nao insere novamente;
        if(strcmp(p->item, elemento) == 0)
            return l;

    ListaCompras* novo = (ListaCompras*) malloc(sizeof(ListaCompras));
    char* item = (char*) malloc(21 * sizeof(char));
    strcpy(item, elemento);
    novo->item = item;

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
        char lista_repetida[1000*40];
        scanf(" %[^\n]", lista_repetida);
        int qtd_repetidas = qtd_palavras(lista_repetida);
        ListaCompras* lista = cria_lista();

        int x = 0;
        for(int i = 0; i < qtd_repetidas; i++){
            char palavra[20];
            int y = 0;
            
            //forma a palavra a se ser inserida
            while(lista_repetida[x] != 32 && lista_repetida[x] != '\0'){
                palavra[y] = lista_repetida[x];

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
