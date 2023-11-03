#include<stdio.h>

int main() {
   int original[7];
   int i;
  // ler valores maior que 10
  printf("digite um numero maior que 10\n");
  for(i = 0; i < 7;i++){
    do
    {
        printf("\ndigite o valor: ");
        scanf("%d", &original[i]);
    } while (original[i] < 10);
    //vetor com os elementos ímpares do vetor original
  }
  int impar[7];
  int cont = 0;
  for ( i = 0; i < 7; i++)
  {
    if (original[i] % 2 != 0)
    {
        impar[cont]=original[i];
        cont++;

    }
  }
  printf("vetor original: \n");
  for ( i = 0; i < 7; i++)
  {
    printf("\n%d",original[i]);
  }
  printf("\nvetor impar: \n");
  for ( i = 0; i < cont; i++)
  {
    printf("\n%d",impar[i]);
  }
  
  
    return 0;
}