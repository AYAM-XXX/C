// Desenvolver um algoritmo que leia a altura de 15 pessoas.
// Este programa deverá calcular e mostrar:
// a. A menor altura do grupo;
// b. A maior altura do grupo;
// entrada: altura( float), float maior, float menor
#include <stdio.h>
int main()
{

    float altura, maior, menor;

    for (int i = 0; i < 15; i++)
    {
        printf("digite a altura da pessoa %d: ", i + 1);
        scanf("%f", &altura);
        while ( altura <= 0)
        {
            printf("digite a altura da pessoa %d: ", i + 1);
            scanf("%f", &altura);
        }
        if (i == 0)
        {
            menor = altura;
            maior = altura;
        }
        else
        {
            if (altura > maior)
            {
                maior = altura;
            }
            else
            {
            }
            if (altura < menor)
            {
                menor = altura;
            }
        }
    }
    printf("Maior altura: %.2f\nMenor altura: %.2f", maior, menor);
}