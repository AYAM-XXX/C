#include <stdio.h>
int main()
{
    int dia, mes, ano;
    printf("\ndia: ");
    scanf("%d", &dia);
    if (dia <= 0 || dia > 31)
    {
        printf("\ndados incorretos");
    }
    else
    {
        printf("\nmes: ");
        scanf("%d", &mes);
        if (mes <= 0 || mes > 12)
        {
            printf("\ndados incorretos");
        }
        else
        {
            if (mes == 8 && dia == 31)
            {
                int proxdia = 1;
                printf("\nhoje: %d/%d/%d", dia, mes, ano);
                printf("\namanha: %d/%d/%d", proxdia, mes + 1, ano);
            }
            else
            {

                if (mes == 2 && dia > 28)
                {
                    if (ano % 4 == 0 && ano % ano == 0)// mod aqui
                    {
                        int proxdia = 1;
                        printf("\nhoje: %d/%d/%d", dia, mes, ano);
                        printf("\namanha: %d/%d/%d", proxdia, mes + 1, ano);
                    }
                    else
                    {
                        printf("\ndados incorretos");
                    }
                }
                else
                {

                    if (mes % 2 == 0 && dia > 30)
                    {
                        printf("\ndados incorretos");
                    }
                    else
                    {
                        printf("\nano: ");
                        scanf("%d", &ano);

                        if (ano <= 0)
                        {
                            printf("\ndados incorretos");
                        }
                        else
                        {
                            printf("\nhoje: %d/%d/%d", dia, mes, ano);
                            if (mes == 2 && dia == 28)
                            {
                                int proxdia = 1;
                                printf("\namanha: %d/%d/%d", proxdia, mes + 1, ano);
                            }
                            else
                            {
                                if (mes % 2 == 0 && dia == 30)
                                {
                                    int proxdia = 1;
                                    printf("\namanha: %d/%d/%d", proxdia, mes + 1, ano);
                                }
                                else
                                {
                                    if (mes % 2 != 0 && dia == 31)
                                    {
                                        int proxdia = 1;
                                        printf("\namanha: %d/%d/%d", proxdia, mes + 1, ano);
                                    }
                                    else
                                    {
                                        if (mes == 12 && dia == 30)
                                        {
                                            int proxdia = 1;
                                            printf("\namanha: %d/%d/%d", proxdia, mes - 11, ano - 11);
                                        }
                                        else
                                        {
                                            printf("\namanha: %d/%d/%d", dia + 1, mes, ano);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}