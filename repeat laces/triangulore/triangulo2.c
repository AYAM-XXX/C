// ⦁	Faça um programa que calcule a área de um triângulo,
//  cuja base e altura são fornecidas pelo usuário. Esse programa
//   não pode permitir a entrada de dados inválidos, ou seja, medidas
//    menores ou iguais a 0.

#include <stdio.h>
int main()
{
    float base, altura;
    printf("\nvalor da base: ");
    scanf("%f", &base);
    while (base < 0)
    {
        printf("\nvalor da base: ");
        scanf("%f", &base);
    }
    printf("\nvalor da altura: ");
    scanf("%f", &altura);
    while (altura < 0)
    {
        printf("\nvalor da altura: ");
        scanf("%f", &altura);
    }
    printf("\narea do triangulo: %.2f", base*altura);
}