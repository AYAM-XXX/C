#include <stdio.h>
int main()
{
    int lado_1, lado_2, lado_3;
    // pega o valor dos lados
    printf("\ndigite o lado: ");
    scanf("%d", &lado_1);
    if (lado_1 > 0)
    {
        /* code */
    }
    else
    {
        printf("invalido");
    }
    
    printf("\ndigite o lado: ");
    scanf("%d", &lado_2);
    printf("\ndigite o lado: ");
    scanf("%d", &lado_3);
    // verifica qual tipo de triangulo
    if (lado_1 == lado_2 && lado_1 == lado_3)
    {
        printf("\nequilatero");
    }
    else
    {
        if (lado_1 == lado_2 || lado_1 == lado_3 || lado_2 == lado_3)
        {
            printf("\nisoceles");
        }
        else
        {
            printf("\nescaleno");
        }
    }
    // verifica os angulos
    printf("\ndigite o angulo: ");
    scanf("%d", &lado_1);
    printf("\ndigite o angulo: ");
    scanf("%d", &lado_2);
    printf("\ndigite o angulo: ");
    scanf("%d", &lado_3);
    // veifica qual o angulo
    if (lado_1 == 90 || lado_2 == 90 || lado_3 == 90)
    {
        printf("\n triangulo retangulo");
    }
    else
    {
        if (lado_1 > 90 || lado_2 > 90 || lado_3 > 90)
        {
            printf("\n triangulo obtusangulo");
        }
        else
        {
            printf("\n triangulo acutangulo");
        }
    }
}