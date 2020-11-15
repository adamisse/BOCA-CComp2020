#include <stdio.h>
#include <stdlib.h>
int Propriedade(int num);
int main(){

    int n, m;
    scanf ("%d %d",&n,&m);
    
    for(n;n<m-1;){
        n++;
        int ab = n/100;
        int cd = n%100;
        int ef = ab+cd;
        int efef = ef*ef;
        if (efef==n){
            printf("%d\n",efef);
        }
    }
        


    return 0;
}