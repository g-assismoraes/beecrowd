#include <stdio.h>
int main(){
    int N;
    while (scanf("%d", &N) != EOF) {
        int i, lista[10000], sum = 0;
        for (i = 0; i < N; ++i) {
            scanf("%d", &lista[i]);
            sum += lista[i];
        }
        if (sum % N){
            puts("-1");
        }else{
            int media = sum / N;
            int minimo = 0;
            for (i = 0; i < N; ++i)
            if (lista[i] > media)
            minimo += lista[i] - media;
            printf("%d\n", minimo + 1);
        }
    }
    return 0;
}
