#include <stdio.h>
int EhPrimo(int num);
void ImprimeMultiplos(int num, int max);

int main() {
    int n, m, divisor, primo, c;
 
    
    scanf("%d %d", &n, &m);
    
    for (n;n<m-1;) { //a sintaxe 'for' dessa forma não engloba N e M;
    ++n;
        primo = 1;//booleano em C; queremos os primos então startamos em 1;

        // se 'n' for um primo, primo vai ser 1;
        for (divisor = 2; divisor <= n / 2; ++divisor) {
        /*
            1) '1' já é um divisor universal, portanto a variável deve começar em 2;

            2) a metade de N é um pre requisito minimo para o divisor subir, pois
            sabemos que "O MAIOR DIVISOR DE UM NÚMERO É IGUAL A SUA METADE!";

            3) em meus codigos anteriores nao percebi o fato 2), por isso fui tolo.
        */
            if (n % divisor == 0) {
                primo = 0; //não primos;
                break;
            }
        }
        if (primo == 1){
            printf("%d \n", n);
            if(n*2<m){
                for(c=2; (c*n)<m;){  
                    printf("%d ", c*n ,"\n");
                    c++;
                }   printf("\n");
            }else{
                printf("*\n");
            }
        }    
    }

    return 0;
}