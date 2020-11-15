#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float a, b, c, d, y;
    int x0, xf, x;
    float x1, x2, x3, x4;
    float vale, pico, y_pos, y_ant;
    int xvale, xpico, x_pos, x_ant;
    int pico_existe=0, vale_existe=0;
   
    scanf("%f %f %f %f %d %d", &a, &b, &c, &d, &x0, &xf);
    x1=a*pow(x0,3);
    x2=b*pow(x0,2);
    x3=c*x0;
    x4=d;

    //vale = x1+x2+x3+x4;
    //pico = x1+x2+x3+x4;
   
    for(x=x0; x<=xf; x++){
        x1=a*pow(x,3);
        x2=b*pow(x,2);
        x3=c*x;
        x4=d;
        y = x1+x2+x3+x4;
        x_pos = x+1;
        x_ant = x-1;
        y_pos = (a*pow(x_pos,3)) + (b*pow(x_pos,2)) + (c*x_pos) + (d);
        y_ant = (a*pow(x_ant,3)) + (b*pow(x_ant,2)) + (c*x_ant) + (d);
        //printf("x=%d y=%.2f \n",x, y);
        //printf("Y ANTERIOR:%f POSTERIOR:%f \n", y_ant, y_pos);
        if(y>y_ant && y>y_pos){
            pico_existe++;
            pico = y;
            xpico = x;
        }
        if(y<y_ant && y<y_pos){
            vale_existe++;
            vale = y;
            xvale = x;
        }
    }
    //printf("%d %d \n", pico_existe, vale_existe);
    if(pico_existe>0 && vale_existe>0){
        if(xpico<xvale){
            printf("Pico em x=%d\n", xpico);
            printf("Vale em x=%d\n", xvale);
        }else{
            printf("Vale em x=%d\n", xvale);
            printf("Pico em x=%d\n", xpico);
        }
    }else if(vale_existe>0 && pico_existe==0){
        printf("Vale em x=%d\n", xvale);
        printf("Nao ha pico\n");
    }else if(pico_existe>0 && vale_existe==0){
        printf("Pico em x=%d\n", xpico);
        printf("Nao ha vale\n");
    }else if(pico_existe==0 && vale_existe==0){
        printf("Nao ha pico\n");
        printf("Nao ha vale");
    }

   
    return 0;
}