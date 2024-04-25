// Desenvolver um algoritmo que efetue a soma de todos os números
// ímpares que são múltiplos de três e que se encontram no conjunto
// dos números de 1 até 500.
// entrada: numero <- tipo inteiro \\ concistencia: <- maior que 1 ate 500
// saida: soma <- tipo inteiro
#include <stdio.h>
int main()
{
    int numero, soma = 0;

    printf("\n digite o numero: ");
    scanf("%d", &numero);
    while (numero < 0)
    {
        printf("\n digite o numero correto: ");
        scanf("%d", &numero);
    }
    while (numero != 0)// termina quando e zero
    {
        if (numero % 2 == 1)// verifica as condições para o numero ser impar
        {
            if (numero % 3 == 0)// verifica se o numero e multiplo de 3
            {
                soma += numero;// soma o numero
            }
            else
            {
            }
        }
        else
        {
        }
        printf("\n digite o numero: ");//recebe o valor do numero novamente
        scanf("%d", &numero);
    }
    printf("\nvalor total:%d ", soma);// soma os numeros que foram aprovados
    return 0;
}