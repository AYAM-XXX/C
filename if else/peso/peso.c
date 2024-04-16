#include <stdio.h>
int main()
{

    float altura;
    int sexo;
    // recolhe o peso da pessoa
    printf("insira sua altura: ");
    scanf("%f", &altura);
    // define se e homem ou mulher
    printf("\n1- homem\n2-mulher\ndigite: ");
    scanf("%d", &sexo);
    // calcula o peso ideal
    if (sexo == 1)
    {
        float peso = (72.7 * altura) - 58;
        printf("\nPeso ideal: %.2f", peso);
    }
    else
    {
        float peso = (62.1 * altura) - 44.7;
        printf("\nPeso ideal: %.2f", peso);
    }
}