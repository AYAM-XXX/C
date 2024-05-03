// Faça um programa que lê valores inteiros maiores que 10 em um
// vetor de 7 posições. Posteriormente crie um outro vetor com os
// elementos ímpares do vetor original. Ao final do programa imprima
// os dois vetores criados
// entrada: int valor, int impar,
// concistencias: maiores que 10.
#include <stdio.h>
int main()
{
    int valor[7], impar[7], cont = 0;

    for (int i = 0; i < 7; i++)
    {
        printf("\ndigite o valor: ");
        scanf("%d", &valor[i]);
        while (valor[i] <= 10)
        {
            printf("\ndigite o valor novamente: ");
            scanf("%d", &valor[i]);
        }
        if (valor[i]%2 != 0)
        {
            impar[cont] = valor[i];
            cont++;
        }
        else
        {
        }
    }
printf("\nvalores: ");
    for (int i = 0; i < 7; i++)
    {
         printf("[%d] ", valor[i]);
    }
    printf("\nimpar: ");
    for (int i = 0; i < cont; i++)
    {
        printf("[%d] ", impar[i]);
    }
}