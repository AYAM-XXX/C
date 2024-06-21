// Desenvolver um algoritmo que efetue a soma de todos os números 
// ímpares que são múltiplos de três e que se encontram no conjunto 
// dos números de 1 até 500. 
// emtrada: int soma = 0
#include <stdio.h>
int main()
{
 int soma = 0;
 for ( int i = 0; i < 500; i++)
 {
    if ( i % 2 != 0)
    {
        soma += i;
    }
    else
    {
    }
 }
 printf("soma de impares: %d", soma);
}
