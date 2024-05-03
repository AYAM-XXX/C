// Faça um programa que leia 10 valores reais e os apresente na ordem
//  inversa entrada.

#include <stdio.h>
int main(){
    int valor[10];

    for (int i = 0; i < 10; i++)
    {
        printf("\ndigite o valor: ");
        scanf("%d", &valor[i]);

    }
    printf("\ninverso: ");
    for (int i = 9; i > 0; i--)
    {
        printf("[%d] ", valor[i]);
    }
}
