#include <stdio.h>
#include <stdlib.h>

int main()
{
    int val1, val2 = 0;

    scanf("%d%d", &val1, &val2);

    if ((val2 % val1 == 0) || (val1 % val2 == 0)){
        printf("Sao Multiplos\n");
    }else{
        printf("Nao sao Multiplos\n");
    }

    return 0;
}
