#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, i, divisores = 1;  
    scanf("%d", &n);

    for (i=1; i<n; i++){
        if (n % i == 0){
        divisores+=1;//divisores++ ou divisores = divisores + 1
    }
    }//printf("POSSUI :%d DIVISORES\n", divisores);
    if ((divisores<=2) && (divisores>1)){
        printf("Primo");
    }else{
        printf("Nao primo");
    }
    

    return 0;
}