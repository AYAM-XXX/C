#include <stdio.h>
int horas(int h1, int m1, int h2, int m2)
{
    int soma_h = h1 - h2;
    int soma_m = m1 - m2;
    int hora;
    if (soma_h < 0) // realiza a cordenação das horas
    {
        soma_h = soma_h + 23;
    }
    else
    {
    }
    if (soma_m < 0) // realiza a cordenação dos minutos
    {
        soma_m = soma_m * -1;
        soma_h++;
    }
    else
    {
    } // concistencia para concertar os minutos
    if (soma_m < 10 || soma_m >= 0)
    {
        hora = printf("\nduracao da partida foi de : %d:0%d", soma_h, soma_m);
    }
    else
    {
        hora = printf("\nduracao da partida foi de : %d:%d horas", soma_h, soma_m);
    }
    // retorna a hora
    return hora;
}
int main()
{
    int m1, m2, h1, h2;

    printf("\ncoloque horas e minutos separadamente\nquando começou o jogo?\nhoras: ");
    scanf("%d", &h1);
    while (h1 < 0 || h1 > 23)
    {
        printf("\ncoloque horas e minutos separadamente\nquando começou o jogo?\nhoras: ");
        scanf("%d", &h1);
    }
    printf("\nminutos: ");
    scanf("%d", &m1);
    while (m1 < 0 || m1 > 59)
    {
        printf("\nminutos: ");
        scanf("%d", &m1);
    } // concistencia
    printf("\nquando terminou o jogo?\nhoras: ");
    scanf("%d", &h2);
    while (h1 < 0 || h1 > 23)
    {
        printf("\nquando terminou o jogo?\nhoras: ");
        scanf("%d", &h2);
    } // concistencia
    printf("\nminutos: ");
    scanf("%d", &m2);
    while (m1 < 0 || m1 > 59)
    {
        printf("\nminutos: ");
        scanf("%d", &m2);
    }                      // concistencia
    horas(h1, m1, h2, m2); // chama função

    //	Faça um programa que implementa uma função que recebe, por parâmetro,
    // a hora de início e a hora de término de um jogo, ambas subdivididas em 2 valores
    // distintos: horas e minutos. O procedimento deve retornar, também por parâmetro,
    // a duração do jogo em horas e minutos, considerando que o tempo máximo de duração
    // de um jogo é de 24 horas e que o jogo pode começar em um dia e terminar no outro.
}