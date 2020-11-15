#include <stdio.h>
#include <stdlib.h>

int main(){

    char letra;

    scanf("%c", &letra);//primeiro char da sentença;
    printf("RESP:%c", letra);
    
    while((letra != '.') && (letra !='?') && (letra!='!')){
    scanf("%c", &letra);//restante da sentença;
        if(letra == ' '){
            continue;
        }
        printf("%c", letra);
    }
    return 0;
}