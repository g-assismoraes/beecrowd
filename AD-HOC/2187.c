#include <stdio.h>
#include <stdlib.h>

int main(){
    int entrada = 0, t = 0, cinq = 0, dez = 0, cinc = 0, um = 0;
    scanf("%d", &entrada);
    while(entrada != 0){
       cinq = (int)entrada / 50;
       dez = (int)entrada % 50 / 10;
       cinc = (int)entrada % 50 % 10 / 5;
       um = (int)entrada % 50 % 10 % 5;

       t += 1;
       printf("Teste %d\n", t);
       printf("%d %d %d %d\n\n", cinq, dez, cinc, um);
       scanf("%d", &entrada);
    }

    return 0;
}
