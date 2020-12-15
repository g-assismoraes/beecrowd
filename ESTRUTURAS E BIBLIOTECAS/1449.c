// o uso de lista encadeada era obrigatorio para o escopo em questao
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct dict{
    char *pt;
    char *jp;
    struct dict *prox;
}Dicionario;

Dicionario* cria_dicionario(){
    return NULL;
}

void apaga_dicionario(Dicionario* d){
    Dicionario* p = d;

    while(p != NULL){
        Dicionario* preserva = p->prox;

        free(p->jp);
        free(p->pt);
        free(p);

        p = preserva;
    }
}

Dicionario* insere_dicionario(Dicionario* d, char *jap, char *port){
    Dicionario* novo = (Dicionario*) malloc(sizeof(Dicionario));

    char* jp = (char*) malloc(161*sizeof(char));
    char* pt = (char*) malloc(161*sizeof(char));
    strcpy(jp, jap);
    strcpy(pt, port);


    novo->jp = jp;
    novo->pt = pt;
    novo->prox = d;

    return novo;
}

char *procura_dicionario(Dicionario* dict, char *palavra){
    Dicionario* p = dict;

    while(p != NULL && strcmp(p->jp, palavra) != 0){
        p = p->prox;
    }
    
    //parou porque achou uma correspondente, manda a traducao
    if(p != NULL)
        return p->pt;
    //era uma palavra sem traducao registrada
    else
        return NULL;

}

void traduz(Dicionario* dict, char *palavra, int flag){
    char *auxiliar = procura_dicionario(dict, palavra);
    
    //se nao eh o final da frase, printa com espaço aguardando a proxima palavra
    if(flag == 0){
        //achou no dicionario;
        if(auxiliar != NULL)
            printf("%s ", auxiliar);
        else
        //nao achou, era uma palavra sem traducao
            printf("%s ", palavra);
    //condicoes analogas as anteriores
    }else{
        if(auxiliar != NULL)
            printf("%s", auxiliar);
        else
            printf("%s", palavra);
    }

}

int conta_palavras(char *lista){
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
    int instancias = 0;
    scanf("%d", &instancias);

    for(; instancias != 0; instancias--){
        int qtd_palavras = 0, qtd_versos = 0;
        scanf("%d%d", &qtd_palavras, &qtd_versos);
        Dicionario* dicionario = cria_dicionario();

        for(; qtd_palavras != 0; qtd_palavras--){
            char japones[160], portugues[160];
            scanf(" %[^\n] %[^\n]", japones, portugues);

            dicionario = insere_dicionario(dicionario, japones, portugues);
        }

        for(; qtd_versos != 0; qtd_versos--){
            char verso[160];
            scanf(" %[^\n]", verso);

            int tamanho_versoEmPalavras = conta_palavras(verso);

            int x = 0;
            for(int i = 0; i < tamanho_versoEmPalavras; i++){
                char palavra[160];
                int y = 0;
                
                //forma palavra a ser traduzida
                while(verso[x] != 32 && verso[x] != '\0'){
                    palavra[y] = verso[x];

                    x++;
                    y++;
                }
                palavra[y] = '\0';

                int flag = 0;
                //eh a palavra final do verso
                if(verso[x] == '\0')
                    flag = 1;

                traduz(dicionario, palavra, flag);

                x++;
            }
            //pula a linha depois de mostrar o verso
            printf("\n");
        }
        //pula linha final do URI
        printf("\n");
        apaga_dicionario(dicionario);
    }
    return 0;
}
