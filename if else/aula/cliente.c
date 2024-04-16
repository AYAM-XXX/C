// Uma loja fornece 10% de desconto para funcionários e 5% de desconto para clientes vips. Faça um programa que calcule o valor
// total a ser pago por uma pessoa. O programa deverá ler o valor total da compra efetuada e um código que identifique se o comprador
// é um cliente comum (1), funcionário (2) ou vip (3).

#include <stdio.h>
int main()
{
    float price; // var de entrada preço
    int cliente; // var de entrada  para tipo de cliente
    printf("valor da  compra: ");
    scanf("%f", &price);
    if (price < 0)
    {
        printf("valor invalido");
    }
    else
    {
        printf("\n1-cliente comun\n2-funcionario\n3-vip\ndigite: ");
        scanf("%d", &cliente);
        if (cliente == 1 || cliente == 2 || cliente == 3)
        {
            switch (cliente)
            {
            case 1:
                printf("valor total: %.2f", price);
                break;
            case 2:
                printf("valor total: %.2f", price * 0.90);
                break;
            case 3:
                printf("valor total: %.2f", price * 0.95);
                break;

            default:
                break;
            }
        }
        else
        {
            printf(" tipo de cliente incorreto");
        }
    }
}