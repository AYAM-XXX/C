#include <stdio.h>

int main()
{
    int original[5][5], i, j, buscar = 0, validacao = 0;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            do
            {
                printf("insira um numero inteiro do indice[%d][%d]: ", i, j);
                scanf("%d", &original[i][j]);
            } while (original[i][j] < 0);
        }
    } // pega o valor das váriaveis
    printf("\nqual valor voce que buscar: ");
    scanf("%d", &buscar);

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (buscar == original[i][j])
            {
                printf("\no indice que esta esse valor e [%d][%d]", i, j);
                validacao = 1;
            }
        }
    }//faz a busca dos valores e printa a busca
    if (validacao != 1)
    {
        printf("\nvalor nao encontrado");
    }//printa se n achar a busca
}