#include<stdio.h>
int main(int argc, char const *argv[])
{
     float salario[5];
     int i;
     int validador;
     int verificar_aumento;
     float total_salario;
     

     for(int i = 0; i < 5; i++){

        do{
            printf("qual o salario do mes %d? ", i+1);
            scanf("%f", &salario[i]);
        }while(salario[i] < validador);
                                

             validador=salario[i];
       
     }

    for(int i = 0; i < 5; i++){
        printf("\nsalario do mes %d foi : %.2f R$\n", i+1, salario[i]); 
        
                         }
            printf("\n|meses de aumento|\n");
     for(i = 0; i < 5; i++){
        if(salario[i] > verificar_aumento){
            printf("\nteve aumento no mes: %d",i+1);
        }
        verificar_aumento=salario[i];
        total_salario += salario[i];

        }
        printf("\nsalario total %.3f",total_salario);
    return 0;
}
