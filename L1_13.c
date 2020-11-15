#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){

    int pessoa, item, ultima;    
    scanf("%i %i", &pessoa, &item);
    ultima = item%pessoa;

    if(ultima != 0){
        printf("RESP:%i", ultima);
    }
    if(ultima==0){
        printf("RESP:%i", pessoa);
    }

    return 0;
}