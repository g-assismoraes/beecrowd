#include <stdio.h>
#define ANO 365
#define MES 30

void mostra_idade_fatorada(int t_dias){
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", t_dias/ANO, (t_dias%ANO)/MES, t_dias%ANO%MES);
}

int main(){
    int total_dias = 0;
    scanf("%d", &total_dias);
    mostra_idade_fatorada(total_dias);
    return 0;
}
