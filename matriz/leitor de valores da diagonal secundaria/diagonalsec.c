#include <stdio.h>
int main()
{
    int tam = 5;
    int original[tam][tam];
    int i, j, cont = 0;
    for (i = 0; i < tam; i++)
    {
        for (j = 0; j < tam; j++)
        {
            printf("\nqual o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &original[i][j]);
            while (original[i][j] < 0)
            {
                printf("\nqual o valor da posicao [%d][%d]: ", i, j);
                scanf("%d", &original[i][j]);
            }
        }
    }
    for (i = 0; i < tam; i++)
    {
        if (original[i][tam - i] > 20)
        {
            cont++;
        }
        else
        {
        }
    }

    printf("\nsão maiore que 20 na diagonal secundaria:%d\n\n ", cont);
    for (i = 0; i < tam; i++)
    {
        for (j = 0; j < tam; j++)
        {
            printf("%d   ", original[i][j]);
        }
        printf("\n\n");
    }
}
// Elabore um programa que manipule com uma matriz 5 x 5 de inteiros, posteriormente conte quantos elementos da diagonal secundária são maiores que 20.