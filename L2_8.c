#include <stdio.h>
int main() {
    int n, m, divisor, primo;
    
    scanf("%d %d", &n, &m);
    printf("RESP:");
    for (n;n<m-1;) { 
    ++n;
        primo = 0;//booleano em C;

        // se 'n' for um primo, primo vai ser 1;
        for (divisor = 2; divisor <= n / 2; ++divisor) {
            if (n % divisor == 0) {
                primo = 1;
                break;
            }
        }
        if (primo == 0)
            printf("%d ", n);

    }

    return 0;
}