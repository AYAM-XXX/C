#include<stdio.h>
int main()
{
    int mes;
    printf("insira um numero correspondente a um mes: ");
    scanf("%d", &mes);
    if(mes>>0 && mes<=12){
        switch (mes)
        {
        case 1: printf("\njaneiro\n");
        
            break;
            case 2: printf("\nfevereiro\n");
        
            break;
            case 3: printf("\nmarço\n");
        
            break;
            case 4: printf("\nabril\n");
        
            break;
            case 5: printf("\nmaio\n");
        
            break;
            case 6: printf("\njunho\n");
        
            break;
            case 7: printf("\njulho\n");
        
            break;
            case 8: printf("\nagosto\n");
        
            break;
            case 9: printf("\nsetembro\n");
        
            break;
            case 10: printf("\noutubro\n");
        
            break;
            case 11: printf("\nnovembro\n");
        
            break;
            case 12: printf("\ndezembro\n");
        
            break;
        
        default:
            break;
        }
    }
    else{
        printf("\nindique um valor correto");
    }
}
