#include <stdio.h>
#include <math.h>
float areaCirculo(float raio);
float volumeCaixa(float area, float altura);

int main(){
    float qtd_casas, qtd_caixas, qtd_dias, raio, altura, volume, area, total;
    scanf("%f %f %f %f %f", &qtd_casas, &raio, &altura, &qtd_caixas, &qtd_dias);
    area = areaCirculo(raio);
    volume = volumeCaixa(area, altura);
    total = qtd_dias*volume*qtd_casas*qtd_caixas;
    printf("Resp: %.2f L", total);
    return 0;
}

float areaCirculo(float raio){
    return 3.141592*(raio*raio);
}

float volumeCaixa(float area, float altura){
    return area * altura;
}