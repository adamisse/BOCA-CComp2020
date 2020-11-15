#include <stdio.h>

int main(){
    int n, m, i=2;
    int soma_impares=0, soma_multiplos=0;
    while(scanf("%d %d", &n, &m)){
        if(n<m){
            break;
        }
    }
    n = n+1;
    for(n; n<m; n++){
        soma_multiplos = 0;
        i=2;
        if(n%2!=0){
            printf("%d --> ", n);
            while(n*i<m){
                if((n*i)%2!=0){
                    soma_impares += n*i;
                }
                printf("%d ", n*i);
                soma_multiplos += n*i;
                i++;
            }
            if(soma_multiplos>0){
                printf(": %d", soma_multiplos);
            }
            soma_impares +=n;
            printf("\n");
        }
    }
    if(soma_impares>0){
        printf("%d", soma_impares);
    }
    /*comentários sobre a questão:
        fiquei em dúvida com relação aos espaços entre os multiplos dos impares,
        os dois pontos e a soma dos multiplos,
        o caso daquele printf na linha 19.
    */
    
    return 0;
}
