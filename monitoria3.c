#include <stdio.h>

int somadosdigitos(int n){
	int divisao, resto, soma = 0;
	divisao = n;
	while(divisao > 0){
		divisao = n / 10;
		resto = n % 10;
		soma += resto;
		n = divisao;
	}
	return soma;
}

void parImpar(int n){
	if(n % 2 == 0){
		printf("Par ");
	}else{
		printf("Impar ");
	}	
}

void valorPrimo(int n){
	int cont = 0;
	int i;
	for(i = 1;i<=n;i++){
		if(n%i == 0){
			cont++;
		}
	}
	if(cont == 2){
		printf("Primo\n");
	}else{
		printf("Nao e primo\n");
	}
	
}

int main(){
	long int n;
	scanf("%ld", &n);
	
	do{	
		n = somadosdigitos(n);
		printf("%ld ", n);
		parImpar(n);
		valorPrimo(n);
	}while(n >= 10);

	return 0;
}
