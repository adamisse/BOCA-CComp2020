#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){

    char op;
    int n1,n2, soma, sub, multi, divi;

    scanf ("%d %d %c", &n1, &n2, &op);
    soma = n1+n2;
    sub = n1-n2;
    multi = n1*n2;
    divi = n1/n2;
    
    switch (op)
{
        case '+' :
        printf("RESP:%d", soma);
        break;

        case '-' :
        printf("RESP:%d", sub);
        break;

        case '*' :
        printf("RESP:%d", multi);
        break;

        case '/' :
        printf("RESP:%d", divi);
        break;

        default :
        printf("Invalido");

    }

    return 0;
}