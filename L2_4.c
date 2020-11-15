#include <stdio.h>
#include <stdio.h>

int main(){

    int maior, menor, n, contador;

    maior = 0;
    menor = 0;
    float soma = 0;
    contador = 1;

        scanf("%d", &n);        
        for (contador; n!=0; contador++){
        soma = soma + n;
            if (contador==0){ 
            maior = n;
            }else 
            if (n>maior){ 
            maior = n;
            }
            printf("%d %f\n", maior, soma/contador);//soma/n=media
            scanf("%d", &n);
        }  

    return 0;
}