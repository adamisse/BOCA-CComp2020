#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){

    int n, o, c, d, u, resto;
    scanf("%d %d", &n, &o);
    resto = n%100;

    switch (o)
    {
    case 1 :
        resto = n%100;
        //printf("%d", resto%10); 
        if((resto%10)%2 == 0){
        printf("PAR");
    }else{
        printf("IMPAR");
    }
        break;
    case 2 :
        resto = n%100; 
        //printf("%d", resto/10); 
        if((resto/10)%2 == 0){
        printf("PAR");
    }else{
        printf("IMPAR");
    }
        break;
    case 3 :
        resto = n%1000;
        //printf("%d", resto/100);
        if((resto/100)%2 == 0){
        printf("PAR");
    }else{
        printf("IMPAR");
    }
        break;
    default:
        break;
    }
    return 0;
}