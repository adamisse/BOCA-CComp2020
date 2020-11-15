#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, m, par;
    scanf("%d %d", &n, &m);

    printf("RESP:");
    while(n < m-1){
        int contador = ++ n;
        if (contador % 2 == 0){
        printf ("%d ", contador );
    }
    }

    return 0;
}