#include <stdio.h>
#include <math.h>

int main(){
    int qtd_letras=0, i;
    char c;
    do{
        scanf("%c", &c);
        if((c>='a' && c<='z') || (c>='A' && c<='Z')){
            qtd_letras++;
        }
    }while(c!='.');
    printf("RESP: %d", qtd_letras);
    
    return 0;
}
