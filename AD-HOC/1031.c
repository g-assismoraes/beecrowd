#include <stdio.h>

int ultimo_desligado(int regioes , int jmp){
    if (regioes == 1)
        return 1;
    else
        return (jmp - 1 + ultimo_desligado(regioes - 1, jmp)) % regioes + 1;
}

int main(){
    int qtd_regioes = -1;
    scanf("%d", &qtd_regioes);
    while(qtd_regioes != 0){
        int salto = 1;
        while(ultimo_desligado(qtd_regioes - 1, salto) != 12){
            salto++;
        }
        printf("%d\n", salto);
        scanf("%d", &qtd_regioes);
    }
    return 0;
}
