#include <stdio.h>
#include <math.h>
float calculaDelta(float a, float b, float c);

int main(){
    float a, b, c, delta, raiz_delta, x1, x2;
    scanf("%f %f %f", &a, &b, &c);

    if(calculaDelta(a, b, c) < 0){
        printf("Nao ha raizes reais");
    }else{
        delta = calculaDelta(a, b, c);
        raiz_delta = sqrt(delta);
        x1 = (-b+raiz_delta)/(2*a);
        x2 = (-b-raiz_delta)/(2*a);
        printf("x1: %.2f x2: %.2f", x1, x2);
    }
    return 0;
}

float calculaDelta(float a, float b, float c){
    float delta;
    delta = (b*b)-(4*a*c);
    return delta;
}

