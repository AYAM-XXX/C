// Faça um algoritmo estruturado que leia uma quantidade não
//  determinada de números positivos. Calcule a quantidade de
//  números pares e ímpares, a média de valores pares e a média
//  geral dos números lidos. O número que encerrará a leitura será
//  zero.
#include <stdio.h>
int main()
{
    int nmr, cont = 0, contpar = 0, contimp = 0, somapar = 0, soma = 0;
    printf("digite um numero: ");
    scanf("%d", &nmr);
    while (nmr < 0)
    {
        printf("digite um numero: ");
        scanf("%d", &nmr);
    }
    while (nmr != 0)
    {
        soma += nmr;
        cont++;

        if (nmr % 2 == 0)
        {
            contpar++;
            somapar += nmr;
        }
        else
        {
            contimp++;
        }
        printf("digite um numero: ");
        scanf("%d", &nmr);
        while (nmr < 0)
        {
            printf("digite um numero: ");
            scanf("%d", &nmr);
        }
    }
    printf("media total: %.2f\ntotal pares: %d<--->total impares: %d\n media pares: %.2f", (float)somapar / (float)cont, contpar, contimp, (float)somapar / (float)contpar);
}
