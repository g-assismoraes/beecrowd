#include <stdio.h>

int confere_algarismo(int n, int x){
    int contagem = 0;
    while(n > 0){
        if(n % 10 == x)
            contagem++;
        n /= 10;
    }
    return contagem;
}

int confere_numero(int num){
    int i;
    for(i = 0; i <= 9; i++)
        if(confere_algarismo(num, i) > 1)
            return 0;
    return 1;
}

int qtd_nums_vals(int x, int y){
    int i, qtd = 0;
    for(i = x; i <= y; i++)
        if(confere_numero(i))
            qtd++;
    return qtd;
}

int main(){
    int n = 0, m = 0;
    while(scanf("%d%d", &n, &m)!= EOF){
        printf("%d\n", qtd_nums_vals(n, m));
    }
    return 0;
}
