#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float pi, k, soma;
    int n;

    scanf("%d", &n);

    for(k=1; k<=n; k++){
        soma = soma + (6/(k*k));
    }
        printf("%f", sqrtf(soma));
    return 0;
}