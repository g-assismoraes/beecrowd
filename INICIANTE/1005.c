#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a, b, media = 0.0;
    scanf("%lf%lf", &a, &b);

    media = (3.5*a + 7.5*b)/11;

    printf("MEDIA = %.5lf\n", media);

    return 0;
}
