#include<stdio.h>
int somadosdigitos(int n);
void parImpar(int n);
void valorPrimo(int n);

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
        printf("%d ", n);
        parImpar(n);
        valorPrimo(n);
    }while(soma>9);

  return 0;
}
void parImpar(int n){
    if(n%2==0){
        printf("Par ");
    }else{
        printf("Impar ");
    }
}

void valorPrimo(int n){
    int divis, qtd_divis=0, primo=0;
    for(divis=1; divis<=n; divis++){
        if(n%divis==0){
            qtd_divis++;
        }
        if(n==1 || qtd_divis>2){
            primo=0;
        }else if(qtd_divis<2){
            primo=1;
        }
    }
    if(primo==1){
        printf("Primo\n");
    }else{
        printf("Nao e primo\n");
    }
}
