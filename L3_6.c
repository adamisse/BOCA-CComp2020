#include <stdio.h>
#include <stdlib.h>
int EhPalIndromo(int num); 
int main(){
    int n;
    while(scanf("%d", &n)>0){
        if(EhPalIndromo(n)==1){
            printf("S\n");
        }else{
            printf("N\n");
        }
    }

    return 0;
}

int EhPalIndromo(int num){
    int aux, invertido;
    invertido = 0; 
    aux=num;
    while (aux>0){
        invertido = (invertido*10) + (aux % 10);
        aux = aux / 10;
    }
    if (num == invertido){
        return 1;
    }else{
        return 0;
    }
}
