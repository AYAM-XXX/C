// Desenvolver um algoritmo que leia a altura de 15 pessoas.
// Este programa deverá calcular e mostrar:
// a. A menor altura do grupo;
// b. A maior altura do grupo; (entrada: altura <- float saida: menor, maior <-float)

#include <stdio.h>
int main()
{
    float altura, menor, maior;

    for (int i = 0; i < 5; i++) // verifica recolhe a idade de 15 pessoas
    {
        printf("\ndigite a altura: ");// entrada da altura
        scanf("%f", &altura);
        while (altura < 1)// concistencia
        {
            printf("\ndigite a altura: ");
            scanf("%f", &altura);
        }

        if (i == 0)// se o i for 0 menor  e maior recebe altura
        {
            menor = altura;
            maior = altura;
        }
        else //comparação
        {
        }
            if (maior < altura)
            {
                maior = altura;
            }
            else
            {
            }
            if (menor > altura)
            {
                menor = altura;
            }
            else
            {
            }
        
    }
    printf("\nmaior altura: %.2f", maior);
    printf("\nmenor altura: %.2f", menor);
}