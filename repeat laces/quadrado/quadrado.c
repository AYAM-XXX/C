// Escreva um programa que lê o tamanho do lado de um quadrado e imprime um quadrado
// daquele tamanho com asteriscos e espaços em branco. Seu programa deve funcionar para
// quadrados com lados de todos os tamanhos entre 1 e 20.
#include <stdio.h>
int main()
{
    int lado;
    printf("\nlado do quadrado: ");
    scanf("%d", &lado);
    while (lado < 1 || lado > 20)
    {
        printf("\nlado do quadrado: ");
        scanf("%d", &lado);
    }
    for (int i = 0; i <= lado; i++)
{
    
 }
        printf("\n");
       
} 
