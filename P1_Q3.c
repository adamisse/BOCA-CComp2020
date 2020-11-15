#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){

    char c1, c2, c3, c4;

    scanf ("%c%c %c%c", &c1, &c2, &c3, &c4);

    if((isalpha(c1) || isalnum(c1)) && (isalpha(c2) || isalnum(c2)) && (isalpha(c3) || isalnum(c3)) && (isalpha(c4) || isalnum(c4))){
      if((c1 == c3+32 || c1 == c3-32 || c1 == c3) && (c2 == c4+32 || c2 == c4-32 || c2 == c4)){
        printf("IGUAIS");
      }else{
        printf("DIFERENTES");
      }
    }else{
      printf("Invalido");
    }
    
    return 0;
}
