#include<stdio.h>

int main(){
    int n, divi, fator;
    int i, digito[100];
    int soma=0;
    
    scanf("%d", &n);
    do{
        soma=0;
        i=0;
        fator=1;
        divi=n;
        while(divi>0){
            divi=divi/10;//divi vai diminuindo;
            fator = fator*10;//fator vai aumentando;
        }
        while(fator>1){
            fator = fator/10;
            digito[i] = n/fator;
            //printf("%d ", digito[i]);
            soma=soma+digito[i];
            n = n%fator;
            i++;
        }
        n=soma;
        printf("soma:%d", n);
    }while(soma>9);
    //printf("RESP:%d", soma);
    
  return 0;
}