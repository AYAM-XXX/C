#include <stdio.h>
int main()
{
  int tam = 4, soma = 0;
  int matriz[tam][tam];
  int i, j;

  for (i = 0; i < tam; i++)
  {
    for (j = 0; j < tam; j++)
    {
      printf("\ndigite o valor [%d][%d]: ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }
  for (i = 0; i < tam; i++)
  {
    for (j = 0; j < tam; j++)
    {
      if (i + j > tam - 1)
      {
        printf("%d  ", matriz[i][j]);
      }
      else
      {
        printf("   ");
      }
      if (j > i)
      {
        soma += matriz[i][j];
      }
    }
    printf("\n\n");
  }
  printf("\na soma da matriz identidade e: %d", soma);
} //	Elabore um programa que leia dados em matriz 4X4 de inteiros e posteriormente imprima os elementos que estão armazenados abaixo da diagonal secundária e some os valores que estão acima da diagonal principal.