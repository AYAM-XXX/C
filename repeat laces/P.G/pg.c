// Escreva um algoritmo que leia um valor inicial A e uma razão
// R e imprima uma sequência em P.G. contendo 10 valores. 10)
// Escreva um algoritmo que leia um valor inicial A e imprima
// a sequência de valores do cálculo de A! e o seu resultado.
// Ex: 5! = 5 X 4 X 3 X 2 X 1 = 120
#include <stdio.h>
int main()
{
    int number, somapg = 0;

    printf("digite um numero: ");
    scanf("%d", &number);
    while (number < 0)
    {
        printf("digite um numero: ");
        scanf("%d", &number);
    }
    for (int i = 0; i < 11; i++)
    {
        somapg += (number-i)*number;
        
    }
    printf("%d! = (%d)",number , somapg);
    

    return 0;
}