#include <stdio.h>
#include <math.h>

int main(){
    int i, x, y, maior_x, maior_y;
    float dist, maior_dist=0;
    
    for(i=0; i<5; i++){
        scanf("%d %d", &x, &y);
        dist = sqrt((x*x)+(y*y));
        if(dist>maior_dist){
            maior_dist = dist;
            maior_x = x;
            maior_y = y;
        }
        printf("%.2f ", dist);
    }
    printf("Maior: %.2f p: (%d,%d)", maior_dist, maior_x, maior_y);
    
    return 0;
}
