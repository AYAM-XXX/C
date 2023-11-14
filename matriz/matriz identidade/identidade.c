#include <stdio.h>
int main()
{
    int matriz[4][4];
    int i,j;

    for (i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("\ndigite o valor [%d][%d]: ",i,j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            if (i == 3 && j > 0)
            {
                printf("\no valor da posicao[%d][%d] e: %d", i, j, matriz[i][j]);
            }
            if (i == 2 && j > 1)
            {
                printf("\no valor da posicao[%d][%d] e: %d", i, j, matriz[i][j]);
            }
            if (i == 1 && j > 2)
            {
                printf("\no valor da posicao[%d][%d] e %d", i, j, matriz[i][j]);
            }
            else
            {
                matriz[i][j] = 0;
            }
        }
    }
}