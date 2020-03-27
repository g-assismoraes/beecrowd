#include <stdio.h>
#include <stdlib.h>

int main(){
    float a,b,c,tri, cir, quad, trap, ret;
    
    scanf("%f %f %f",&a,&b,&c);
    
    tri    = (a*c)/2;
    cir    = 3.14159*(c*c);
    trap   = ((a+b)*c)/2;
    quad   = b*b;
    ret    = a*b;
    
    printf("TRIANGULO: %.3f\n",tri);
    printf("CIRCULO: %.3f\n",cir);
    printf("TRAPEZIO: %.3f\n",trap);
    printf("QUADRADO: %.3f\n",quad);
    printf("RETANGULO: %.3f\n",ret);
    
    return 0;
}
