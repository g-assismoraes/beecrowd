#include <stdio.h>
#include <stdlib.h>

int main(){
    int andar1, andar2, andar3, tempos[3];
    scanf("%d%d%d", &andar1, &andar2, &andar3);

    tempos[0] = 2*andar2 + 4*andar1;
    tempos[1] = 2*andar1 + 2*andar3;
    tempos[2] = 4*andar3 + 2*andar2;

    int x = 0, y, ord, tamVetor = 3;
    for (x = 0; x < tamVetor; x++){
        for (y = x; y < tamVetor; y++){
            if (tempos[x] > tempos[y]){
                ord = tempos[x];
                tempos[x] = tempos[y];
                tempos[y] = ord;
            }
        }
    }
    printf("%d\n", tempos[0]);
    return 0;
}
