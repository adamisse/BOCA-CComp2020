#include <stdio.h>
#include <stdlib.h>

//Faça um programa que dado dois números, mostre o maior deles. Caso sejam iguais, mostre que são iguais.
/*
Entrada: 2 números inteiros.
Saída: Maior dos números e sua posição.
Exemplo de Entrada:
2 3
5 1
5 5
Exemplo de Saída:
N2 = 3
N1 = 5
N1 = N2
*/

int main(){
    int n1, n2;

    scanf ("%i", &n1);
    scanf ("%i", &n2);

    if (n1>n2){
        printf("N1 = %i", n1);
    }else{
        if(n2>n1){
        printf("N2 = %i", n2);
    }else{
        printf("N1 = N2");
    }
    }
    
    return 0;
}