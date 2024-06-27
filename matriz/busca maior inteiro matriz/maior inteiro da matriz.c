// Faça um programa que manipule com uma matriz 4 x 4 de inteiros,
// imprima a matriz e retorne a localização (linha e a coluna)
// do maior valor.

#include <stdio.h>

int main()
{
    int original[4][4], maior_i = 0, maior_j = 0, maior = 0, i, j;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("\nqual o valor de [%d][%d]: ", i, j);
            scanf("%d", &original[i][j]);
            if (i == 0 && j == 0)
            {
                maior = original[i][j];
            }
            else
            {
                if (original[i][j] > maior)
                {
                    maior = original[i][j];
                    maior_i = i;
                    maior_j = j;
                } // compara o maior valor
                else
                {

                }
                
            }

        } // recebe o valor da matriz
    }
    printf("\no lugar que esta o maior valor e [%d][%d]", maior_i, maior_j);
}