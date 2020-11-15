#include <stdio.h>
int main(){
    int max_n, n, i, menor=10000000, pos_menor=1;
    scanf("%d", &max_n);
    if(max_n>0){
        for(i=1; i<=max_n; i++){
            scanf("%d", &n);
            if(n<menor){
                pos_menor=i;
                menor=n;
            }
        }
        printf("POS:%d", pos_menor);
    }

    return 0;
}