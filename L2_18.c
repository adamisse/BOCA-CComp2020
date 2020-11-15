#include <stdio.h>

int main(){
    int l,c, maior=-32767, menor=32767, auxl, auxc, i, q;
    scanf("%d %d", &l, &c);
    int matriz[l][c];
    
    for(i=0; i<l; i++){
        for(q=0; q<c; q++){
            scanf("%d", &matriz[i][q]);
        }
    }
    for(i=0; i<l; i++){
        for(q=0; q<c; q++){
            if(matriz[i][q]>maior){
                maior=matriz[i][q];
                auxl=i+1;
                auxc=q+1;
            }
        }
    }
    
    printf("%d(%d,%d)", maior, auxl, auxc);

    return 0;
}
