// faça um programa que lê valores inteiros
// maiores que 10 em um vetor de 7 posições.
// Posteriormente crie um outro vetor com os
// elementos ímpares do vetor original. Ao final do
// programa imprima os dois vetores criados.
#include <stdio.h>
int main()
{

    int valor[7];
    int impar[7];
    int cont = 0;
    for (int i = 0; i < 7; i++)
    {
        printf("\ninsira um numero de 1 a 10: ");
        scanf("%d", &valor[i]);
        while (valor[i] < 10)
        {
            printf("\ninsira um numero de 1 a 10: ");
            scanf("%d", &valor[i]);
        }
        if (valor[i] % 2 != 0)
        {
            impar[cont] = valor[i];
            cont++;
        }
        else
        {
        }
        
    }
    printf("\nvetor original: ");
     for (int i = 0; i < 7; i++)
     {
        printf("[%d]", valor[i]);
     }
     printf("\nvetor apenas de impar: ");
     for (int i = 0; i < cont; i++)
     {
        printf("[%d]", impar[i]);
     }
}
