#include <stdio.h>
#include <stdlib.h>

typedef struct tData{
    int dia, mes, ano;
}tData;

tData leData(){
    tData d1, d2;
    scanf("%d %d %d", &d1.dia, &d1.mes, &d1.ano);
    scanf("%d %d %d", &d2.dia, &d2.mes, &d2.ano);
    return d1, d2;
}

void imprimeData(tData p){
    printf("%d/%d/%d", d.dia, p.mes, p.ano);
}

int main(){
    struct tData datas;
    int dia, mes, ano;

    datas = leData();
    imprimeData(datas);
    return 0;
}