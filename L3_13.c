#include<stdio.h>
int somadosdigitos(int n);
void parImpar(int n);
void valorPrimo(int n);

int main(){
    char c;
    int valor_c;
    while(scanf("%d", &c)>0){
        if(c>='a' && c<='z'){
            valor_c=c-96;
            printf("%d", valor_c);
        }
    }