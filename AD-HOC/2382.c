#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int l, a, p, r;
    scanf("%d%d%d%d", &l, &a, &p, &r);

    if(l == a == p){
        if(pow(l*3, 0.5) <= r*2){
            printf("S\n");
        }else{
            printf("N\n");
        }
    }else{
        if(pow(l*l + a*a + p*p, 0.5) <= r*2){
            printf("S\n");
        }else{
            printf("N\n");
        }
    }
    return 0;
}
