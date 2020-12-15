#include <stdio.h>

void resposta_decodificada(char *frase){
    int i = 0, j = 0;
    char resposta[26];
    while(frase[i] != '\0'){
        // 32 eh o ascii para espaco;
        // um caractere ser o primeiro de uma palavra ocorre quando ha um espaço anterior a ele* e o mesmo nao o eh
        // * a excecao ocorre com o primeiro caractere, tratado por !i
        if(frase[i] != 32 && (!i || frase[i-1] == 32)){
            resposta[j] = frase[i];
            j++;
        }
        i++;
    }
    resposta[j] = '\0';
    printf("%s\n", resposta);
}

int main(){
    int qtd_testes = 0;
    scanf("%d", &qtd_testes);

    for(int i = 0; i < qtd_testes; i++){
        char frase[51];
        scanf(" %50[^\n]", frase);
        resposta_decodificada(frase);
    }
    return 0;
}
