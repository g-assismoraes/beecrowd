#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);

    if(abs(b - c) < a && a < b + c || abs(b - d) < a && a < b + d || abs(c - d) < a && a < c + d){
        printf("S\n");
    }else{
        if(abs(a - c) < b && b < a + c || abs(a - d) < b && b < a + d || abs(c - d) < b && b < c + d){
            printf("S\n");
        }else{
            if(abs(a - b) < c && c < a + b || abs(a - d) < c && c < a + d || abs(b - d) < c && c < b + d){
            printf("S\n");
            }else{
                if(abs(a - b) < d && d < a + b || abs(a - c) < d && d < a + c || abs(b - c) < d && d < b + c){
                printf("S\n");
                }else{
                    printf("N\n");
                }
            }
        }
    }
    return 0;
}
