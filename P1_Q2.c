#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){

    int p1, p2;
    scanf("%d %d", &p1, &p2);

    if ((p1 == p2) && ((p2 <= 5) && (p2 >=1))){
        printf("Um homem");
    }else if ((p1 == p2) && ((p2 >= 6) && (p2 <=10))){
        printf("Uma mulher");
        }else if ((p1 <= 5 && p1 >= 1) && (p2 <=5 && p1 >=1) && (p1!=p2)){
            printf("Par de homens");
            }else if ((p1 >= 6 && p1 <=10) && (p2 >= 6 && p2 <=10) && (p1!=p2)){
                printf("Par de mulheres");
                }else if (((p1 != p2) && ((p1 >= 1) && (p1<=5)) && ((p2<=10) && (p2>=6)) || ((p1<=10) && (p1>=6)) && ((p2>=1) && (p2<=5)))) {
                    printf("Um Casal");
                    }else{
                    printf("Invalido");
                    }

    return 0;
}