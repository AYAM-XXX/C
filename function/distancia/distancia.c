#include <stdio.h>
#include <math.h>

float distancia(float x1, float y1, float x2, float y2)
{
    float res;

    res = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    return res;
} // equação para retornar os valores da distancia

int main()
{
    float x1, y1, x2, y2, resultado;

    printf("\nqual o valor de x1?: ");
    scanf("%f", &x1);
    while (x1 < 0)
    {
        printf("\nqual o valor de x1?: ");
        scanf("%f", &x1);
    } // pega o valor de x1

    printf("\nqual o valor de y1?: ");
    scanf("%f", &y1);
    while (y1 < 0)
    {
        printf("\nqual o valor de y1?: ");
        scanf("%f", &y1);
    } // pega o valor de y1

    printf("\nqual o valor de x2?: ");
    scanf("%f", &x2);
    while (x2 < 0)
    {
        printf("\nqual o valor de x2?: ");
        scanf("%f", &x2);
    } // pega o valor de x2

    printf("\nqual o valor de y2?: ");
    scanf("%f", &y2);
    while (y2 < 0)
    {
        printf("\nqual o valor de y2?: ");
        scanf("%f", &y2);
    } // pega o valor de y2

    resultado = distancia(x1, y1, x2, y2); // recebe a função

    printf("\nA distancia entre os dois pontos e %.2f metros", resultado); // printa o resultado
}
