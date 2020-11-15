#include <stdio.h>

int main(){
    int i=0;
    char c, letra[100];
    int qtd_parent=0, primeiro_parent=0;
    
    while(scanf("%c", &c)){
        if(i==0){
            printf("RESP:");
        }
        if(c=='('){
            qtd_parent++;
        }
        if(c==')'){
            qtd_parent--;
            if(qtd_parent==0){
                primeiro_parent=0;
            }
        }
        if(qtd_parent>0){
            if(primeiro_parent==0){
                primeiro_parent=1;
            }else if(primeiro_parent!=0){
                printf("%c", c);
            }
        }
        if(c=='.' && qtd_parent==0){
            break;
        }
        i++;
    }

    return 0;
}
