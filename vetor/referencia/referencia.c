// Faça um programa que leia 10 números inteiros, armazene-os em
// um vetor, solicite um valor de referência inteiro e:
//  a) imprima os números do vetor que são maiores que o valor
// referência
//  b) retorne quantos números armazenados no vetor são menores
// que o valor de referência
// c) retorne quantas vezes o valor de referência aparece no
// vetor.
#include <stdio.h>
int main()
{
    int valor[10], referencia, cont = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("\ndigite o valor: ");
        scanf("%d", &valor[i]);
    }

    printf("\ndigite o valor da referencia: ");
    scanf("%d", &referencia);


    printf("\nmaiores que o valor referencia: ");

    for (int i = 0; i < 10; i++)
    {
        if ( valor[i] > referencia)
        {
            printf("[%d]", valor[i]);
        }
        else
        {
            /* code */
        }
        
    }

    printf("\nmenores que o valor referencia: ");

    for (int i = 0; i < 10; i++)
    {
        if ( valor[i] < referencia)
        {
            printf("[%d]", valor[i]);
        }
        else
        {
            /* code */
        }
        
    }

    for (int i = 0; i < 10; i++)
    {
        if ( valor[i] == referencia)
        {
            cont++;
        }
        else
        {
            /* code */
        }
        
    }
    printf("\n valor referencia apareceu: %d ", cont);

}
