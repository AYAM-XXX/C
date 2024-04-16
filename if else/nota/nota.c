#include <stdio.h>
int main()
{
    float n1, n2, n3, mp, nr;

    // recolhe as notas
    printf("\ndigite a nota:");
    scanf("%f", &n1);
    printf("\ndigite a nota:");
    scanf("%f", &n2);
    printf("\ndigite a nota:");
    scanf("%f", &n3);
    // verifica recuperação
    if (n1 < 4 || n2 < 4 || n3 < 4)// se a nota de alguma prova for abaixo de 4 ja faz direto a recuperação
    {
        printf("\ndigite a nota recuperacao:");
        scanf("%f", &nr);
        float recp = ((n1 + n2 * 2 + n3 * 3) / 6 + nr) / 2;
        if (recp >= 6)
        {
            printf("\nAPROVADO");
        }
        else
        {
            printf("\nREPROVADO");
        }
    }
    else// verifica se os valores são menores que 6
    {
        mp = (n1 + n2 * 2 + n3 * 3) / 6; // mp = media ponderada
        if (mp < 6)
        {
            printf("\ndigite a nota recuperacao:");
            scanf("%f", &nr);
            float recp = ((n1 + n2 * 2 + n3 * 3) / 6 + nr) / 2;// recup = noto final da recuperação
            if (recp >= 6)
            {
                printf("\nAPROVADO");
            }
            else
            {
                printf("\nREPROVADO");
            }
        }
        else
        {
            printf("\nAPROVADO");
        }
    }
}