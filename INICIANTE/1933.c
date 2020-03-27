#include <stdio.h>
#include <stdlib.h>

int main(){
    int carta1, carta2 = 0;
    scanf("%d%d", &carta1, &carta2);

    if (carta1 == carta2){
        printf("%d\n", carta1);
    }else{
        if (carta1 < carta2){
          carta1 = carta2;
        }
        printf("%d\n", carta1);
    }

    return 0;
}
