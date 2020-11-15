#include <stdio.h>
char Codifica(char letra, int n);
char Decodifica (char letra, int n);
int EhLetra (char c);
int EhLetraMaiuscula (char c);
int EhLetraMinuscula (char c);

int main(){
    int modo, n;
    char letra;
    scanf("%d %d", &modo, &n);
    n = n%26;

    if(modo==1){
        do{
            scanf(" %c", &letra);
            Codifica(letra, n);
        }while(letra!='.');
    }else if(modo==2){
        do{
            scanf(" %c", &letra);
            Decodifica(letra, n);
        }while(letra!='.');
    }else{
        printf("Operacao invalida.");
    }
    
    
    
    
    
    return 0;
}

char Codifica(char letra, int n){
    if(letra>='a' && letra<='z'){
        if(letra+n>'z'){
            printf("%c", letra+n-26);
        }else{
            printf("%c", letra+n);
        }
    }else if(letra>='A' && letra<='Z'){
        if(letra+n*2>'Z'){
            printf("%c", letra+(n*2)-26);
        }else{
            printf("%c", letra+(n*2));
        }
    }else{
        printf("%c", letra);
    }
}
char Decodifica (char letra, int n){
    if(letra>='a' && letra<='z'){
        if(letra-n<'a'){
            printf("%c", letra-n+26);
        }else{
            printf("%c", letra-n);
        }
    }else if(letra>='A' && letra<='Z'){
        if(letra-(n*2)<'A'){
            printf("%c", letra-(n*2)+26);
        }else{
            printf("%c", letra-(n*2));
        }
    }else{
        printf("%c", letra);
    }
}