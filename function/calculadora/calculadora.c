#include <stdio.h>
int soma(int a, int b)
{
    int s = a + b;
    return s;
}// soma 
int produto(int a, int b)
{
    int s = a * b;
    return s;
}//multiplicação
int subtracao(int a, int b)
{
    int s = a - b;
    return s;
}//subtracao
float divisao(int a, int b)
{
    float s = a / b;
    return s;
}//divisao
int main()
{
    int a, b, menu = 0;
    float d;//variavel de divisão
    printf("\n1- soma\n2- multiplicacao\n3- divisao\n4- subtracao\n5- sair\n->:");
    scanf("%d", &menu);//menu 
    while (menu <= 0 || menu > 5)
        {
            printf("\n1- soma\n2- multiplicacao\n3- divisao\n4- subtracao\n5- sair\n->:");
            scanf("%d", &menu);//concistencia
        }
    while (menu != 5)
    {
        //pega os operadores que vão ser efetuados
        printf("\n--->:");
        scanf("%d", &a);
        printf("\n--->:");
        scanf("%d", &b);

        switch (menu)
        {
        case 1:
            printf("\nresultado: %d\n.....\n", a = soma(a, b));
            break;//printa o resultado da soma

        case 2:
            printf("\nresultado: %d\n.....\n", a = produto(a, b));
            break;//printa a 

        case 3:
            if (b == 0)
            {
                printf("\nnao e possivel dividir nada por 0\n.....\n");
                //concistencia da divisão por zero
            }
            else
            {
                printf("\nresultado: %f\n.....\n", d = divisao(a, b));
                 //printa divisão
            }

            break;
        case 4:

            printf("\nresultado: %d\n.....\n", a = subtracao(a, b));//subtração
            
            break;

        default:

            break;
        }
    }
}