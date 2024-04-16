#include <stdio.h>
int main()
{
    float laranja;
    int qtd;
    // pergunta o preço das laranjas
    printf("\nquatidade de laranja compradas: ");
    scanf("%d", &qtd);
    // calcula o valor de acordo com a quantidade, verifica se o valor comprado e maior do que 0
    if (qtd > 0)
    {
        //valor 
        if (qtd >= 10)
        {
            laranja = 0.25;
            printf("\nvalor tortal: %.2f", (float)qtd * laranja);
        }
        else
        {
            laranja = 0.30;
            printf("\nvalor total:%.2f", (float)qtd * laranja);
        }
    }
    else
    {

        printf("\nvalor incorreto");
    }
}