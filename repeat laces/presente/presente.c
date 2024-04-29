// Para comprar um presente para o dia das mães,
// uma criança guardou durante 1 ano valores referentes
// ao troco da merenda da escola.Você foi convidado a desenvolver
// um programa para gerenciar as economias da criança,que armazena
// cada moeda economizada em um cofrinho.Na véspera do dia das
// mães a criança combinou com o pai que irá quebrar o cofrinho e
// ambos sairão para comprar o presente.Ao quebrar o cofrinho
// serão contabilizadas as moedas armazenadas,
// assim definindo ovalor economizado.Sabe -se que as moedas do
//  cofrinho podem ser dos seguintes valores : R$ 0,05;R$ 0, 10;R$ 0,25; R$ 0,50 e
// R$ 1,00. Você deverá informar até qual valor poderá ser o
// resente e perguntar se deseja comprar algo mais caro. Se a
// criança informar que deseja comprar algo mais caro,
// o programa deve solicitar qual o valor do presente (valide se ele
// é realmente maior que o valor do cofrinho,e não for emita mensagem
// adequada). O programa deverá informar qual valor que a criança
// deverá solicitar ao pai para conseguir comprar o presente desejado
// , claroque ela continuará utilizando o valor do cofre nesta situação também.
// entrada: moeda(0.5;0.10;0.25;0.50;1.0),dia
// saida: total

// ver se tem algo mais caro
// entrada: valor,
// saida: sub_valor

#include <stdio.h>
int main()
{
    float moeda, total = 0;
    int dia, mais_caro;
    float valor;

    printf("\nhoje e vespera:\n1-sim\n2-nao ");
    scanf("%d", &dia);
    while (dia != 1 && dia != 2)
    {
        printf("\nhoje e vespera:\n1-sim\n2-nao ");
        scanf("%d", &dia);
    }

    while (dia != 1)
    {
        printf("\nvalor da moeda: ");
        scanf("%f", &moeda);
        while (moeda != 0.05 && moeda != 0.10 && moeda != 0.25 && moeda != 0.50 && moeda != 1)
        {
            printf("valor da moeda: ");
            scanf("%f", &moeda);
        }
        total += moeda;

        printf("\nhoje e vespera:\n1-sim\n2-nao ");
        scanf("%d", &dia);
        while (dia != 1 && dia != 2)
        {
            printf("\nhoje e vespera:\n1-sim\n2-nao ");
            scanf("%d", &dia);
        }
    }
    printf("deseja comprar algo mais car0:\n1-sim\n2-nao");
    scanf("%d", &mais_caro);

    while (mais_caro != 1 && mais_caro != 2)
    {
        printf("deseja comprar algo mais car0:\n1-sim\n2-nao");
        scanf("%d", &mais_caro);
    }

    if (mais_caro == 1)
    {
        printf("\nqual o valor do produto:");
        scanf("%f", &valor);
        while (valor < total)
        {
            printf("\nqual o valor do produto:");
            scanf("%f", &valor);
        }
        printf("total: %.2f\nvalor que deve ter: %.2f", total, valor - total);
    }
    else
    {
        printf("total: %.2f", total);
    }
    
}
