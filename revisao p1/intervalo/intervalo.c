// Escrever um algoritmo que leia uma quantidade desconhecida de
// números e conte quantos deles estão nos seguintes intervalos:
// [0-25], [26-50], [51-75] e [76-100]. A entrada de dados deve
// terminar quando for lido um número negativo.
#include <stdio.h>
int main()
{
    int nmr, inter_1 = 0, inter_2 = 0, inter_3 = 0, inter_4 = 0;
    printf("digite um numero: ");
    scanf("%d", &nmr);
    while (nmr > 100)
    {
        printf("digite um numero dnv: ");
        scanf("%d", &nmr);
    }
    while (nmr >= 0)
    {
        if (nmr >= 0 && nmr <= 25)
        {
            inter_1++;
        }
        else
        {
            if (nmr >= 26 && nmr <= 50)
            {
                inter_2++;
            }
            else
            {
                if (nmr >= 51 && nmr <= 75)
                {
                    inter_3++;
                }
                else
                {
                    inter_4++;
                }
            }
        }
        printf("digite um numero: ");
        scanf("%d", &nmr);
        while (nmr > 100)
        {
            printf("digite um numero: ");
            scanf("%d", &nmr);
        }
    }
    printf("[0-25]: %d\n[26-50]: %d\n[51-75]: %d\n[76-100]: %d", inter_1, inter_2, inter_3, inter_4);
}
