#include <stdio.h>
int main()
{
    int one, two, three;
    // recebe o val0r dos numeros
    printf("\n infome o numero:");
    scanf("%d", &one);

    printf("\n infome o numero:");
    scanf("%d", &two);

    printf("\n infome o numero:");
    scanf("%d", &three);
    // compara os valores
    if (one > two && one > three)
    {
        printf("\no maior numero e %d", one);
    }
    else
    {
        if (two > one && two > three)
        {
            printf("\no maior numero e %d", two);
        }
        else
        {
            if (three > two && three > one)
            {
                printf("\no maior numero e %d", three);
            }
            else
            {
                if (one == two)
                {
                    printf("\no maior numero e %d", one);
                }
                else
                {
                    if (one == three)
                    {
                        printf("\no maior numero e %d", one);
                    }
                    else
                    {
                        if (two == three)
                        {
                            printf("\no maior numero e %d", two);
                        }
                        else
                        {
                        }
                    }
                }
            }
        }
    }

    // compara se dois valores são iguais
    printf("\ndigite o valor: ");
    scanf("%d", &one);

    printf("\ndigite o valor: ");
    scanf("%d", &two);

    // verifica se os valores são iguais
    if (one == two)
    {
        printf("\nsao iguais");
    }
    else
    {
        printf("\ndiferentes");
    }
}