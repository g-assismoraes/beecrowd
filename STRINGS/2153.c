#include <stdio.h>

int len(char *palavra){
    int len = 0;
    for(int i = 0; palavra[i] != '\0'; i++)
        len++;
    return len;
}

void imprime(char *pal, int fim){
    for(int i = 0; i <= fim; i++)
            printf("%c", pal[i]);
        printf("\n");
}

int remove_repeticao(char *pal, int suf_i, int suf_f, int pal_i, int pal_f){
    int flag = 1;

    // comparacao que checa se o sufixo nao eh substring da palavra maior, desconsiderando ele mesmo dentro da palavra
    if(pal[pal_i] != pal[suf_i] || pal[pal_f] != pal[suf_f])
            flag = 0;

    if(flag){
        //retorna o indice final da palavra descontando a substring repetida
        return pal_f;
    }else
        remove_repeticao(pal, suf_i + 1, suf_f, pal_i + 2, pal_f + 1);
}

void processa(char *palavra){
    int tamanhoPAL = len(palavra);
    int stop = 0;

    // acha, dependendo se a palavra tem tamanho par ou impar, os index:
    // posicao inicial para o possivel maior sufixo
    // posicao final para o possivel maior sufixo
    // posicao inicial a ser comparada na palavra
    // posicao final a ser comparada na palavra
    if(tamanhoPAL % 2 != 0){
        int index_sufix_i = tamanhoPAL/2 + 1;
        int index_sufix_f = tamanhoPAL - 1;
        int index_pal_i = index_sufix_i - len(&palavra[index_sufix_i]);
        int index_pal_f = tamanhoPAL/2;
        stop = remove_repeticao(palavra, index_sufix_i, index_sufix_f, index_pal_i, index_pal_f);

    }else{
        int index_sufix_i = tamanhoPAL/2;
        int index_sufix_f = tamanhoPAL - 1;
        int index_pal_i = index_sufix_i - len(&palavra[index_sufix_i]);
        int index_pal_f = tamanhoPAL/2 - 1;
        stop = remove_repeticao(palavra, index_sufix_i, index_sufix_f, index_pal_i, index_pal_f);
    }
    imprime(palavra, stop);
}


int main(){
    char palavra[31];

    while(scanf(" %30[^\n]", palavra) != EOF){
        processa(palavra);
    }
    return 0;
}
