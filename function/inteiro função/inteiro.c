#include <stdio.h>

void verificador(int n1)
{
    int res;
    if (n1 < 0)
    {
        res = -1;
    }
    else if (n1 > 0)
    {
        res = 1;
    }
    else
    {
        res = 0;
    }
    printf("\no resultado e: %d", res);
} // verifica se o numero e inteiro
int main()
{
    int n1;

    printf("\nqual o valor do inteiro?: ");
    scanf("%d", &n1); // recebe o valor

    printf("\nse o numero for positivo aparecera 1");
    printf("\nse o numero for negatico aparecera -1");
    printf("\nse o numero for zero aparecera 0\n");
    verificador(n1); // retorna o valor
}

// Faça uma função que recebe um valor inteiro e verifica se o valor é positivo,
// negativo ou zero. A função deve retornar 1 para valores positivos, -1 para negativos e
// 0 para o valor 0.