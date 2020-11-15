#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//x1 y1 x2 y2 px py

int main(){

    int x1, y1, x2, y2, pontox, pontoy;
    scanf("%d %d %d %d %d %d",&x1, &y1, &x2, &y2, &pontox, &pontoy);


    if (((pontox>x1) && (pontox>x2)) || ((pontox<x1) && (pontox<x2)) || ((pontoy>y1) && (pontoy>y2)) || ((pontoy<y1) && (pontoy<y2))){
        printf("Fora");
    }else{
        printf("Dentro");
    }

    return 0;
}