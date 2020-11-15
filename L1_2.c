#include <stdio.h>
#include <stdlib.h>

int main(){

    float l1, l2, perimetro;

    scanf ("%f", &l1);
    scanf ("%f", &l2);

    perimetro = (l1*2) + (l2*2);

    printf("%.2f", perimetro);



    return 0;
}