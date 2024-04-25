// Desenvolver um algoritmo que leia um número não determinado de
// valores e calcule e escreva a média aritmética dos valores lidos,
// a quantidade de valores positivos, a quantidade de valores
// negativos e o percentual de valores negativos e positivos.
#include <stdio.h>
int main()
{
    int numero, total = 0, negativo = 0, positivo = 0, soma = 0;

    printf("\ndigite o numero: ");
    scanf("%d", &numero);

    while (numero != 0)
    {
        soma += numero;
        if (numero < 0)
        {
            negativo++;
        }
        else
        {
            positivo++;
        }
        total++;

        printf("\ndigite o numero: ");
        scanf("%d", &numero);
    }
    printf("\nmedia aritmética: %.2f", (float)soma / (float)total);
    printf("\nValores positivos: %d\nvalores negativos: %d", positivo, negativo);
    printf("\nporcentagem negativos: %.2f\nporcentagem positivos: %.2f", ((float)negativo * 100) / total, ((float)positivo * 100) / total);
}