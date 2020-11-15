#include <stdio.h>
#include <stdlib.h>

int main(){

    float nota1, nota2, media;

    scanf("%f", &nota1);
    scanf("%f", &nota2);
    media = (nota1 + nota2) / 2;

    if (media >= 7.0){
        printf("%.1f", media);
        printf(" - Aprovado");
    }else{
    if (media < 5.0){
        printf("%.1f", media);
        printf(" - Reprovado");

    }else{
        printf("%.1f", media);
        printf(" - De Recuperacao");
    }
    }

    return 0;
}