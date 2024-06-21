// Faça um programa que armazena valores de salários
// dos últimos 5 meses de um funcionário. O funcionário
// pode receber a mais de um mês para outro maior, mas
// nunca menos. Informe ao final se o funcionário recebeu
// algum aumento e em que mês. Calcule o valor total recebido
// nos 5 meses.
#include <stdio.h>
int main()
{
    float salario[5], valoraumento[5], totalsalario = 0;
    int mesaum[5], cont = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("valor do salario: ");
        scanf("%f", &salario[i]);
        while (salario[i] < 0)
        {
            printf("valor do salario correto: ");
            scanf("%f", &salario[i]);
        }
        while (i > 0 && salario[i] < salario[i - 1])
        {
            printf("valor do salario correto: ");
            scanf("%f", &salario[i]);
        }

        if (i > 0 && salario[i] > salario[i - 1])
        {
            mesaum[cont] = i;
            valoraumento[cont] = salario[i] - salario[i - 1];
            cont++;
        }
        else
        {
        }
        totalsalario += salario[i];
    }
    for (int i = 0; i < cont; i++)
    {
        printf("\nteve aumento no mes: %d", mesaum[i]);
        printf("\ntotal do aumento: %.2f\n", valoraumento[i]);
    }
    printf("total salario: %.2f", totalsalario);
    
}