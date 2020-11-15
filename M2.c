#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){

    float r;
    scanf("%f", &r);

    int inteiro;
    inteiro = r;

    printf("INTEIRO:%i,", inteiro);
    printf("REAL:%.2f", r-inteiro);

    return 0;
}