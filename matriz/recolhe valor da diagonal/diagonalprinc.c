#include <stdio.h>
int main()
{
    int tam = 4;
    int matriz[tam][tam];
    int vetp[tam];
    int i = 0;
    int j = 0;
    for (i = 0; i < tam; i++)// reseta vetor
    {
        vetp[i] = 0;
    }

    for (i = 0; i < tam; i++)
    {
        for (j = 0; j < tam; j++)
        {
            printf("diga o valor do indice[%d][%d]: ", i, j);//pega o valor da matriz
            scanf("%d", &matriz[i][j]);
            while (matriz[i][j] < 0)
            {
                printf("diga o valor do indice[%d][%d]: ");
                scanf("%d", &matriz[i][j]);
            }
            if (i == j)//verifica se e diagonal principal
            {
                vetp[j] = matriz[i][j];
            }
        }
    }
    printf("\n\n MATRIZ\n\n");
    for (i = 0; i < tam; i++)
    {
        for (j = 0; j < tam; j++)//mostra a matriz
        {
            printf("%d   ", matriz[i][j]);
        }
        printf("\n\n");
    }
    printf("\n\n VETOR\n\n");
    for (i = 0; i < tam; i++)//mostra o vetor
    {
        printf("%d ", vetp[i]);
    }
}
//Elabore um programa que leia elementos inteiros em uma matriz 4X4 e posteriormente crie 
//um vetor com os elementos armazenados na diagonal principal da matriz.

