#include <stdio.h>
#include <stdlib.h>

int main(){
    int t = 1, n = 0, dedos1 = 0, dedos2 = 0;
    char nome1[100], nome2[100];
    scanf("%d", &n);
    while(n != 0){
        printf("Teste %d\n", t);
        t += 1;
        scanf("%s%s", &nome1, &nome2);
        int i = 0;
        for(i = 0; i < n; i++){
            scanf("%d%d", &dedos1, &dedos2);
            if((dedos1 + dedos2)%2 == 0){
                printf("%s\n", nome1);
            }else{
                printf("%s\n", nome2);
            }
        }
        printf("\n");
        scanf("%d", &n);
    }
    return 0;
}
