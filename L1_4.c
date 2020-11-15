#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float raio1, raio2, area1, area2, pi, inv;
    pi = 3.141592;
    
    scanf ("%f", &raio1);  

    area1 = pi*(raio1*raio1);
    area2 = area1/2;
    inv = area2/pi;
    raio2 = sqrt(inv);

    printf("%.2f", area1);
    printf("%.2f", raio2);


    return 0;
}