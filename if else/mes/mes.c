// Escreva um programa utilizando o comando switch que imprima um mês de acordo com o número digitado pelo usuário.
#include <stdio.h>
int main()
{
    int mes;

    printf("\nnuemero do mes:");//pega o valor do mes
    scanf("%d", &mes);
    if (mes <= 0 || mes > 12)// valida a entrada
    {
        printf("\nmes invalido");
    }
    else
    {
        switch (mes)
        {
        case 1:
            printf("\njaneiro");
            break;
        case 2:
            printf("\nfevereiro");
            break;
        case 3:
            printf("\nmarço");
            break;
        case 4:
            printf("\nabril");
            break;
        case 5:
            printf("\nmaio");
            break;
        case 6:
            printf("\njunho");
            break;
        case 7:
            printf("\njulho");
            break;
        case 8:
            printf("\nagosto");
            break;
        case 9:
            printf("\nsetembro");
            break;
        case 10:
            printf("\noutubro");
            break;
        case 11:
            printf("\nnovembro");
            break;

        default:
            printf("\ndezembro");
            break;
        }
    }
}
