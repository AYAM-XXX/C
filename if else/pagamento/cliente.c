#include <stdio.h>
int main()
{
    float price; // var de entrada preço
    int pag;     // var de entrada  para tipo de cliente
    printf("valor da  compra: ");
    scanf("%f", &price);
    if (price < 0)
    {
        printf("valor invalido");
    }
    else
    {
        printf("\n1- á vista\n2-a prazo\ndigite: ");
        scanf("%d", &pag);
        if (pag != 1 && pag != 2)
        {
            printf(" tipo de cliente incorreto");
        }
        else
        {
            switch (pag)
            {
            case 1:
                printf("valor total: %.2f", price * 0.90);
                break;
            case 2:
                printf("valor total: %.2f", price);
                break;

            default:
                break;
            }
        }
    }
}