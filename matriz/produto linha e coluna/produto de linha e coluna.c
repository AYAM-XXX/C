// Faça um programa que preenche uma matriz 4 x 4  de inteiros com o produto
// do valor da linha e da coluna de cada elemento. Em seguida, imprima na tela
// a matriz.
#include <stdio.h>

int main()
{

    int produto[4][4], i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            produto[i][j] = 0;
        }//reseta as váriaveis
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            produto[i][j] = i * j;
        }
    }//adiciona o produto de linha e coluna em cada espaço da matriz
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("\nindice[%d][%d] e :[%d]", i, j, produto[i][j]);
        }
    }// printa a matriz
}
