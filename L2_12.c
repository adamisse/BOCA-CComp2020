#include <stdio.h>
#include <stdlib.h>

int main(){

    char letra;

    scanf("%c", &letra);
    printf("RESP:%c", letra);
    
    while((letra != '.') && (letra !='?') && (letra!='!')){
    scanf("%c", &letra);
        if(letra == ' '){
            letra = '_';
        }
        printf("%c", letra);
    }

    return 0;
}