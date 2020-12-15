#include <stdio.h>

double calcula(int prec){
    if(prec != 0)
        return 1/(2 + calcula(prec - 1));
    return 0;
}

int main(){
    int precisao = 0;
    scanf("%d", &precisao);
    printf("%.10lf\n", 1 + calcula(precisao));
    return 0;
}
