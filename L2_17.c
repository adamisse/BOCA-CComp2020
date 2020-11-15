#include <stdio.h>
#include <stdlib.h>

int main(){
    int modo, codificacao;
    char letra;
    scanf("%d %d ", &modo, &codificacao);
    codificacao = codificacao%26;
    
    if(modo==1){
        do{
            scanf("%c", &letra);
                if(letra>='a' && letra<='z'){
                    if(letra+codificacao>'z'){
                        printf("%c", letra+codificacao-26);
                    }else{
                        printf("%c", letra+codificacao);
                    }
                }else{
                    printf("%c", letra);
                }
        }while(letra != '.');
    }else if(modo==2){
        do{
            scanf("%c", &letra);
                if(letra>='a' && letra<='z'){
                    if(letra-codificacao<'a'){
                        printf("%c", letra-codificacao+26);
                    }else{
                        printf("%c", letra-codificacao);
                    }
                }else{
                    printf("%c", letra);
                }
        }while(letra != '.');
    }else{
        printf("Operacao invalida.");
    }
        
    
    
    return 0;
}