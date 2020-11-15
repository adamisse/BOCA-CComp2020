#include <stdio.h>
#include <stdlib.h>

int main(){

    float x1, y1, x2, y2, perimetro;

    scanf ("%f", &x1);
    scanf ("%f", &y1);
    scanf ("%f", &x2);
    scanf ("%f", &y2);
//lados

    perimetro = ((x2 - x1) + (y2 - y1))*2;

    printf("%.2f", perimetro);


    return 0;
}