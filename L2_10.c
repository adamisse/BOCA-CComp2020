#include <stdio.h>
int main() {

    int n, m, c;

    scanf("%d %d", &n, &m);
    for(n;n<=m;n++){
        for(c=1; c<=10;){
            printf("%d x %d = %d\n",n,c, n*c);
            c++;
        }
    }
    return 0;
}