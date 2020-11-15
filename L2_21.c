#include <stdio.h>

int main(){
    int n, i=0;
    scanf("%d", &n);
    if(n<10){
        int numero[n];
    
        for(i; i<n; i++){
            scanf("%d ", &numero[i]);
        }
        
        int qtd_aspas=0, int_temp;
        char c;
        //printf("%d", numero[0]);
        while(qtd_aspas<2){
            scanf("%c", &c);
            if(c=='"'){//itera a quantidade de aspas;
                qtd_aspas++;
            }else if(c=='%'){
                scanf("%d", &int_temp);
                if(int_temp>n || int_temp<1){
                    printf("ERRO");
                }else{
                    printf("%d", numero[int_temp-1]);
                }
            }else{
                printf("%c", c);
            }
        }
    }
    
    
    return 0;
}