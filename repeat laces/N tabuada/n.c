// Escrever um algoritmo que leia um valor para uma variável N de 1 a
//  10 e calcule a tabuada de N. Mostre a tabuada na forma: 0 x N = 0,
//   1 x N = 1N, 2 x N = 2N, ..., 10 x N = 10N.
#include <stdio.h>
int main()
{
    int n;
    printf("digite o valor de N:");
    scanf("%d", &n);
    while (n < 1 || n > 10)
    {
        printf("digite o valor de N:");
        scanf("%d", &n);
    }
    for (int i = 0; i <= 10; i++)
    {
        printf("\n%d x %d = %d", i, n, i*n);
    }
    
}
