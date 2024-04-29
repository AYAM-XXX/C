// Um posto de combustíveis está realizando descontos no litro
// do combustível, conforme a tabela:
// Combustível	Quantidade de Litros	Desconto
// Álcool(1)	De 10 até  20 litros	3%
// Álcool(1)	Acima de 20 litros	5%
// Gasolina(2)	De 20 até 30 litros	7%
// Gasolina(2)	Acima de 30 litros	8%

// Você será o responsável por emitir a nota fiscal para o
// consumidor e nela deverá aparecer as seguintes informações:
// -Tipo de Combustível
// - Quantidade de litros do abastecimento
// - valor do litro sem desconto
// - valor do desconto por litro
// - valor do litro com o desconto
// - valor total da nota a ser paga pelo cliente

// O caixa do posto irá informar as informações necessárias
// para o processamento, tais como o tipo de combustível do
// abastecimento (1 – álcool e 2- gasolina), quantidade abastecida
// e o valor do litro do combustível abastecido.
// entrada: tipo , abastecimento, valor
// saida : abastecimento,valor, desc, total
#include <stdio.h>
int main()
{
    int tipo;
    float qtd_lt, valor, valor_dsc;

    printf("tipo de combustivel: ");
    scanf("%d", &tipo);
    while (tipo != 1 && tipo != 2)
    {
        printf("\ntipo de combustivel: ");
        scanf("%d", &tipo);
    }

    printf("\ntotal abastecido: ");
    scanf("%f", &qtd_lt);
    while (qtd_lt <= 0)
    {
        printf("\ntotal abastecido: ");
        scanf("%f", &qtd_lt);
    }

    printf("\nvalor lt: ");
    scanf("%f", &valor);
    while (valor <= 0)
    {
        printf("\nvalor lt: ");
        scanf("%f", &valor);
    }

    switch (tipo)
    {
    case 1:
        if (qtd_lt >= 10 || qtd_lt <= 20)
        {
            valor_dsc = valor * 0.03;
        }
        else
        {
            if (qtd_lt > 20)
            {
                valor_dsc = valor * 0.05;
            }
            else
            {
                valor_dsc = 0;
            }
        }
        printf("\nTipo de Combustível: gasolina");
        printf("\nQuantidade de litros do abastecimento: %.2f", qtd_lt);
        printf("\nvalor do litro sem desconto: %.2f", valor);
        printf("\nvalor do desconto por litro: %.2f", valor * valor_dsc);
        printf("\nvalor do litro com o desconto: %.2f", valor * (1 - valor_dsc));
        printf("\nvalor total da nota a ser paga pelo cliente: %.2f", qtd_lt * (valor * (1 - valor_dsc)));

        break;
    case 2:
        if (qtd_lt >= 20 || qtd_lt <= 30)
        {
            valor_dsc = valor * 0.07;
        }
        else
        {
            if (qtd_lt > 20)
            {
                valor_dsc = valor * 0.08;
            }
            else
            {
                valor_dsc = 0;
            }
        }
        printf("\nTipo de Combustível: gasolina");
        printf("\nQuantidade de litros do abastecimento: %.2f", qtd_lt);
        printf("\nvalor do litro sem desconto: %.2f", valor);
        printf("\nvalor do desconto por litro: %.2f", valor * valor_dsc);
        printf("\nvalor do litro com o desconto: %.2f", valor * (1 - valor_dsc));
        printf("\nvalor total da nota a ser paga pelo cliente: %.2f", qtd_lt * (valor * (1 - valor_dsc)));

        break;
    }
}
