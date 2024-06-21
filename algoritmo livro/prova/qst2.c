#include <stdio.h>
int main()
{
    int qtd_cmd;
    float comp, larg, total = 0, gasto, total_gasto = 0, ceramica, total_ceramica;
    printf("informe a quantidade total de comodos da casa: ");
    scanf("%d", &qtd_cmd);
    while (qtd_cmd <= 0)
    {
        printf("informe a quantidade total de comodos da casa: ");
        scanf("%d", &qtd_cmd);
    }
    for (int i = 0; i < qtd_cmd; i++)
    {
        printf("informe o comprimento do comodo %d: ", i+1);
        scanf("%f", &comp);
        while (comp <= 0)
        {
            printf("informe o comprimento comodo %d: ", i+1);
            scanf("%f", &comp);
        }
        printf("informe a largura do comodo %d: ", i+1);
        scanf("%f", &larg);
        while (larg <= 0)
        {
            printf("informe a largura do comodo %d: ", i+1);
            scanf("%f", &larg);
        }
        total += larg * comp;

    }
        printf("informe o comprimento da ceramica: ");
        scanf("%f", &comp);
        while (comp <= 0)
        {
            printf("informe o comprimento da ceramica: ");
            scanf("%f", &comp);
        }
        printf("informe a largura da ceramica: ");
        scanf("%f", &larg);
        while (larg <= 0)
        {
            printf("informe a largura da ceramica: ");
            scanf("%f", &larg);
        }

        ceramica = larg * comp;
        total_ceramica = total / ceramica;

        printf("preço da ceramica: ");
        scanf("%f", &gasto);
        while (gasto <= 0)
        {
            printf("preço da ceramica: ");
            scanf("%f", &gasto);
        }
        total_gasto += gasto * total_ceramica;
        printf("\ntotal area: %.2f", total);
        printf("\ntotal de ceramica utilizadas: %.2f", total_ceramica);
        printf("\ntotal gasto em ceramica: %.2f", total_gasto);
}