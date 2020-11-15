#include <stdio.h>
#include <stdlib.h>

int main(){

    int n; 
    char espaco;
    int qneg = 0; 
    int qpos = 0;
    int sneg = 0;
    int spos = 0;
      
    do{
        scanf("%d%c", &n, &espaco);
        if (n<0){ 
            qneg++;
            sneg += n;
            }
        if (n>0){ 
            qpos++;
            spos += n;
        }
    } while((n>=(-100) && (n<=100)) && (espaco == 32));        
    printf("%d %d %d %d", qneg, qpos, sneg, spos);


    return 0;
}