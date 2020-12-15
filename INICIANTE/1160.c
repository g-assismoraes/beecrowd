#include <stdio.h>

int tempo_ultrapassagem(int p1, int p2, double t1, double t2){
    int t = 0;
    t1 /= 100;
    t2 /= 100;

    while((p1 <= p2)&&(t <= 101)){
        p1 += p1*t1;
        p2 += p2*t2;
        t++;
    }
return t;
}

void mostra_resposta(int t){
    if(t <= 100)
        printf("%d anos.\n", t);
    else
        puts("Mais de 1 seculo.");
}

int main(){
    int qtd_testes = 0;
    scanf("%d", &qtd_testes);

    int pop1 = 0, pop2 = 0, i = 0;
    double tx1 = 0.0, tx2 = 0.0;
    for(i; i < qtd_testes; i++){
        scanf("%d%d%lf%lf", &pop1, &pop2, &tx1, &tx2);
        mostra_resposta(tempo_ultrapassagem(pop1, pop2, tx1, tx2));
    }
    return 0;
}
