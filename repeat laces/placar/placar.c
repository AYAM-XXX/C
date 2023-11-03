#include<stdio.h>
 main()
{
    //entradas
    int time = 34;
    int num_vitorias = 0;
    int num_derrotas = 0;
    int num_empates = 0;
    int num_gols = 0;
    int num_gols_sofridos = 0;
    int num_exp = 0;

     //saidas
    int max_vitorias = 0;
    int max_derrotas = 0; 
    float med_exp = 0; 
    // sempre definir o valor da variaveis antes entra no laço de repetição

    for(int i=1;i<=time;i++){

        printf("\nqual o numero de vitorias do time %d ? ", i);
        scanf("%d", &num_vitorias);

        if(num_vitorias > max_vitorias){
            max_vitorias = num_vitorias;
        }

         printf("qual o numero de derrotas do time %d? ", i);
        scanf("%d", &num_derrotas);
        if(num_derrotas > max_derrotas){
            max_derrotas = num_derrotas;
        }

         printf("\nqual o numero de empates do time %d? ", i);
        scanf("%d", &num_empates);

         printf("\nqual o numero de gols do time %d? ", i);
        scanf("%d", &num_gols);

         printf("\nqual o numero de gols sofrido do time %d? ", i);
        scanf("%d", &num_gols_sofridos);

        printf("\nqual o numero de expulsao %d? ", i);
        scanf("%d", &num_exp);

        if (num_exp >= 3)
        {
          num_exp++;
        }
        if (num_gols >= num_gols_sofridos)
       {
        printf("\nA media de gols do time %d: %d gols", i, num_gols - num_gols_sofridos);
       } else{
         printf("\nA media de gols do time %d: %d gols tomados", i, (num_gols - num_gols_sofridos)*-1);
       }
    


    }
     med_exp = num_exp - time;
   
    printf("\nO maior numero de vitorias e %d\n", max_vitorias);
    printf("\nO maior numero de derrotas e %d\n", max_derrotas);
    printf("\nMedia de expulsão e %.2f\n",(med_exp/(float)time)*100);
        return 0;
}
