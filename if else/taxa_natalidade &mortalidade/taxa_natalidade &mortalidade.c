#include<stdio.h>
main()
{
   int nasc,hab,mort;//nasc é numero de nascimento | hab é numero de habitantes | mort total de mortes
 

   printf("\nQual o numero de nascimentos? ");
   scanf("%d", &nasc);
   printf("\nQual o numero de habitantes? ");
   scanf("%d", &hab);
   printf("\nQual o numero de mortes? ");
   scanf("%d", &mort);

   if (nasc >=0 && hab >= 0 && mort >= 0)
   {
    printf("\nA taxa de natalidade e %.2f\n", ((float)nasc*1000)/(float)hab);
    printf("\nA taxa de mortalidade e %.2f\n", ((float)mort*1000)/(float)hab);
   }
   else{
    printf("valores nao correspondentes, por favor coloque os valores certos ");
    
    return 0;
   }
   
}

