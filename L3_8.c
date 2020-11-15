#include <stdio.h>
int verificaPrimo(int n);
int transformaPrimo(int n);
int verificaNegativo(int n);

int main(){
    int linhas, colunas, i, j, n;
    scanf("%d %d", &linhas, &colunas);
    if ((linhas >= 1 && linhas <= 100) && (colunas >= 1 && colunas <= 100)){
        for(i=0; i<linhas; i++){
            for(j=0;j<colunas; j++){
                scanf("%d ", &n);
                if((verificaPrimo(n)==1)){
                    printf("%d ", n);
                }else{
                    printf("%d ", transformaPrimo(n));
                }
            }
            printf("\n");
        }
    }
    return 0;
}

int verificaPrimo(int n){
    int divis, qtd_divis=0, primo=0;
    if(verificaNegativo(n)==0){
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
    }else{
        for(divis=-1; divis>=n; divis--){
            if(n%divis==0){
                qtd_divis++;
            }
            if(n==-1 || qtd_divis>2){
                primo=0;
            }else if(qtd_divis<2){
                primo=1;
            }
        }
    }
    return primo;
}

int transformaPrimo(int n){
    int n_max, n_min, aux;
    aux = n;
    n_max = n*2;
    if(verificaNegativo(n)==0){
        if(n==0){
            return 2;
        }
        do{
            if(verificaPrimo(n)==1){
                break;
            }else{
                n++;
            }
        }while(n<n_max);
        if(n>32000){
            return aux;
        }
        return n;
    }else{
        if(n==0){
            return -2;
        }
        do{
            if(verificaPrimo(n)==1){
                break;
            }else{
                n--;   
            }
        }while(n>n_max);
        if(n<-32000){
            return aux;
        }
        return n;
    }
}
int verificaNegativo(int n){
    if(n<0){
        return 1;
    }else{
        return 0;
    }
}