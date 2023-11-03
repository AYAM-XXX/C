
#include<stdio.h>
int main(){
    int data_nasc [3];
    char sexo [3];
    float peso [3];
    int menu;
    int cod_ave[3],cont_code = 0;
    float media;
    int cont = 0;
   int cont_femea = 0;
    int i;
    while(1){
    // resetador de memoria de vetores e variaveis
    for( i = 0; i < 3 ;i++){
        data_nasc[i] = 0;
        peso [i] = 0;
        menu = 0;
    }
    
    //menu
     printf("\nMENU\n");
     printf("\n1- Cadastramento da ave\n");
     printf("\n2- Peso medio dos perus da granja");
     printf("\n3- Quantidade de perus femeas");
     printf("\n4- codigo da ave ou aves que nasceram em 0407");
     printf("\n5- fim");
     printf("\ndigite o numero: ");
     scanf("%d",&menu);

    switch(menu){

        case 1 :
//dados dos perus 
    for(i = 0;i < 3;i++) {
        printf("\ninsira os dados do peru codigo: %d\n",i);
        while( data_nasc[i] < 0101 ){
            printf("\ndata de nascimento:");
            scanf("%d", &data_nasc[i]);
            if(data_nasc[i] == 0407){
                
                  cod_ave[i] = i;
                  cont_code++;
                
            }
        }
        do{
            printf("\npeso do peru:");
            scanf("%f", &peso[i]);
              media += peso[i];
                if(peso[i] > 0)
                {
                     cont++;
                }
        }while( peso[i] < 0);

        do{
            printf("\ninforme o sexo 'F' para femea e 'M' para macho: ");
            scanf("%c", &sexo[i]);
            if(sexo[i] == 'F'){
                cont_femea++;
            }
        }while( sexo[i] != 'M' && sexo[i] != 'F');
    }
         break; 

         case 2:
        
             printf("\nA media do peso dos peru e :%.2f", media/cont);
         break;
         case 3:
         printf("A quantidade total de femea e %d",cont_femea);
         break;
         case 4 :
          printf("codigo da ave ou aves que nasceram em 0407 foi:");
          for( i = 0;i < cont_code;i++){
            printf("\nAve:\n%d\n",cod_ave[i]);
          }
         break;

         case 5:
            return 0;
         break;

    }

    
    }
    
    for(i = 0; i < 3;i++){
     printf("\ndata de nascimento:%d", data_nasc[i]);
     printf("\ndata de nascimento:%f", peso[i]);
     printf("\ndata de nascimento:%d", sexo[i]);
     }
     //não consegui fazer corretamente o menu 4

}