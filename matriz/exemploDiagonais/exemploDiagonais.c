#include <stdio.h>

int main()
{
    int tam = 3;
    int original[tam][tam];
    
    int i, j;
    for (i = 0; i < tam; i++)
    {
        for (j = 0; j < tam; j++)
        {
            printf("\n qual o valor do indice [%d][%d]", i, j);
            scanf("%d", &original[i][j]);
        }
    }
    printf("\n\n MATRIZ PRINCIPAL:\n\n");
    for (i = 0; i < tam; i++)
    {
        for (j = 0; j < tam; j++)
        {
           
                printf("[%d]  ",original[i][j]);
               
            
        }
        printf("\n");
    }
    printf("\n\nMATRIZ ABAIXO DA DIAGONAL PRINCIPAL:\n\n");
    for (i = 0; i < tam; i++)
    {
        for (j = 0; j < tam; j++)
        {
            if( i > j){// linha maior que coluna
                printf("[%d]  ",original[i][j]);
            }
            else{
            printf("*    ");
            }
            
        }
        printf("\n\n");
    }
    printf("\n\nMATRIZ ACIMA DA DIAGONAL PRINCIPAL:\n\n");
    for (i = 0; i < tam; i++)
    {
        for (j = 0; j < tam; j++)
        {
            if( i < j){// linha menor que coluna
                printf("[%d]  ",original[i][j]);
            }
            else{
            printf("*    ");
            }
            
        }
        printf("\n\n");
    }
    printf("\n\nMATRIZ ACIMA DA DIAGONAL SECUNDARIA:\n\n");
   for (i = 0; i < tam; i++)
    {    
        for (j = 0; j < tam; j++)
        {
          if( i + j < tam-1){ // linha + coluna menor tamanho da matriz menos 1
                printf("[%d]  ",original[i][j]);
                }
                else{
                    printf("*    ");
                }
            
        }
        printf("\n\n");
        
    }
    printf("\n\nMATRIZ ABAIXO DA DIAGONAL SECUNDARIA:\n\n");
    for (i = 0; i < tam; i++)
    {    
        for (j = 0; j < tam; j++)
        {
          if( i + j > tam-1){// linha + coluna maior tamanho da matriz menos 1
                printf("[%d]  ",original[i][j]);
                }
                else{
                    printf("*   ");
                }
            
        }
        printf("\n\n");
        
    }
    printf("\n\n DIAGONAL SECUNDARIA:\n\n");
    for (i = 0; i < tam; i++)
    {    
        for (j = 0; j < tam; j++)
        {
          if( i + j == tam-1){
                printf("[%d]  ",original[i][j]);
                }
                else{
                    printf("*   ");
                }
            
        }
        printf("\n\n");
        
    }
    printf("\n\n DIAGONAL PRINCIPAL:\n\n");
    for (i = 0; i < tam; i++)
    {    
        for (j = 0; j < tam; j++)
        {
          if( i==j){
                printf("[%d]  ",original[i][j]);
                }
                else{
                    printf("*   ");
                }
            
        }
        printf("\n\n");
        
    }
    printf("\n\nACIMA DA DIAGONAL SECUNDARIA");
    for(i = 0; i < tam; i++)
    {    
        for (j = 0; j < tam -i; j++)
        {
           printf("[%d]  ",original[i][j]);    
        }
        printf("\n\n");
        
    }
    printf("\n\nABAIXO DA DIAGONAL SECUNDARIA");
    for(i = 0; i < tam; i++)
    {    
        for (j = tam -i; j < tam ; j++)
        {
           printf("[%d]  ",original[i][j]);    
        }
        printf("\n\n");
        
    }
      printf("\n\n DIAGONAL SECUNDARIA");
    for(i = 0; i < tam; i++)
    {    
      
       printf("[%d]  ",original[i][tam-i-1]);
        
    }
   
}