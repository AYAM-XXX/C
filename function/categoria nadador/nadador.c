#include <stdio.h>

int classificador(int idade)
{
    if (idade >= 5 && idade <= 7)
    {
        printf("\nInfantil A");
    } // retorna Infantil A
    else
    {
        if (idade >= 8 && idade <= 10)
        {
            printf("\nInfantil B");
        } // retorna Infantil B
        else
        {
            if (idade >= 11 && idade <= 13)
            {
                printf("\njuvenil A");
            } // retorna juvenil A
            else
            {
                if (idade >= 14 && idade <= 17)
                {
                    printf("\njuvenil B");
                } // retorna juvenil B
                else
                {
                    if (idade >= 18)
                    {
                        printf("\nadulto");
                    } // retorna adulto
                    else
                    {
                    }
                }
            }
        }
    }
}
int main()
{
    int idade;

    printf("qual a idade?: ");
    scanf("%d", &idade); // recebe idade
    while (idade <= 0)
    {
        printf("qual a idade?: ");
        scanf("%d", &idade); // concistencia
    }

    classificador(idade); // retorna a classe
}

// Faça um programa que implemente uma função que recebe a idade de um nadador por
// parâmetro e retorna, também por parâmetro, a categoria desse nadador de acordo com a
// tabela abaixo:

//    Idade      Categoria
//  5 a 7 anos:	 Infantil A
//  8 a 10 anos: Infantil B
//  11-13 anos:  Juvenil A
//  14-17 anos:  Juvenil B
//  Maiores de 18 anos: Adulto
