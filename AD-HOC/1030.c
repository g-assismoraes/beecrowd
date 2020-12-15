#include <stdio.h>

int acha_sobrevivente(int vivos, int jmp){
    if (vivos == 1)
        return 1;
    else
        return (jmp - 1 + acha_sobrevivente(vivos - 1, jmp)) % vivos + 1;
}

int main(){
    int qtd_testes = 0;
    scanf("%d", &qtd_testes);
    for(int i = 1; i <= qtd_testes; i++){
        int qtd_vivos = 0, salto = 0;
        scanf("%d%d",&qtd_vivos, &salto);
        printf("Case %d: %d\n", i, acha_sobrevivente(qtd_vivos, salto));
    }
    return 0;
}
