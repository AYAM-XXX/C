// Uma caixa de supermercado deve tomar decisões ao cobrar as contas
// dos seus clientes e escolher os valores para devolver o troco ao
// cliente. Para isso, o caixa inicia o dia com valores trocados na
// caixa registradora, mas mesmo assim ela deverá saber se terá
// troco o suficiente para entregar ao cliente. Para isso será
// desenvolvido um programa para informar se existe dinheiro
// suficiente na caixa registradora. O seu programa deverá
// solicitar as seguintes informações:

// - quantidade de moedas de 0,05

// - quantidade de moedas de 0,10

// -quantidade de moedas de 0,25

// - quantidade de moedas de 0,50

// - quantidade de moedas de 1,00

//  Solicite o valor da compra do cliente e o valor em
//  dinheiro que ele está utilizando para pagar a compra
//   (faça as validações necessárias) e verifique se o caixa
//   possui dinheiro o suficiente para o troco. Se não existir
//    valor suficiente para o troco, informe quanto está faltando
//    ao caixa, assim ele poderá solicitar ao gerente que ele
//    complete o valor faltante.
// entradas: valores_entr, moeda_05, moeda_25,moeda_50,moeda_1, total,dinheiro_recebido

#include <stdio.h>
int main()
{
    float valores_entr, moeda_05, moeda_25, moeda_50, moeda_10, moeda_1;
    float total = 0, dinehiro_recebido;

    printf("\nquantidade de moedas de 0,05: "); // moeda de 5 centavos
    scanf("%f", &moeda_05);
    while (moeda_05 < 0)
    {
        printf("\nquantidade de moedas de 0,05: ");
        scanf("%f", &moeda_05);
    }

    // moeda de 10 centavos

    printf("\nquantidade de moedas de 0,10: ");
    scanf("%f", &moeda_10);
    while (moeda_10 < 0)
    {
        printf("\nquantidade de moedas de 0,10: ");
        scanf("%f", &moeda_10);
    }

    // moeda 25 centavos

    printf("\nquantidade de moedas de 0,25: ");
    scanf("%f", &moeda_25);
    while (moeda_25 < 0)
    {
        printf("\nquantidade de moedas de 0,25: ");
        scanf("%f", &moeda_25);
    }

    // moeda 50 cent

    printf("\nquantidade de moedas de 0,50: ");
    scanf("%f", &moeda_50);
    while (moeda_50 < 0)
    {
        printf("\nquantidade de moedas de 0,50: ");
        scanf("%f", &moeda_50);
    }

    // moeda 1 real

    printf("\nquantidade de moedas de 1,00: ");
    scanf("%f", &moeda_1);
    while (moeda_1 < 0)
    {
        printf("\nquantidade de moedas de 1,00: ");
        scanf("%f", &moeda_1);
    }

    total += (moeda_05 * 0.05) + (moeda_10 * 0.10) + (moeda_25 * 0.25) + (moeda_50 * 0.50) + (moeda_1);

    printf("\ntotal: %.2f", total);

    printf("\nQual o valor da compra?: "); // valor da compra
    scanf("%f", &valores_entr);

    printf("\nQual valor recebido: "); // valor do dinheiro
    scanf("%f", &dinehiro_recebido);

    if (total < dinehiro_recebido)
    {
        printf(" valor necessario para o troco: %.2f", dinehiro_recebido - total);
    }
    else
    {
        printf("\nvalor para o troco: %.2f ", total - dinehiro_recebido);
    }
}