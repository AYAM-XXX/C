// Escreva um algoritmo que leia um valor inicial A e uma razão R e
// imprima uma sequência em P.A. contendo 10 valores.
#include <stdio.h>
int main()
{
    int number, razao;
    printf("\ndigite o numero:");
    scanf("%d", &number);
    printf("\ndigite a razao:");
    scanf("%d", &razao);

    for (int i = 0; i < 10; i++)
    {
        if (i == 0)
        {
            printf(" (%d)", number);
        }
        else
        {
            printf(" (%d)", number + razao);
            number += razao;
        }
    }
}