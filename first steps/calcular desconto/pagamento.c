#include<stdio.h>
int main()
{
    float valor;  // valor da compra 
    int pag; //pagament0o
    printf("qual o valor da compra ? ");
    scanf("%f", &valor);
    if (valor >! 0)
    {
        printf("\ndigite a forma de pagamento\n");
        printf("\n1- avista\n");
        printf("\n2- parcelado\n");
        printf("\nQual a forma de pagamento?: ");
        scanf("%d", &pag);
        switch (pag)
        {
        case 1:  printf("\nO valor da compra será %.2f", valor*0.90);
            break;
            case 2: printf("\nO valor da compra sera %.2f", valor);
            break;
        
        default:
        printf("valor incorreto, apenas 1 ou 2");
            break;
        }
    }
    else{
        printf("valor incorreto por favor preencha denovo!!!");
        
        return 0;
    }
    
}
