// Um funcionário recebe aumento anual. Em 1995 foi contratado por
// 2000 reais. Em 1996 recebeu aumento de 1.5%. A partir de 1997,
// os aumentos sempre correspondem ao dobro do ano anterior. Faça
// programa que determine o salário atual do funcionário.
#include <stdio.h>
#include <math.h>
int main()
{
    int ano;//recebe o ano atual
    int totalano;
    float salario = 2000;

    printf("\nano atual: ");//recebe o ano atual
    scanf("%d", &ano);
    while (ano <= 1996)//concistencia se o ano informado for menor que 1996
    {
        printf("\nano atual: ");
        scanf("%d", &ano);
    }
    
     totalano = ano - 1995;// total  de anos que se passaram des de 1996
    for (int i = 0; i < totalano; i++)
    {
         salario += salario*((0.015)*2);
    }
    printf("\nsalario atual: %.2f", salario);
    
}
