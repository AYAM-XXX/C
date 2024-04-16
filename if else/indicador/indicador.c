// A taxa de natalidade e a taxa de mortalidade são indicadores estatísticos de fundamental importância por ajudar a compreender
// aquilo que os especialistas chamam de dinâmica populacional e a entender sua relação com variáveis que influenciam o desenvolvimento,
//  como qualidade de vida, migrações, , fatores socioeconômicos e localização. Sabendo disso, crie um programa que calcule os dois
//   indicadores utilizando o comando switch.

// Observação : A taxa de natalidade é calculada pela seguinte fórmula: taxa de natalidade =
//(número de crianças nascidas x 1000) / número de habitantes;

// Enquanto que, a taxa de mortalidade = (números de óbitos x 1000) /número de habitantes.
#include <stdio.h>
int main()
{
    int mort, nasc, hab, num;
    printf("\nnumero de nascimentos:");
    scanf("%d", &nasc);
    if (nasc < 0)
    {
        printf("\nvalor invalido");
    }
    else
    {

        printf("\nnumero de mortos:");
        scanf("%d", &mort);
        if (mort < 0)
        {
            printf("\nvalor invalido");
        }
        else
        {
            printf("\nnumero de habtantes:");
            scanf("%d", &hab);
            if (hab < 0)
            {
                printf("\nvalor invalido");
            }
            else
            {
                printf("\n1-taxa de de natalidade\n2-taxa de mortalidade\n digite: ");
                scanf("%d", &num);
                if (num != 1 && num != 2)
                {
                    printf("\nvalor invalido");
                }
                else
                {
                    switch (num)
                    {
                    case 1:
                        printf("\ntaxa de natalidade: %d",(nasc * 1000) / hab);
                        break;
                    case 2:
                        printf("\ntaxa de mortalidade: %d", (mort * 1000) / hab);
                        break;
                    }
                }
            }
        }
    }
}
