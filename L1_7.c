#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    
    float temp, c_to_f, f_to_c;
    char caracter, unidade;

    scanf ("%f %c", &temp, &caracter);

    if((caracter == 'f')||(caracter == 'F')){
    unidade = 'C';
    temp = (temp-32)/1.8;
    printf ("%.2f(%c)", temp, unidade);
    }else{
        if((caracter == 'c') || (caracter == 'C')){
        unidade = 'F';
        temp = (temp*1.8)+32;
        printf ("%.2f(%c)", temp, unidade);
        }
    }
    

    


    return 0;
}