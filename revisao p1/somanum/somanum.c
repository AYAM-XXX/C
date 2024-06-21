// Desenvolver um algoritmo que leia um número não determinado de
// valores e calcule e escreva a média aritmética dos valores lidos,
// a quantidade de valores positivos, a quantidade de valores
//  negativos e o percentual de valores negativos e positivos.
// entrada: int somaT = 0, contP = 0, contN = 0, cont
#include <stdio.h>
int main()
{
    int somaT = 0, cont = 0, nmr;
    int contP = 0, contN = 0;
    printf("digite um numero: ");
    scanf("%d", &nmr);
    while ( nmr != 0)
    {
        somaT += nmr;
        cont++;
        if ( nmr > 0)
        {
            contP++;
        }
        else
        {
            contN++;
        }
        printf("digite um numero: ");
        scanf("%d", &nmr);
    }
    printf("media aritmetica: %.2f\ntotal positivo: %d\ntotal negativos: %d", ((float)somaT / (float)cont), contP, contN);
    printf("\npercentual de numeros negativos: %.2f\npercentual de numeros positivos: %.2f", (float)contN / (float)cont * 100, (float)contP / (float)cont * 100);

}
