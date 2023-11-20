#include <stdio.h>
int menu;
// contadores
int contpop = 0, controck = 0, contpagode = 0, contsertanejo = 0;
int idade, pri_vez, pri_cont = 0, cont_pessoa = 0, soma_idade = 0;
void menumsc()
{
    printf("\n\nqual estilo de musica voce prefere? \n\n1-pop\n2-rock\n3-pagode\n4-sertanejo\ndigite sua resposta: ");
    scanf("%d", &menu);
    while (menu < 1 || menu > 3)
    {
        printf("\n\nqual estilo de musica voce prefere? \n\n1-pop\n2-rock\n3-pagode\n4-sertanejo\ndigite sua resposta: ");
        scanf("%d", &menu);
    }
    switch (menu)
    {
    case 1:
        contpop++;

        break;
    case 2:
        controck++;

        break;
    case 3:
        contpagode++;

        break;
    default:
        contsertanejo++;

        break;
    }
}
void idadefun()
{
    printf("qual sua idade ?: ");
    scanf("%d", &idade);
    while (idade < 0)
    {
        printf("qual sua idade ?: ");
        scanf("%d", &idade);
    }
}

int main()
{
    idadefun();

    while (idade != 0)
    {
        printf("\nSua primeira vez que vai ao show?:\n1-sim\n2-nao\ndigite sua resposta: ");
        scanf("%d", &pri_vez);
        while (pri_vez < 1 || pri_vez > 2)
        {
            printf("\nSua primeira vez que vai ao show?:\n1-sim\n2-nao\ndigite sua resposta: ");
            scanf("%d", &pri_vez);
        }

        if (pri_vez == 1)
        {
            soma_idade += idade;
            pri_cont++;
            menumsc();
        }
        else
        {
            menumsc();
        }
        cont_pessoa++;
        idadefun();
    }
    if (contpop > controck && contpop > contpagode && contpop > contsertanejo)
    {
        printf("\npop e o estilo de musica mais votado");
    }
    else
    {
        if (controck > contpop && controck > contpagode && controck > contsertanejo)
        {
            printf("\nrock e o estilo de musica mais votado");
        }
        else
        {
            if (contpagode > contpop && contpagode > controck && contpagode > contsertanejo)
            {
                printf("\npagode e o estilo de musica mais votado");
            }
            else
            {
                printf("\nsertanejo e o mais votado");
            }
        }
    }
    printf("\no total de pessoas entrevistadas sao: %d", cont_pessoa);
    printf("\no total de pessoas entrevistadas sao: %.2f", (float)soma_idade / (float)pri_cont);
}