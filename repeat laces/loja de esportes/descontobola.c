// Uma loja de materiais esportivos está realizando promoções
// de bolas. Para o cliente ter descontos deverá seguir algumas regras.
// No caixa da loja será utilizado o programa que você irá
// desenvolver. No programa aparecerá um menu para a seleção do
// tipo de bola a ser comprado:

// 1 – Pingue-pongue

// 2 – Tênis

// 3-  Vôlei

// 4 – Futebol de Salão

// 5- Futebol de Campo

//  O caixa da loja seleciona o tipo de bola e informa a quantidade
//   que está sendo comprada, assim como o valor da unidade.
//   A promoção ocorrerá nas seguintes situações:

// - Na compra de bolas de tênis, se o cliente estiver comprando
// mais de 10 unidades terá desconto de 7% no valor unitário;

// - Na compra de bolas de pingue-pongue o desconto será de 2% na
// unidade para compras de 2 até 5 unidades e de 5% quando comprar
//  mais de 10 unidades;

// - Na compra de bolas de futebol de salão e campo terá 15% de
// desconto na unidade, se as compras forem superiores a 7 unidades;

// - Ao comprar bola de vôlei terá desconto de 3% em uma unidade e
// de 5% na unidade se comprar mais de uma unidade.

// Cada cliente compra apenas um tipo de bola por vez.

// Informe o tipo de bola comprada, a quantidade, o valor unitário a
// ser pago pelo cliente e o valor total a ser pago pelo cliente.
// entrada:tipo(int), qtd(int), preçounid(float)
// saida : total (float)
#include <stdio.h>
int main()
{
    int tipo, qtd;
    float preco;

    printf("\ntipo de bola:\n1- Pingue-pongue\n2- Tenis\n3- Volei\n4- Futebol de Salao\n5- Futebol de Campo\n digite: ");
    scanf("%d", &tipo);

    while (tipo != 1 && tipo != 2 && tipo != 3 && tipo != 4 && tipo != 5)
    {
        printf("\ntipo de bola:");
        scanf("%d", &tipo);
    }

    printf("\nquantidade: ");
    scanf("%d", &qtd);
    while (qtd <= 0)
    {
        printf("\nquantidade: ");
        scanf("%d", &qtd);
    }
    printf("\nvalor und: ");
    scanf("%f", &preco);
    while (preco <= 0)
    {
        printf("\nvalor und: ");
        scanf("%f", &preco);
    }

    switch (tipo)
    {
    case 1: // ping-pongue
        // Na compra de bolas de pingue-pongue o desconto será de 2% na
        //  unidade para compras de 2 até 5 unidades e de 5% quando comprar
        //   mais de 10 unidades;
        if (qtd >= 2 && qtd <= 5)
        {
            printf("\ntipo:  ping-pongue");
            printf("\nQuantidade: %dx", qtd);
            printf("\nvalor unitario: %.2f R$", preco * 0.98);
            printf("\ntotal: %.2f R$ ", (qtd * preco) * 0.98);
        }
        else
        {
            if (qtd >= 10)
            {
                printf("\ntipo:  ping-pongue");
                printf("\nQuantidade: %dx", qtd);
                printf("\nvalor unitario: %.2f R$", preco * 0.95);
                printf("\ntotal: %.2f R$ ", (qtd * preco) * 0.95);
            }
            else
            {
                printf("\ntipo:  ping-pongue");
                printf("\nQuantidade: %dx", qtd);
                printf("\nvalor unitario: %.2f R$", preco);
                printf("\ntotal: %.2f R$ ", (qtd * preco));
            }
        }

        break;
    case 2: // tenis
        // Na compra de bolas de tênis, se o cliente estiver comprando
        //  mais de 10 unidades terá desconto de 7% no valor unitário
        if (qtd > 10)
        {
            printf("\ntipo:  bola de tenis");
            printf("\nQuantidade: %dx", qtd);
            printf("\nvalor unitario: %.2f R$", preco * 0.93);
            printf("\ntotal: %.2f R$ ", (qtd * preco) * 0.93);
        }
        else
        {
            printf("\nQuantidade: %dx", qtd);
            printf("\nvalor unitario: %.2f R$", preco);
            printf("\ntotal: %.2f R$ ", (qtd * preco));
        }

        break;
    case 3:
        // Ao comprar bola de vôlei terá desconto de 3% em uma unidade e
        //  de 5% na unidade se comprar mais de uma unidade.
        if (qtd == 1)
        {
            printf("\nQuantidade: %dx", qtd);
            printf("\nvalor unitario: %.2f R$", preco * 0.97);
            printf("\ntotal: %.2f R$ ", (qtd * preco * 0.97));
        }
        else
        {
            printf("\nQuantidade: %dx", qtd);
            printf("\nvalor unitario: %.2f R$", preco * 0.95);
            printf("\ntotal: %.2f R$ ", (qtd * preco * 0.95));
        }

        break;
    case 4: // futebol de salão

        // Na compra de bolas de futebol de salão e campo terá 15% de
        // desconto na unidade, se as compras forem superiores a 7 unidades;
        if (qtd > 7)
        {
            printf("\nQuantidade: %dx", qtd);
            printf("\nvalor unitario: %.2f R$", preco * 0.85);
            printf("\ntotal: %.2f R$ ", (qtd * preco * 0.85));
        }
        else
        {
            printf("\nQuantidade: %dx", qtd);
            printf("\nvalor unitario: %.2f R$", preco);
            printf("\ntotal: %.2f R$ ", (qtd * preco));
        }

        break;
    case 5: // futebol de campo
            // Na compra de bolas de futebol de salão e campo terá 15% de
            // desconto na unidade, se as compras forem superiores a 7 unidades;
        if (qtd > 7)
        {
            printf("\nQuantidade: %dx", qtd);
            printf("\nvalor unitario: %.2f R$", preco * 0.85);
            printf("\ntotal: %.2f R$ ", (qtd * preco * 0.85));
        }
        else
        {
            printf("\nQuantidade: %dx", qtd);
            printf("\nvalor unitario: %.2f R$", preco);
            printf("\ntotal: %.2f R$ ", (qtd * preco));
        }

        break;
    }
}