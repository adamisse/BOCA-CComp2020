#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, m, quantp, quanti, menor, maior;
    quantp = 0;
    quanti = 0;
    menor = 0;
    maior = 0;
    float soma = 0;

    scanf("%d", &n);
    int contador = 0;
    for (contador; contador<n; contador++){
        scanf ("%d", &m);
        if (contador==0){ 
            maior = m;
            menor = m;
        }else if (m>maior){ 
            maior = m;
            }else if (m<menor){ 
            menor = m;
        }
            soma = soma + m;
                if (m%2==0){
                quantp = quantp +1;
                }else{
                    if(m%2!=0){
                    quanti = quanti+1;
                    }
                }
}    
    printf("%d %d %d %d %.6f", maior, menor, quantp, quanti, soma/n);

    return 0;
}