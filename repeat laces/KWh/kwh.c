//  Escreva um programa que leia o número de habitantes de uma determinada cidade,
//  o valor do kwh e, para cada habitante, entre com os dados: consumo do mês e o código
//  do consumidor (1: residencial, 2: comercial, 3: industrial). No nal, imprima o maior,
//  o menor e a média de consumo dos habitantes e, por m, o total de consumo de cada
//  categoria de consumidor.

#include <stdio.h>
int main()
{
    int hab = 0;
    float cons, kwh, maior = 0, menor = 0, somars, somacm, somaind, soma = 0;
    int cliente;

    printf("\nvalor do KWh: ");
    scanf("%f", &kwh);
    while (kwh < 0)
    {
        printf("\nvalor do KWh: ");
        scanf("%f", &kwh);
    }
    printf("\nvalor do consumo: ");
    scanf("%f", &cons);
    while (cons < 0)
    {
        printf("\nvalor do consumo: ");
        scanf("%f", &cons);
    }
    // quando o consumo for 0  o progama fecha
    while (cons != 0)
    {
        if (hab == 0)// se os habitantes for 0 o maior e menor recebe o valor do primeiro comsumo
        {
            maior = cons;
            menor = cons;
        }
        else
        {
            if (maior < cons)// verifica quais os maiores
            {
                maior = cons;
            }
            else
            {
            }
            if (menor > cons)// verifica os menores
            {
                menor = cons;
            }
            else
            {
            }
        }
        soma += cons;// soma todos os consumos para calcular a media no final

        printf("\ntipo de cliente:\n1- residencial\n2-comercial\n3-industrial\ndigite: ");
        scanf("%d", &cliente);// oferece para escolher  um tipo de cliente
        while (cliente < 1 || cliente > 3)
        {
            printf("\ntipo de cliente:\n1- residencial\n2-comercial\n3-industrial\n digite: ");
            scanf("%d", &cliente);
        }
        switch (cliente) // faz a soma total de cada tipo cliente
        {
        case 1:
            somars += cons;
            break;
        case 2:
            somacm += cons;
            break;
        case 3:
            somaind += cons;
            break;

        default:
            break;
        }

        hab++;// calcula os habitantes

        printf("\nvalor do consumo: ");// pega os dados de volta
        scanf("%f", &cons); 
        while (cons < 0)// concistencia
        {
            printf("\nvalor do consumo: ");
            scanf("%f", &cons);
        }
    }
    printf("\nmaior consumo:%.2f\nmenor consumo:%.2f\nmedia de consumo:%.2f", maior, menor, soma / (float)hab);
    printf("\ntotal residencia: %.2f\ntotal comercio: %.2f\ntotal industria: %.2f", somars, somacm, somaind);
    return 0;
}