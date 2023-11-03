#include <stdio.h>

int main()
{
    int matriz_a[4][4], matriz_b[4][4], matriz_m[4][4], i, j;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("\nMATRIZ A__qual o valor do indice[%d][%d]: ", i, j);
            scanf("%d", &matriz_a[i][j]);

            while (matriz_a[i][j] < 0)
            {
                printf("\nMATRIZ A__qual o valor do indice[%d][%d]: ", i, j);
                scanf("%d", &matriz_a[i][j]);
                
            }// concistencia
        }
    } // pegador de valores da matriz a

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {

            printf("\nMATRIZ B__qual o valor do indice[%d][%d]: ", i, j);
            scanf("%d", &matriz_b[i][j]);
            while (matriz_b[i][j] < 0)
            {
                printf("\nMATRIZ B__qual o valor do indice[%d][%d]: ", i, j);
                scanf("%d", &matriz_b[i][j]);
            } // concistencia
        }
    } // pegador de valores da matriz b

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (matriz_a[i][j] >= matriz_b[i][j])
            {

                matriz_m[i][j] = matriz_a[i][j];
            }
            else
            {
                matriz_m[i][j] = matriz_b[i][j];
            }
        } // pega valores maiores  da matriz a ou b
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("\no valor dos inteiros da maior matriz indice[%d][%d]: %d", i, j, matriz_m[i][j]);
        }

    } // printa valores maior de matriz
}
