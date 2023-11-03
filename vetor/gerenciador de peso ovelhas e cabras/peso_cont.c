#include<stdio.h>
int main(int argc, char const *argv[])
{
    float peso_m1[10];
    float peso_m2[10];
    float peso_m3[10];
    float diferenca_1;
    float diferenca_2;
    float diferenca_total;
    float peso_total;
    float peso_total_2;
    int i;
    printf("\ndigite o peso dos cabrito fela\n");
    for( i = 0; i < 10;i++){
      printf("\ndigite o peso do cabrito %d\n" ,i+1);
     
      printf("\npeso do primeiro mes: ");
      scanf("%f", &peso_m1[i]);
      printf("\npeso do segundo mes: ");
      scanf("%f", &peso_m2[i]);
      printf("\npeso do terceiro mes: ");
      scanf("%f", &peso_m3[i]);         
    }
    printf("\ndiferença de peso\n");
    for ( i = 0; i < 10; i++)
    {
        diferenca_1 = peso_m2[i]-peso_m1[i];
        diferenca_2 = peso_m3[i]-peso_m2[i];
        diferenca_total = diferenca_1+diferenca_2;

         printf("\nControle de peso  da cabra %d\n", i+1);
         if (diferenca_1 > 0)
         {  
            printf("\nganho de peso do primeiro mes para o segundo da cabra %d foi: %.2f kg", i+1 ,diferenca_1);
            
            
         }else if(diferenca_1 < 0){
           printf("\nperda de peso do primeiro mes para o segundo da cabra %d foi: %.2f kg", i+1 ,diferenca_1*-1);
         }
         if (diferenca_2 > 0)
         {
            printf("\nganho de peso do primeiro mes para o segundo da cabra %d foi: %.2f kg", i+1 ,diferenca_2);
         }else if(diferenca_2 < 0){
           printf("\nperda de peso do primeiro mes para o segundo da cabra %d foi: %.2f kg", i+1 ,diferenca_2*-1);
         }
          if (diferenca_total > 0)
         {
            printf("\nganho de peso total da cabra %d foi: %.2f kg", i+1 ,diferenca_total);
         }else if(diferenca_total < 0){
           printf("\nperda de peso total da cabra %d foi: %.2f kg\n", i+1 ,diferenca_total*-1);
         }
         if (peso_m1[i] > peso_m2[i] && peso_m1[i] > peso_m3[i])
            {
                printf("\nO primeiro mes foi o que a cabra %d teve o maior peso\n", i+1);
            }
            else if (peso_m2[i] > peso_m1[i] && peso_m2[i] > peso_m3[i])
            {
                printf("\nO segundo mes foi o que a cabra %d teve o maior peso\n", i+1);
            }
            else{
            
                printf("\nO terceiro mes foi o que a cabra %d teve o maior peso\n", i+1);
            }
         printf("\n");
         
    }
    for (int i = 0; i < 10; i++)
    {
      peso_total += peso_m3[i];
      peso_total_2 += peso_m1[i];
    }
    
         
    
    printf("\nControle de peso do rebanho\n");
    printf("\npeso total do rebanho no terceiro mes %.2f", peso_total);
    printf("\ndiferenca de peso do rebanho no terceiro mes para o primeiro %.2f", peso_total-peso_total_2);
    
    
    return 0;
}

