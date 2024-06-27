// Faça um programa que manipule com uma matriz 5 x 5 de inteiros.
// Leia também um valor inteiro independente. O programa
// deverá fazer uma busca à desse valor na matriz e, ao final,
// escrever a localização (linha e coluna) ou uma mensagem de
// “não encontrado

#include <stdio.h>
int main()
{
    int tam = 2;
    int matriz[tam][tam], valor, encontrado = 0;

    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            printf("digite um numero: ");
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("digite um numero de busca: ");
    scanf("%d", &valor);
    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            if (valor == matriz[i][j])
            {
                printf("\nvalor %d encontrado na posicao [%d][%d]", valor, i, j);
                encontrado = 1;
            }
            else
            {
            }
        }
    }
    if (encontrado != 1)
    {
        printf("\nvalor não encontrado");
    }
}