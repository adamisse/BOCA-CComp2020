#include <stdio.h>
#include <stdlib.h>

int main(){

    char letra;  
    while((letra != '.') && (letra !='?') && (letra!='!')){//scan nos demais caracteres;
    scanf("%c", &letra);
        if(letra>=96 && letra<=122){
            letra = letra-32;
        }
        printf("%c", letra);
    }
    return 0;
}