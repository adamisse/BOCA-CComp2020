#include <stdio.h>

int main(){
    float peso, altura;
    scanf("%f %f", &peso, &altura);
    
    float imc;
    imc = peso/(altura*altura);

    if(imc<18.5){
        printf("Magro");
    }else if(imc>=18.5 && imc<25){
        printf("Saudavel");
    }else if(imc>=25 && imc<30){
        printf("Sobrepeso");
    }else{
        printf("Obeso");
    }
    
    return 0;
}
