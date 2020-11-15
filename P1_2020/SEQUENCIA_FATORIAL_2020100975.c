#include <stdio.h>
int fatorial(int n);
int fatora(int n);
int impar(int n);

int main(){
    int lim, i, temp_fatorial, temp_fatora;
    scanf("%d", &lim);
    if(lim>1){
        for(i=1; i<=lim; i++){
            if(fatorial(i)>lim){
                break;
            }
            temp_fatorial = fatorial(i);
            temp_fatora = fatora(temp_fatorial);
            //printf("%d %d\n", temp_fatorial, temp_fatora);//(debugger1)
            if(impar(temp_fatora)==1){
                printf("%d ", temp_fatorial);
            }
        }
    }
    
    
    return 0;
}

int fatorial(int n){
    int fator;
    for(fator=1;n>1;n--){
      fator = fator*n;
    }
    return fator;

}

int fatora(int n){
  int multiplicidade, divisor, repeticao_fator=0;
    divisor=2;
    while(n>1){//1 não é primo;
        multiplicidade=0;
        while(n%divisor==0){
            multiplicidade++;
            n=n/divisor; 
        }
        if(multiplicidade>0){
            //printf("divisor %d  multiplicidade do fator %d\n", divisor, multiplicidade);//(debugger2)
            repeticao_fator += multiplicidade;
        }
        divisor++; 
    }
    return repeticao_fator;
}

int impar(int n){
    if(n%2==0){
        return 0;
    }else{
        return 1;
    }
}