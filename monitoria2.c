#include <stdio.h>

int main(){
    char n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, ponto1, ponto2, traco;
    scanf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c", &n1, &n2, &n3, &ponto1, &n4, &n5, &n6, &ponto2, &n7, &n8, &n9, &traco, &n10, &n11);
    //printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c", n1, n2, n3, ponto1, n4, n5, n6, ponto2, n7, n8, n9, traco, n10, n11); 
    int x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11;
    x1=n1-48;
    x2=n2-48;
    x3=n3-48;
    x4=n4-48;
    x5=n5-48;
    x6=n6-48;
    x7=n7-48;
    x8=n8-48;
    x9=n9-48;
    x10=n10-48;
    x11=n11-48;
    //printf("\n%d%d%d%c%d%d%d%c%d%d%d%c%d%d", x1, x2, x3, ponto1, x4, x5, x6, ponto2, x7, x8, x9, traco, x10, x11); 
    if((x1==x2)&&(x2==x3)&&(x3==x4)&&(x4==x5)&&(x5==x6)&&(x6==x7)&&(x7==x8)&&(x8==x9)&&(x9==x10)&&(x10==x11)){
        printf("CPF invalido: digitos iguais!");
    }else{
        int soma10, soma11, real10, real11;
        
        soma10 = (x1*10) + (x2*9) + (x3*8) + (x4*7) + (x5*6) + (x6*5) + (x7*4) + (x8*3) + (x9*2);
        if(soma10%11<2){
            real10=0;
        }else if(soma10%11>=2){
            real10=11-(soma10%11);
        }
        soma11 = (x1*11) + (x2*10) + (x3*9) + (x4*8) + (x5*7) + (x6*6) + (x7*5) + (x8*4) + (x9*3) + (real10*2);
        if(soma11%11<2){
            real11=0;
        }else if(soma11%11>=2){
            real11=11-(soma11%11);
        }
        //printf("%d\n", real10);
        //printf("%d", real11);
    
        
        if(real10==x10 && real11==x11){
            printf("CPF valido!");
        }else if(real10==x10 && real11!=x11){
            printf("CPF invalido: segundo digito!");
        }else if(real10!=x10 && real11==x11){
            printf("CPF invalido: primeiro digito!");
        }else if((real10!=x10) && (real11!=x11)){
            printf("CPF invalido: dois digitos!");
        }
    }
    
    
    return 0;
}
