#include <stdio.h>

// inteiro matriz
int main()
{
    int original[4][4], maior_dez[4][4], i, j = 0, cont = 0;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            maior_dez[i][j] = 0;
            original[i][j] = 0;
        }
    } // resetador de váriaveis
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {

            printf("\nqual o valor do indice[%d][%d]: ", i, j);
            scanf("%d", &original[i][j]);
            while (original[i][j] < 0)
            {
                printf("\nqual o valor do indice[%d][%d]: ", i, j);
                scanf("%d", &original[i][j]);
            } // concistencia
            if (original[i][j] > 10)
            {
                maior_dez[i][j] = original[i][j];
                cont++;
            } // pega váriaveis maior do que 10
        }
    } // pegador de valores da matriz
    printf("\ntem no total %d valores maior do que 10", cont);
    printf("\nvalores maior que 10 são");
    for (i = 0; i < 4; i++)
    {

        for (j = 0; j < 4; j++)
        {
            if (maior_dez[i][j] > 10)
            {
                printf("indice [%d][%d]", i, j);
            }
        }
    } // printa os valores  maiores que 10
}
