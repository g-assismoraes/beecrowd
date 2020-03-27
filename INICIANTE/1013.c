#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, c, maior = 0;
    scanf("%d%d%d", &a, &b, &c);
    if (a < b){
        maior = b;
    }else{
        maior = a;
    }if (c > maior){
        maior = c;
    }

    printf("%d eh o maior\n", maior);

    return 0;
}
