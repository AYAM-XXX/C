#include <stdio.h>
int main()
{
    float teto, slr_bruto, acrm, valor_max, slr_lqd;
    int depnd;

    printf("salario bruto do funcionario: ");
    scanf("%f", &slr_bruto);
    while (slr_bruto <= 0)
    {
        printf("salario bruto do funcionario: ");
        scanf("%f", &slr_bruto);
    }
    printf("\nsalario  bruto maximo para fornecer o beneficio: ");
    scanf("%f", &valor_max);
    while (valor_max <= 0)
    {
        printf("\nsalario  bruto maximo para fornecer o beneficio: ");
        scanf("%f", &valor_max);
    }
    if (slr_bruto > valor_max)
    {
        printf("nao tem direito");
    }
    else
    {
        printf("quantos dependentes sao filho(a) e tem idade inferior a 14 anos: ");
        scanf("%d", &depnd);
        while (depnd < 0)
        {
            printf("quantos dependentes sao filho(a) e tem idade inferior a 14 anos: ");
            scanf("%d", &depnd);
        }
        if (depnd == 0)
        {
            printf("não tem direito");
        }
        else
        {
            if (depnd > 5)
            {
                depnd = 5;
            }
            else
            {
            }
            printf("salario teto do programa 'salario-familia': ");
            scanf("%f", &teto);
            while (teto <= 0)
            {
                printf("salario teto do programa 'salario-familia': ");
                scanf("%f", &teto);
            }
            acrm = slr_bruto * 0.02;
            slr_lqd = slr_bruto + (acrm * depnd);
            if (slr_lqd > teto)
            {
                slr_lqd = teto;
            }
            else
            {
            }    
            printf("salario do funcionario: %.2f", slr_lqd);
        }
    }
    
}