#include <stdio.h>
int EhPar (int x);
void PrintaPares (int N);
void PrintaImpares (int N);

int main(){
    int tipo, n, i=0;
    scanf("%d %d", &tipo, &n);
    if(tipo==0){
        for(i=2; i<=n*2; i+=2){
            printf("%d ", i);
        }
    }else if(tipo==1){
        for(i=1; i<=n*2;i+=2){
            printf("%d ", i);
        }
    }
    
    return 0;
}
