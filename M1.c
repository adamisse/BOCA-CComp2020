#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){

    int n1, n2, c;

    scanf("%d %d", &n1, &n2);

    c = n1;
    n1 = n2;
    n2 = c;

    printf ("%d,%d", n1, n2);

    return 0;
}