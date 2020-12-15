#include <stdio.h>

long long int n_fib(int x){
    long long int a = 1, b = 1, aux = 0;
    int i = 0;
    for(i = 3; i <= x; i++){
        aux = b;
        b+= a;
        a = aux;
    }
    return b;
}

int digito_tres(long long int num){
    while(num > 0){
        if(num % 10 == 3)
            return 1;
        num /= 10;
    }
    return 0;
}

long long int n_threeb(int n){
    int pos_enesimaf = 4, pos_enesimat = 0;
    long long int resposta = 0;
        while(pos_enesimat != n){
           resposta = n_fib(pos_enesimaf);
            if((resposta % 3 == 0) || (digito_tres(resposta)))
                pos_enesimat++;
            pos_enesimaf++;
        }

    return resposta;
}

int main(){
    int n = 0;
    while(scanf("%d", &n) != EOF)
        printf("%llu\n", n_threeb(n));
    return 0;
}
