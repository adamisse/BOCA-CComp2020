#include <stdio.h>

int CalculaValorPalavra()
{
	int valor = 0, soma = 0;
	char C;

	while (1)
	{
		scanf("%c", &C);
		if (C == '\n' || C == '\0')
		{
			break;
		}
		if (C >= 'a' && C <= 'z')
		{
			valor = C - 96;
			// valor = (C - 'a') + 1;
		}
		if (C >= 'A' && C <= 'Z')
		{
			valor = C - 38;
			// valor = (C - 'A') + ('z' - 'a') + 2;
		}
		soma += valor;
	}
	return soma;
}

int EhPrimo(int n)
{
	int cont = 0;
	int i;
	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			cont++;
		}
	}
	if (cont == 2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int ProximoPrimo(int n)
{
	int i;
	for (i = n + 1; 1; i++)
	{
		if (EhPrimo(i))
		{
			break;
		}
	}
	return i;
}

int main()
{
	int soma;
	while (1)
	{
		soma = CalculaValorPalavra();
		if (soma == 0)
		{
			break;
		}
		if (EhPrimo(soma))
		{
			printf("E primo\n");
		}
		else
		{
			printf("Nao e primo %d\n", ProximoPrimo(soma));
		}
	}
	return 0;
}
