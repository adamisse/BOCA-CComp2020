#include <stdio.h>

int EhPrimo(int num);

int main(){
    int n1, n2, i;
    scanf("%d %d", &n1, &n2);
    for(i=n1+1; i<n2; i++){
        if(EhPrimo(i)==1){
            printf("%d ", i);
        }
    }
    
    return 0;
}

int EhPrimo(int num){
    int divis, qtd_divis=0, primo=0;
    for(divis=1; divis<=num; divis++){
        if(num%divis==0){
            qtd_divis++;
        }
        if(num==1 || qtd_divis>2){
            primo=0;
        }else if(qtd_divis<2){
            primo=1;
        }
    }
    return primo;
}
