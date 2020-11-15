#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){

    int s;
    double num, den, soma; 
    int pot;

    scanf("%i", &s);

     switch (s)
  {
    case 1 :
    num = -1;
    den = 0;
    for (num; num<99;){
    num = num + 2;
    ++den;
    soma = soma + (num/den);
    }
    printf("%f\n", soma); //soma de 1/1 + 3/2 + 5/3.......99/50;
    break;

    case 2:
    pot = 0;
    den = 51;
    num = 2;
    for (den; den>1;){
    den--;
    pot++;
    num = pow(2, pot); //compila usando <math.h/>
    soma = soma + (num/den);

    //printf("EXPOENTE: %d\n", pot);
    //printf("NUMERADOR: %f\n", num);
    //printf("DENOMINADOR:%f\n", den);

    }
    
    printf("%f\n", soma);

    break;

    case 3:
    num = 0;
    den = 0;
    float cont;
    cont = 1;  
    for (den;den<100;){
    den = den + cont;
    cont = cont+2; //contador auxiliar especifico
    num++;
    soma = soma + (num/den);    //soma
    //numerador
    //denominador                           
    }
    printf("%f\n", soma); 

    break;
}

    return 0;
}