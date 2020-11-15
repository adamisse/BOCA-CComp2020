#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){

    char c;
    c = 0;
    scanf("%c", &c);

    if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U'){
        printf("Vogal");
    }else{
        printf("Nao vogal");
        }

    return 0;
}