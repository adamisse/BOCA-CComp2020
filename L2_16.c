#include <stdio.h>

int main()
{
    int var_teste = 0;
    int menor = 32000;
    int contagem_segunda = 0;
    int var_controle = 0;
    int primeira_vez = 0, segunda_vez = 0;
    char espaco;

    while (scanf("%d", &var_teste))
    {
        if (var_teste < menor)
        {
            menor = var_teste;
        }
    }

    scanf("%c", &espaco);

    while (scanf("%d", &var_teste))
    {
        contagem_segunda++;

        if (var_teste == menor)
        {
            if (var_controle == 0)
            {
                primeira_vez = contagem_segunda;
                var_controle = 1;
            }

            else
            {
                segunda_vez = contagem_segunda;
                var_controle = 2;
            }
        }
    }

    if (var_controle == 0)
    {
        printf("%i %i %i", menor, contagem_segunda, contagem_segunda);
    }

    else if (var_controle == 1)
    {
        printf("%i %i %i", menor, primeira_vez - 1, primeira_vez - 1);
    }

    else
    {
        printf("%i %i %i", menor, primeira_vez - 1, segunda_vez - 1);
    }
}
