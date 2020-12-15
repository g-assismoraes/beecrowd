#include <stdio.h>

void converte_minusculo(char *frase){
    int i = 0;
    while(frase[i] != '\0'){
        if(frase[i] >= 'A' && frase[i] <= 'Z')
            frase[i] = (frase[i] - 'A') + 'a';
        i++;
    }
}

int processa(char *frase, char *parametro, char *caracteres){
    converte_minusculo(frase);

    int i = 0, j = 0;
    while(frase[i] != '\0'){
        // sao 2 if e nao else if para que nos casos de caracter unico, considere o mesmo, tanto inicial, quanto final
        // pega o caracter inicial
        if(frase[i] != 45 && (!i || frase[i-1] == 45))
                caracteres[j] = frase[i];
        // pega o caracter final
        if(frase[i] != 45 && (frase[i+1] == 45 || frase[i+1] == '\0'))
                caracteres[j+1] = frase[i];

        ++i;
        // se o proximo a ser testado eh hifen, a palavra da vez acabou e precisa-se armazenar as possibilidades de proxima letra de cobol
        if(frase[i] == 45)
            j += 2;
    }

    int aux = 0;
    for(int k = 0; k < 5; k++){
        // se nem a posicao inicial, nem a final da palavra correspondem a equivalente para o momento em cobol, retorna falso
        if(caracteres[aux] != parametro[k] && caracteres[aux+1] != parametro[k])
            return 0;
        aux += 2;
    }

    return 1;
}

void imprime(int flag){
    if(flag)
        printf("GRACE HOPPER\n");
    else
        printf("BUG\n");
}

int main(){
    char parametro[6] = "cobol";
    //vetor para armazenar as letras iniciais e finais de cada palavra
    char caracteres[10];

    char frase[51];
    while(scanf(" %50[^\n]", frase) != EOF){
        imprime(processa(frase, parametro, caracteres));
    }
    return 0;
}
