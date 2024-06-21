// Um funcionário irá receber um aumento no seu salário de
// acordo com o seu setor de trabalho, conforme a tabela abaixo:

// Setor    Aumento
// A            10%
// B            15%
// C            20%
// D            25%
// E            20%

// Faça um programa que leia o setor de trabalho e o salário
// atual de um funcionário e calcula e imprime o seu novo salário.
// entrada: float salario, int setor
// obs("não pediu para fazer menu")
#include <stdio.h>
int main()
{
    float salario;
    int setor;

    printf("\ndiga qual e o setor: ");
    scanf("%d", &setor);
    while (setor < 1 || setor > 5)
    {
        printf("\ndiga qual e o setor: ");
        scanf("%d", &setor);
    }

    printf("\ndiga qual e o salario: ");
    scanf("%f", &salario);
    while (salario <= 0)
    {
        printf("\ndiga qual e o salario: ");
        scanf("%f", &salario);
    }

    switch (setor)
    {
    case 1:
        printf("\nsetor A\naumento de %.2f", salario * 1.10);
        break;
    case 2:
        printf("\nsetor B\naumento de %.2f", salario * 1.15);
        break;
    case 3:
        printf("\nsetor C\naumento de %.2f", salario * 1.20);
        break;
    case 4:
        printf("\nsetor D\naumento de %.2f", salario * 1.25);
        break;
    case 5:
        printf("\nsetor E\naumento de %.2f", salario * 1.20);
        break;
    }
}
