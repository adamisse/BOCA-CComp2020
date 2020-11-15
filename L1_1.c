#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    float n1, n2, soma;

    scanf("%f", &n1);
    scanf("%f", &n2);

    n1 = sqrt(n1);
    n2 = sqrt(n2);

    soma = n1 + n2;

    printf("%.2f", soma);

    return 0;
}