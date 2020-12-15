//o uso de lista encadeada foi solicitado pelo escopo em questao
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct dict{
    char *latino;
    char *morse;
    struct dict *prox;
}DicionarioMorse;

DicionarioMorse* cria_dicionario(){
    return NULL;
}

void apaga_dicionario(DicionarioMorse* d){
    DicionarioMorse* p = d;

    while(p != NULL){
        DicionarioMorse* preserva = p->prox;

        free(p->latino);
        free(p->morse);
        free(p);

        p = preserva;
    }
}

DicionarioMorse* insere_dicionario(DicionarioMorse* d, char *lat, char *mor){
    DicionarioMorse* novo = (DicionarioMorse*) malloc(sizeof(DicionarioMorse));

    char* l = (char*) malloc(2*sizeof(char));
    char* m = (char*) malloc(15*sizeof(char));
    strcpy(l, lat);
    strcpy(m, mor);

    novo->latino = l;
    novo->morse = m;
    novo->prox = d;

    return novo;
}

DicionarioMorse* inicializa_dicionario(DicionarioMorse* d){
    char letras_latinas[26] = "abcdefghijklmnopqrstuvwxyz";
    char codigo_morse[300] = "=.=== ===.=.=.= ===.=.===.= ===.=.= = =.=.===.= ===.===.= =.=.=.= =.= =.===.===.=== ===.=.=== =.===.=.= ===.=== ===.= ===.===.=== =.===.===.= ===.===.=.=== =.===.= =.=.= === =.=.=== =.=.=.=== =.===.=== ===.=.=.=== ===.=.===.=== ===.===.=.=";

    int x = 0;
    for(int i = 0; i < 26; i++){
        char letra[2];
        char codigo[15];
        int y = 0;

        while(codigo_morse[x] != 32 && codigo_morse[x] != '\0'){
            codigo[y] = codigo_morse[x];

            x++;
            y++;
        }

        letra[0] = letras_latinas[i];
        letra[1] = '\0';

        codigo[y] = '\0';
        d = insere_dicionario(d, letra, codigo);
        
        x++;
    }
    
    return d;
}

void imprime(DicionarioMorse * d, char *mor){
    DicionarioMorse* p = d;

    while(p != NULL && strcmp(p->morse, mor) != 0){
        p = p->prox;
    }

    printf("%s", p->latino);
}

int conta_pontos(char *inicio){
    int cont = 0;
    while(inicio[cont] == 46){
        cont++;
    }
    return cont;
}

int len(char *string){
    int cont = 0;
    while(string[cont] != '\0'){
        cont++;
    }
    return cont;
}

int main(){
    int qtd_casos = 0;
    scanf("%d", &qtd_casos);

    DicionarioMorse* dicionario = cria_dicionario();
    dicionario = inicializa_dicionario(dicionario);

    for(; qtd_casos != 0; qtd_casos--){
        char linha[1000];
        scanf(" %[^\n]", linha);
        int tamanho = len(linha);

        int x = 0, y = 0;
        while(x < tamanho){
            char letra[15];
            int flag = 0, pontos_seguidos = 0;

            if(linha[x] == 46)
                pontos_seguidos = conta_pontos(&linha[x]);

            //forma o codigo a ser decodificado, com o "\0" a ser enserido depois;
            letra[y] = linha[x];
            
            //terminou a letra ou a frase toda vai acabar na proxima vez;
            if(pontos_seguidos == 3 || linha[x + 1] == '\0'){
                //tem o cod de uma letra e tem mais a ser lido;
                if(pontos_seguidos == 3){
                    if(letra[y] == 46)
                        letra[y] = '\0';
                    //pula a separacao de letras
                    x = x + 3;
                    flag = 1;
                    y = 0;
                //leu a entrada toda
                }else if(linha[x + 1] == '\0'){
                    letra[y + 1] = '\0';
                    // quebra o while ja que aqui pensamos em uma posicao a frente;
                    x = tamanho + 1;
                    flag = 1;
                }
                //decodifica a letra
                imprime(dicionario, letra);
            
            //tem mais de uma palavra
            }else if(pontos_seguidos == 7){
                if(letra[y] == 46)
                    letra[y] = '\0';
                //decodifica a ultima letra da palavra
                imprime(dicionario, letra);
                //espaço para separar as palavras
                printf(" ");
                //pula a separacao de palavras
                x = x + 7;
                y = 0;
                flag = 1;
            }
            
            //nao chegou em nenhuma condicao que mostra que tenho um codigo em maos pra decodifiar, continua formando o codigo;
            if(!(flag)){
                x++;
                y++;
            }
        }
        //condicao do uri
        printf("\n");
    }
    apaga_dicionario(dicionario);

    return 0;
}
