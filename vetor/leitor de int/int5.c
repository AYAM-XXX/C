// Faça um programa que leia 5 valores inteiros, armazeno-os em um
// vetor, calcule e apresente a soma destes valores.
// Altere o programa anterior para calcular e apresentar a média
// dos valores entrados e aqueles que são maiores e menores que a
//  média
// entradas: int valor[5], media, abaixo[5], acima[5],cont
// saida: int soma
#include <stdio.h>
int main()
{
    int valor[5], total = 0;
    float media;

    for (int i = 0; i < 5; i++)
    {
        printf("\ndigite o valor: ");
        scanf("%d", &valor[i]);

        total += valor[i];
    }

    media = (float)total / 5;

    printf("\nabaixo da media: ");
    for (int i = 0; i < 5; i++)
    {
        if (valor[i] < media)
        {
            printf("[%d]", valor[i]);
        }
        else
        {
            /* code */
        }
    }

    printf("\nacima da media: ");
    for (int i = 0; i < 5; i++)
    {
        if (valor[i] > media)
        {
            printf("[%d]", valor[i]);
        }
        else
        {
            /* code */
        }
    }

    printf("\ntotal : %d", total);
    printf("\nmedia : %.2f", media);
}