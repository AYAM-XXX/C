// Escrever um algoritmo que leia uma quantidade desconhecida de
// números e conte quantos deles estão nos seguintes intervalos:
//  [0-25], [26-50], [51-75] e [76-100]. A entrada de dados deve
//  terminar quando for lido um número negativo.
#include <stdio.h>
int main()
{
    int numero, cont_25 = 0, cont_50 = 0, cont_75 = 0, cont_100 = 0;
    printf("\ndigite o numero: ");
    scanf("%d", &numero);
    while (numero > 100)
    {
        printf("\ndigite o numero correto: ");
        scanf("%d", &numero);
    }

    while (numero >= 0)
    {
        if (numero <= 25)
        {
            cont_25++;
        }
        else
        {
            if (numero <= 50)
            {
                cont_50++;
            }
            else
            {
                if (numero <= 75)
                {
                    cont_75++;
                }
                else
                {
                    if (numero <= 100)
                    {
                        cont_100++;
                    }
                    else
                    {
                    }
                }
            }
        }
        printf("\ndigite o numero: ");
        scanf("%d", &numero);
        while (numero > 100)
        {
            printf("\ndigite o numero correto: ");
            scanf("%d", &numero);
        }
    }
    printf("\nquantidade [0-25]: %d",cont_25);
     printf("\nquantidade [26-50]: %d",cont_50);
      printf("\nquantidade [51-75]: %d",cont_75);
       printf("\nquantidade [75-100]: %d",cont_100);

    return 0;
}