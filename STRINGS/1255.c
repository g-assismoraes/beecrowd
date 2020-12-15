#include <stdio.h>
#define TAM 201

void converte_minusculo(char *frase){
    int i = 0;
    while(frase[i] != '\0'){
        if(frase[i] >= 'A' && frase[i] <= 'Z')
            frase[i] = (frase[i] - 'A') + 'a';
        i++;
    }
}

// alem de calcular a frequencia de cada letra, retorna a frequencia max
int frequencia_saveMAX(char *frase, int *frequencias){
    int f_max = 0;
    char letra = 'a';

    // para cada letra do alfabeto minusculo, faça
    for(int i = 0; i < 26; i++){
        int j = 0, f = 0;
        // percorre toda a string
        while(frase[j] != '\0'){
            // se eh alguem pertinente ao problema, faça
            if(frase[j] >= 'a' && frase[j] <= 'z')
                if(frase[j] == letra){
                    f++;
                    // impede conta duplicada
                    frase[j] = '-';
                }
            j++;
        }
        letra++;
        frequencias[i] = f;
        // guarda frequencia max
        if(f > f_max){
            f_max = f;
        }
    }

    return f_max;
}

void imprime_resposta(int *f_letras, int f_max){
    for(int i = 0; i < 26; i++){
        if(f_letras[i] == f_max){
            printf("%c", (i + 'a'));
        }
    }
    printf("\n");
}

void processa(char *frase, int *frequencias){
    int f_max = 0;
    converte_minusculo(frase);
    f_max = frequencia_saveMAX(frase, frequencias);
    imprime_resposta(frequencias, f_max);
}


int main(){
    int qtd_casos = 0;
    //computa a frequencia de cada letra do alfabeto
    int frequencias[26] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    scanf("%d", &qtd_casos);
    for(int i = 0; i < qtd_casos; i++){
        char frase[TAM];
        scanf(" %200[^\n]", frase);
        processa(frase, frequencias);

    }

    return 0;
}
