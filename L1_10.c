#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){

    int n1;

    scanf("%i", &n1);
    if (n1 % 2 == 0) {
        printf("Par");
    }else{
        printf("Impar");
    }
    return 0;
}