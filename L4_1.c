#include <stdio.h>
#include <stdlib.h>

typedef struct tProduto{
    int codigo;
    float preco;
    int quantidade;
}tProduto;

tProduto LeProduto(){
    tProduto p;
    scanf("%d %f %d", &p.codigo, &p.preco, &p.quantidade);
    return p;
}

void imprimeProduto(tProduto p){
    printf("Codigo:%d\nPreco:%.2f\nQuantidade:%d", p.codigo, p.preco, p.quantidade);
}

int main(){
    struct tProduto p;
    int codigo;
    float preco;
    int quantidade;
    p = LeProduto();
    imprimeProduto(p);
    return 0;
}