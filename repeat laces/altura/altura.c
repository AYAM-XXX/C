// Chico tem 1,50 metro e cresce 2 centímetros por ano,
// enquanto Zé tem 1,10 metros e cresce 3 centímetros por ano.
// Construa um algoritmo que calcule e imprima quantos anos serão
// necessários para que Zé seja maior que Chico.
#include <stdio.h>
int main()
{
    float chico = 1.50, ze = 1.10;
    int anos = 0;
    do
    {
        ze += 0.03;
        chico += 0.02;
        anos++;
    } while (chico > ze);
    printf("\ntotal de anos: %d", anos);
}