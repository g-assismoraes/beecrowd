//o uso de lista encadeada era obrigatorio pelo escopo em questao
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct conjunto{
    char *elemento;
    struct conjunto *prox;
}Conjunto;

Conjunto* cria_conjunto(){
    return NULL;
}

void apaga_conjunto(Conjunto* c){
    Conjunto* p = c;

    while(p != NULL){
        Conjunto* preserva = p->prox;

        free(p->elemento);
        free(p);

        p = preserva;
    }
}

Conjunto* insere_conjunto(Conjunto* c, char* pal){
    Conjunto* novo = (Conjunto*) malloc(sizeof(Conjunto));
    char* elemento = (char*) malloc(31*sizeof(char));

    strcpy(elemento, pal);

    novo->elemento = elemento;
    novo->prox = c;

    return novo;
}

int ehFuncao_ehInjetora(Conjunto* c, int len){
    //Pelas entradas, ja se sabe que todos os elementos sao relacionados com algum outro;
    //Eh uma funcao, se para a relacao, todo elemento do dominio tiver correspondencia unica;
    //Eh injetora, se para todo elemento do contradominio, o mesmo so for relacionado uma vez;

    //compara cada elemento com somente os posteriores para ver se ha algum repetido;
    for(int i = 0; i < len - 1; i++){
        Conjunto* fixa = c;
        // corrige de qual ponto começar a comparar de cada vez;
        for(int j = 0; j < i; j++){
            fixa = fixa->prox;
        }
        Conjunto* p = fixa->prox;
        while(p != NULL && strcmp(fixa->elemento, p->elemento) != 0){
            p = p->prox;
        }
        //se p != NULL, percorreu a lista sem achar nada repetido;
        if(p != NULL)
            return 0;
    }

    return 1;
}

void mostra_resposta(Conjunto* dominio, Conjunto* contra_dominio, int t){
    if(!(ehFuncao_ehInjetora(dominio, t))) //A subfuncao mostra se a relacao eh funcao se aplicada ao dominio
        printf("Not a function.\n");
    //A subfuncao mostra se a funcao eh injetora se aplicada ao contra dominio ||
    else if(!(ehFuncao_ehInjetora(contra_dominio, t)))
        printf("Not invertible.\n");
    //eh uma funcao bijetora (injetora e sobrejetora); nao eh preciso fazer teste para sobrejetora, pois essa condicao implica que o contradominio seja
    //igual a imagem e pela forma de entrada, sabemos que todo elemento do cd é relacionado, logo o cd constitui a imagem;
    else
        printf("Invertible.\n");
}

int main(){
    int t = 0;
    scanf("%d", &t);

    while(t != 0){
        Conjunto* dominio = cria_conjunto();
        Conjunto* contra_dominio = cria_conjunto();
        for(int i = 0; i < t; i++){
            char entrada[65];
            scanf(" %[^\n]", entrada);

            char elemento[30];
            int y = 0, x = 0;

            //forma a string do primeiro elemento até antes do " -> ";
            while(entrada[x] != 32){
                elemento[y] = entrada[x];

                x++;
                y++;
            }
            elemento[y] = '\0';

            char imagem[30];
            y = 0;
            //pula o " -> ";
            x = x + 4;
            //forma a string do segundo elemento até o fim;
            while(entrada[x] != '\0'){
                imagem[y] = entrada[x];

                x++;
                y++;
            }
            imagem[y] = '\0';

            dominio = insere_conjunto(dominio, elemento);
            contra_dominio = insere_conjunto(contra_dominio, imagem);;
            }

        mostra_resposta(dominio, contra_dominio, t);

        apaga_conjunto(dominio);
        apaga_conjunto(contra_dominio);
        scanf("%d", &t);
    }
    return 0;
}
