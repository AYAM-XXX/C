#include <stdio.h>
int main()
{
    int original[5][5];
    int i, j, cont = 0;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("\nqual o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &original[i][j]);
            while (original[i][j] < 0)
            {
                printf("\nqual o valor da posicao [%d][%d]: ", i, j);
                scanf("%d", &original[i][j]);
            }
             if(i == 0 && j == 4){
                if(original [i][j] > 20){
                cont++;
                }
                else{}
            }
            else{}
            if(i == 1 && j == 3){
                if(original [i][j] > 20){
                cont++;
                }
                else{}
            }
            else{}
            if(i == 2 && j == 2){
                if(original [i][j] > 20){
                cont++;
                }
                else{}
            }
            else{}
            if(i == 3 && j == 1){
                if(original [i][j] > 20){
                cont++;
                }
                else{}
            }
            else{}
            if(i == 4 && j == 0){
                if(original [i][j] > 20){
                cont++;
                }
                else{}
            }
            else{}
        }
    }
    printf("\nsão maiore que 20 na diagonal secundaria:%d ", cont);
}
// Elabore um programa que manipule com uma matriz 5 x 5 de inteiros, posteriormente conte quantos elementos da diagonal secundária são maiores que 20.