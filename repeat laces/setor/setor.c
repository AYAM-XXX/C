// Um funcionário irá receber um aumento no seu salário de acordo
// com o seu setor de trabalho, conforme a tabela abaixo:
// Setor    Aumento
// A (1)            10%     entrada = setor(int),salario(float)
// B (2)            15%     saida = desconto(float)
// C (3)            20%
// D (4)            25%
// E (5)            20%
// Faça um programa que leia o setor de trabalho e o salário atual
//  de um funcionário e calcula e imprime o seu novo salário.
#include <stdio.h>
int main()
{
    int setor;
    float salario;

    printf("informe setor: ");
    scanf("%d", &setor);
    while (setor != 1 && setor != 2 && setor != 3 && setor != 4 && setor != 5)
    {
        printf("informe setor: ");
        scanf("%d", &setor);
    }
    printf("digite salario: ");
    scanf("%f", &salario);

    switch (setor)
    {
    case 1:
        printf("salario: %.2f", salario * 1.1);
        break;
    case 2:
        printf("salario: %.2f", salario * 1.15);
        break;
    case 3:
        printf("salario: %.2f", salario * 1.2);
        break;
    case 4:
        printf("salario: %.2f", salario * 1.25);
        break;
    case 5:
        printf("salario: %.2f", salario * 1.20);
        break;
    }
}
