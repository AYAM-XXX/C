// Um fazendeiro deseja controlar o peso de seu pequeno
// rebanho de cabras, assim ele irá por 3 meses pesar
// cada um de seus 10 animais e registar o peso de
// cada um. Você irá criar um programa que possibilite
// estes registros mensais para as 10 cabras. O programa
// irá mostrar para cada animal a perda ou ganho de pesos
// nos três meses e identificar em qual mês o animal teve o
// maior peso. Informe, também, o peso total do rebanho no
// último mês e o valor da diferença entre o primeiro mês e o
// último mês do registro.
#include <stdio.h>
int main()
{
    float mes_1[10], mes_2[10], mes_3[10], maiorpeso[10], pesomes_1 = 0, pesomes_3 = 0;
    int tam = 10;
    for (int i = 0; i < tam; i++)
    {
        printf("\nprimeiro mes\ndigite o peso da cabra [%d]: ", i + 1);
        scanf("%f", &mes_1[i]);
        while (mes_1[i] <= 0)
        {
            printf("\nprimeiro mes\ndigite o peso da cabra [%d] CORRETAMENTE: ", i + 1);
            scanf("%f", &mes_1[i]);
        }
        pesomes_1 += mes_1[i];

        printf("\nsegundo mes\ndigite o peso da cabra [%d]: ", i + 1);
        scanf("%f", &mes_2[i]);
        while (mes_2[i] <= 0)
        {
            printf("\nsegundo mes\ndigite o peso da cabra [%d] CORRETAMENTE: ", i + 1);
            scanf("%f", &mes_2[i]);
        }

        printf("\nterceiro mes\ndigite o peso da cabra [%d]: ", i + 1);
        scanf("%f", &mes_3[i]);
        while (mes_3[i] <= 0)
        {
            printf("\nterceiro mes\ndigite o peso da cabra [%d] CORRETAMENTE: ", i + 1);
            scanf("%f", &mes_3[i]);
        }
        pesomes_3 += mes_3[i];
    }

    for (int i = 0; i < tam; i++)
    {
        maiorpeso[i] = mes_1[i];
        if (maiorpeso[i] < mes_2[i])
        {
            maiorpeso[i] = mes_2[i];
        }
        else
        {
        }
        if (maiorpeso[i] < mes_3[i])
        {
            maiorpeso[i] = mes_3[i];
        }
        else
        {
        }
    }
    for (int i = 0; i < tam; i++){
        printf("\n<===========cabra[%d]====================>", i + 1);
        printf("\nprimeiro mes: %.2f kg\nsegundo mes: %.2f kg\nterceiro mes: %.2f kg", mes_1[i], mes_2[i], mes_3[i]);
        printf("\nmaior peso: %.2f", maiorpeso[i]);
        printf("\ndiferenca do primeiro mes ao segundo: %.2fkg",   mes_2[i] - mes_1[i]);
        printf("\ndiferenca do segundo mes ao terceiro: %.2fkg",  mes_3[i] - mes_2[i]);
        printf("\n<===========================================>\n");
    }
    printf("\n------------------------------------\n");
    printf("\npeso total terceiro mes: %.2f kg", pesomes_3);
    printf("\ndiferenca total terceiro mes em relacao ao segundo: %.2f kg",  pesomes_3 - pesomes_1);
}