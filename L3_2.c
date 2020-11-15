#include <stdio.h>
    float Soma(float result, float n);
    float Subtracao(float result, float n);
    float Divisao(float result, float n);
    float Multiplicacao(float result, float n);
    
int main(){
    float n1, n, result;
    char op;
    scanf("%f", &n1);
    result=n1;
    while(scanf("%f %c", &n, &op)==2){
        switch(op){
            case '+':
                result=Soma(result,n);
                break;
            case '-':
                result=Subtracao(result,n);
                break;
            case '*':
                result=Multiplicacao(result,n);
                break;
            case '/':
                result=Divisao(result,n);
                break;
        }
    }
    printf("%.2f", result);

    
    return 0;
}

float Soma(float result, float n){
    return result+n;
}
float Subtracao(float result, float n){
    return result-n;
}
float Divisao(float result, float n){
    return result/n;
}
float Multiplicacao(float result, float n){
    return result*n;
}