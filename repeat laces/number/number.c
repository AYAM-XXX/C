// Faça um programa que leia um conjunto não determinado de valores,
//  um de cada vez, e escreva para cada um dos valores lidos, o
//  quadrado, o cubo e a raiz quadrada. Finalize a entrada de dados
//  com um valor negativo ou zero.
// entrada:numero = float
#include <stdio.h>
#include <math.h>
int main()
{
    float number;

    printf("\nnumero: ");
    scanf("%f", &number);
    while (number >= 1)
    {
        printf("\nquadrado: %.2f\ncubo: %.2f\nraiz quadrada: %.2f", pow(number, 2), pow(number, 3), sqrt(number));
        printf("\nnumero: ");
        scanf("%f", &number);
    }
}
