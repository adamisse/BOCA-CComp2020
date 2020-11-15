#include <stdio.h>
#include <math.h>
int fib (int n);
void fatora(int num);

int main(){
    int n, num, i;
    scanf("%d", &n);
    if(n>=2){
        for(i=2; i<=n+1; i++){
            num = fib(i);
            printf("%d: ", num);
            fatora(num);
        }
    }else{
        printf("Nao ha fatores primos.");
    }
    
    return 0;
}

int fib(int n){                                          
    int i, fib1 = 1, fib2 = 1, soma;
    for (i=2; i <= n; i = i + 1){                                        
        soma = fib1 + fib2;                    
        fib1 = fib2;                           
        fib2 = soma;                           
    }                                        
    return fib2;                             
}

void fatora(int num){
  int fator , qtd_fatores=0, mult;

  fator = 2;
  while (num> 1){
      mult = 0;
      while (num% fator == 0) 
        {
          mult ++;
          num= num/ fator; 
        }
      if (mult != 0) 
        {
          printf("(%d, %d) ", fator, mult); 
          qtd_fatores++;
        }
      fator++; 
    }
    printf("[%d]\n", qtd_fatores);
}




