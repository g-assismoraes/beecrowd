#include <stdio.h>
#include <stdlib.h>

int main(){
    int k = 0, qtdJogadores = 0, qtdRodadas = 0, vencedor = 0;
    scanf("%d%d", &qtdJogadores, &qtdRodadas);
    int pontosDeVitoria[qtdJogadores * qtdRodadas], somas[qtdJogadores];

    for(k = 0; k < qtdJogadores; k++){
        somas[k] = 0;
    }

    for(k = 0; k < qtdJogadores*qtdRodadas; k++){
        scanf("%d", &pontosDeVitoria[k]);
    }

    int i = 0, j = 0, x = 0, maxPontos = -1*qtdRodadas*500;
    for(i = 0; i < qtdJogadores; i++){
        for(j = 0; j < qtdRodadas; j++){
            somas[i] += pontosDeVitoria[x];
            x += qtdJogadores;
        }
        if(somas[i] >= maxPontos){
            vencedor = i + 1;
            maxPontos = somas[i];
        }
        x = 0 + i + 1;
    }

    printf("%d\n", vencedor);
    return 0;
}
