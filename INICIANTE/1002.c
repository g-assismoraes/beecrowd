#include <stdio.h>
#include <stdlib.h>

int main(){
    double pi = 3.14159;
    double area, raio = 0.0;

    scanf("%lf", &raio);

    area = raio * raio * pi;

    printf("A=%.4lf\n", area);

    return 0;
}
