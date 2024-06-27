// Faça um programa que crie duas matrizes 4 x 4
// de inteiros  e posteriormente cria  uma terceira
// com os maiores valores de cada posição das matrizes lidas.
#include <stdio.h>
int main()
{
    int tam = 2;
    int matriz_A[tam][tam], matriz_B[tam][tam], matriz_C[tam][2];
    int maior_A[tam], maior_B[tam];
    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            printf("\nqual o valor de [%d][%d] matriz A: ", i, j);
            scanf("%d", &matriz_A[i][j]);
            if (j == 0)
            {
                maior_A[i] = matriz_A[i][j];
            }
            else
            {
                if (matriz_A[i][j] > maior_A[i])
                {
                    maior_A[i] = matriz_A[i][j];
                } // compara o maior valor
                else
                {
                }
            }
        }
    }
    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            printf("\nqual o valor de [%d][%d] matriz B: ", i, j);
            scanf("%d", &matriz_B[i][j]);
            if (j == 0)
            {
                maior_B[i] = matriz_B[i][j];
            }
            else
            {
                if (matriz_B[i][j] > maior_B[i])
                {
                    maior_B[i] = matriz_B[i][j];
                } // compara o maior valor
                else
                {
                }
            }
        }
    }
    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (j == 0)
            {
                matriz_C[i][j] = maior_A[i];
            }
            else
            {
                matriz_C[i][j] = maior_B[i];
            }
        }
    }
    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("[%d]", matriz_C[i][j]);
        }
     printf("\n");
    }// printa a matriz
}