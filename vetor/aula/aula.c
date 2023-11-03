#include <stdio.h>
int main(){
    float pac [10][3];
    int i,j;
    for(i = 0;i < 10;i++){
         j = 0;
        scanf("%f",&pac[i][j]);
        j++;
        scanf("%f",&pac[i][j]);
        j++;
         pac[i][j]=((pac[i][0])/(pac[i][1]*pac[i][1]));
    }
       
    for(i = 0; i< 10;i++)
    {
        for(j = 0; j<3;j++)
        {

            printf("\npac[%d][%d]=%f",i,j,pac[i][j]);
        }
    }
    }
    
