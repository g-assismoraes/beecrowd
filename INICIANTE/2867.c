#include <stdio.h>
#include <math.h>

double qtd_algarismos(int b, int e){
    // Matematicamente, pode-se obter uma estimativa da qtd de digitos com auxilio de log10.
    double qtd = 0;
    qtd = e * log10(b) + 1;
    return qtd;
}

int main(){
    int qtd_testes = 0, base = 0, expoente = 0, resposta = 0, i;
    scanf("%d", &qtd_testes);
    for(i = 0; i < qtd_testes; i++){
        scanf("%d%d", &base, &expoente);
        resposta = qtd_algarismos(base, expoente);
        printf("%d\n", resposta);
    }
    return 0;
}
