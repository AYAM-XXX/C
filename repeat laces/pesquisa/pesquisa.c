
#include<stdio.h>
int main(){
    int idade = 0,soma_idade = 0,qtd_entr = 0,qtd_pri = 0,soma_entr = 0,menu = 0,rock = 0,soma_rock,pagode = 0,soma_pagode,pop = 0,soma_pop,sertanejo = 0,soma_sertanejo;
    int validador = 1;
    int cont_idade = 0,cont_entr = 0;
    int Mpop = 0,Mrock = 0,Msertanejo = 0,Mpagode = 0;

    while(validador == 1){
        
        printf("\ninforme a idade: ");
        scanf("%d",&idade);
        if( idade == 0){
             validador = 2;
        }
        else{
            cont_entr++;
            do{
                printf("\nvoce esta indo pela primeira vez? \n1- sim \n2-nao\ndigite :");
                scanf("%d",&qtd_pri);
            } while(qtd_pri != 1 || qtd_pri != 2 );

            if(qtd_pri == 1){
                soma_idade += idade;
                cont_idade++;
            }
            while(menu != 1 || menu != 2 || menu != 3 || menu != 4  || menu != 5){
                printf("\nselecione qual o tipo preferido de msc\n1- pop\n2- rock\n3- pagode\n4- sertanejo\ndigite: ");
                scanf("%d",&menu);
             }
               
            
            switch(menu){
                case 1:
                    pop++;
                break;
                 case 2:
                    rock++;
                break;
                 case 3:
                    pagode++;
                break;
                 case 4:
                    sertanejo++;
                break;
                default:
                    printf("\n comando invalido");
                break;
            }
         
            }
              
    }
    if(pop > rock && pop > pagode && pop > sertanejo ){
                Mpop = 1;
            }
           	else
		   	{
				if(rock > pop && rock > pagode && rock > sertanejo ){
                Mrock = 1;
            	}
            	else
            	{
            	 	if(pagode > pop && pagode > rock && pagode > sertanejo ){
                	Mpagode = 1;
            		}
					else
					{
                		Msertanejo = 1;	
					}	
				}
			}      
    printf("\nquantidade de pessoas entrevistadas foi: %d",cont_entr);
    printf("\nmedia des idade das  pessoas entrevistada pela primeira ves foi: %.2f anos", (float)soma_idade/(float)cont_idade);
    if(Mpop == 1){
        printf("\nPop foi o mais votado");
    }
    if(Mrock == 1){
        printf("\nrock foi o mais votado");
    }
     if(Mpagode == 1){
        printf("\npagode foi o mais votado");
    }
     if(Msertanejo == 1){
        printf("\nsertanejo foi o mais votado");
    }
    
}
//não conseguir realizar algumas concistencia
