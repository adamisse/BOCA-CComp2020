#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){

    char letra;

    letra = getchar();

    if ((letra <= 122) && (letra >= 97)){
    letra = letra - 32;
    printf ("%c(%i)", letra, letra);
    }else{
        if((letra >= 65) && (letra <= 90)){
        printf ("A letra deve ser minuscula!");
        }else{
        printf("Nao e letra!");
        }
    }

    return 0; //+32 ascii vira minusculo.... a ideia é fazer uma operacao algebrica.
}