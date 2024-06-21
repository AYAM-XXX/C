#include <stdio.h>
int main()
{
    int nmr_ap, cand_1 = 0, cand_2 = 0, cand_3 = 0, nulo = 0, branco = 0, cont = 0, voto;
    printf("numero do apartamento: ");
    scanf("%d", &nmr_ap);
    while (nmr_ap < 0)
    {
        printf("\ndigite o numero do apartamento corretamente: ");
        scanf("%d", &nmr_ap);
    }

    while (nmr_ap != 0)
    {
        cont++; // contabiliza voto
        printf("\n1- Votar no  candidato 1\n2- Votar no  candidato 2\n3- Votar no  candidato 3\n4- Votar em branco\n5- Votar nulo\ndigite seu voto: ");
        scanf("%d", &voto);
        while (voto < 1 || voto > 5)
        {
            printf("\n1- Votar no  candidato 1\n2- Votar no  candidato 2\n3- Votar no  candidato 3\n4- Votar em branco\n5- Votar nulo\ndigite seu voto: ");
            scanf("%d", &voto);
        }
        switch (voto)
        {
        case 1:
            cand_1++;
            break;
        case 2:
            cand_2++;
            break;
        case 3:
            cand_3++;
            break;
        case 4:
            branco++;
            break;
        case 5:
            nulo++;
            break;
        }
        printf("numero do apartamento: ");
        scanf("%d", &nmr_ap);
        while (nmr_ap < 0)
        {
            printf("\ndigite o numero do apartamento corretamente: ");
            scanf("%d", &nmr_ap);
        }
    }
    printf("votantes totais: %d", cont);
    if (cand_1 > cand_2 && cand_1 > cand_3 && cand_1 > nulo && cand_1 > branco)
    {
        printf("\ncandidado 1 venceu!!!\ntotal votos vencedor: %d", cand_1);
    }
    else
    {
        if (cand_2 > cand_1 && cand_2 > cand_3 && cand_2 > nulo && cand_2 > branco)
        {
            printf("\ncandidado 2 venceu!!!\ntotal votos vencedor: %d", cand_2);
        }
        else
        {
            if (cand_3 > cand_1 && cand_3 > cand_2 && cand_3 > nulo && cand_3 > branco)
            {
                printf("\ncandidado 3 venceu!!!\ntotal votos vencedor: %d", cand_2);
            }
            else
            {
            }
        }
    } //
    printf("\ntotal de votos em branco: %d", branco);
    printf("\ntotal de votos nulos: %d", nulo);
    printf("\npercentual de votos brancos: %.2f porcento", ((float)branco / (float)cont) * 100);
    if (cand_1 < cand_2 && cand_1 < cand_3 && cand_1 < nulo && cand_1 < branco)
    {
        printf("\nCanditado 1 teve menor voto!!\ntotal de votos: : %d", cand_1);
    }
    else
    {
        if (cand_2 < cand_1 && cand_2 < cand_3 && cand_2 < nulo && cand_2 < branco)
        {
            printf("\nCanditado 2 teve menor voto!!\ntotal de votos: : %d", cand_1);
        }
        else
        {
            printf("\nCanditado 3 teve menor voto!!\ntotal de votos: : %d", cand_1);
        }
    }
}

