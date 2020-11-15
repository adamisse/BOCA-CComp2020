#include <stdio.h>
#include <math.h>
float depositar(float valor, float saldo);
float sacar(float valor, float saldo);

int main(){
    float saldo_atual, qtd_op, i=0, valor;
    char op;
    scanf("%f %f ", &saldo_atual, &qtd_op);
    
    do{
        scanf("%c %f ", &op, &valor);
        if(op=='S'){
            saldo_atual = saldo_atual - valor;
        }else if(op=='D'){
            saldo_atual = saldo_atual + valor;
        }
        i++;
    }while(i<qtd_op);
    if(saldo_atual>0){
        printf("Positivo: ");
    }else if(saldo_atual<0){
        printf("Negativo: ");
    }else{
        printf("Zerado: ");
    }
    printf("%.2f", saldo_atual);

    return 0;
}