#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, m;

    scanf("%d %d", &n, &m);

        while(n < m-1){
        int contador = ++ n;
        if ((contador%3==0) || (contador%4==0) || (contador%7==0)){
        printf ("%d ", contador );
        }
    }

    return 0;
}