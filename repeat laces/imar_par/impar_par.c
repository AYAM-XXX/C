// Faça um algoritmo estruturado que leia uma quantidade não
// determinada de números positivos. Calcule a quantidade de números
// pares e ímpares, a média de valores pares e a média geral dos
// números lidos. O número que encerrará a leitura será zero.
#include <stdio.h>
int main()
{
    int numero, total = 0, impar = 0, par = 0, somapar = 0, soma = 0;
    printf("\n digite um numero: ");
    scanf("%d", &numero);
    while (numero < 0)
    {
        printf("\n digite um numero correto: ");
        scanf("%d", &numero);
    }
    while (numero != 0)
    {

        if (numero % 2 == 0)
        {
            par++;
            somapar += numero;
        }
        else
        {
            impar++;
        }
        soma += numero;
        total++;

        printf("\n digite um numero: ");
        scanf("%d", &numero);
        while (numero < 0)
        {
            printf("\n digite um numero correto: ");
            scanf("%d", &numero);
        }
    }

    printf("\nqtd pares: %d\nqtd impar: %d", par, impar);
    printf("\nmedia de pares: %.2f", (float)somapar/(float)total);
    printf("\nmedia total: %.2f", (float)soma/(float)total);
}
