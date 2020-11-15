#include <stdio.h>
#include <math.h>


int main(){
    int qtd_cidades, i;
    float dist, dist_mais_prox=10001, vel, tempo; 
    char c, c_mais_prox;
    
    scanf("%d ", &qtd_cidades);
    for(i=0; i<qtd_cidades; i++){
        scanf("%c %f ", &c, &dist);
        if(dist<dist_mais_prox){
            dist_mais_prox = dist;
            c_mais_prox = c;
        }
    }
    scanf("%f", &vel);
    tempo = dist_mais_prox/vel;
    printf("c: %c d: %.2f t: %.2f", c_mais_prox, dist_mais_prox, tempo);
    
    return 0;
}