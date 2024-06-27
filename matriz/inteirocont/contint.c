// Elabore um programa que manipule com uma matriz 4 x 4 de
// inteiros, conte e escreva quantos valores maiores que 10
// ela possui.

#include <stdio.h>
int main()
{
    int matriz[4][4];
    int cont = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("digite um numero: ");
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j] > 10)
            {
                cont++;
            }
            else
            {
            }
            
        }
    }
    printf("existem %d valores maiores que 10", cont);
}
