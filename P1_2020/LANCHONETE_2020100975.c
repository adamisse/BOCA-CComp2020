#include <stdio.h>

int main(){
    int qtd_prod, cod_prod;
    float valor_prod, preco_final=0, desconhecido=0;
    
        while(scanf("%d %d", &cod_prod, &qtd_prod)){
        switch (cod_prod){
            case 100:
                    preco_final = preco_final + (qtd_prod * 1.2);
               break;
            case 101:
                    preco_final = preco_final + (qtd_prod * 1.3);
               break;
            case 102:
                    preco_final = preco_final + (qtd_prod * 1.01);
               break;
            case 103:
                    preco_final = preco_final + (qtd_prod * 9.99);
               break;
            case 104:
                preco_final = preco_final + (qtd_prod * 2.5);
                break; 
            case 105:
                preco_final = preco_final + (qtd_prod * 0.8);
                break; 
            default:
                desconhecido=1;
            }
    }
    printf("R$ %.2f", preco_final);
    if(desconhecido>0){
        printf("\nContem produtos nao reconhecidos!");
    }
    
    return 0;
}
