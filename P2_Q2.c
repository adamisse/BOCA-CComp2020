#include <stdio.h>

int main(){
    int n, n_invertido, aux, qtd_palindromos=0;
    char spc;
    do{
        scanf("%d%c", &n, &spc);
        n_invertido = 0;
        aux = n;
        
        while (aux > 0) {
            n_invertido = (n_invertido*10) + (aux % 10);
            aux = aux / 10;
        }
        if (n == n_invertido){
            qtd_palindromos++;
        }
    }while(spc==' ');
    printf("COUNT:%d", qtd_palindromos);
    return 0;
}
