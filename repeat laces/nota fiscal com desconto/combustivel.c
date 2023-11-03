#include<stdio.h>
main(){
    float valor_lt,total_lt,preco; // valor_lt==valor da gasolina // total_lt total abastecido
    int tp_cbst;// tipo do combustivel 

    printf("\nqual o valor do litro de combustivel hoje? ");
    scanf("%f", &valor_lt);      
    printf("\nquantos litros foram abastecidos? ");
    scanf("%f", &total_lt);         
    preco=valor_lt*total_lt;
     
    printf("informe o tipo de combustivel\n");
    printf("\n1-alcool\n");
    printf("\n2-gasolina\n");
    printf("\nqual o tipo de combustivel? ");
    scanf("%d", &tp_cbst);

    if (tp_cbst == 1 && total_lt >= 10 && total_lt <= 20)
    {
     printf("\nTipo de combustivel: Alcool\n");
     printf("\nquantidade de litros abastecido:%.2f\n", total_lt);
     printf("\nvalor do litro sem desconto:%.2f\n", valor_lt);
     printf("\nvalor do litro com desconto:%.2f\n", valor_lt*0.97);
     printf("\nvalor do desconto por litro: 3 porcento\n");
     printf("\nvalor total sem desconto:%.2f\n", preco);  
     printf("\nvalor total a pagar com desconto:%.2f\n", preco*0.97);  
    }
     if (tp_cbst == 1 && total_lt >= 20)
    {
     printf("\nTipo de combustivel: Alcool\n");
     printf("\nquantidade de litros abastecido:%.2f\n", total_lt);
     printf("\nvalor do litro sem desconto:%.2f\n", valor_lt);
     printf("\nvalor do litro com desconto:%.2f\n", valor_lt*0.95);
     printf("\nvalor do desconto por litro: 5 porcento\n");
     printf("\nvalor total sem desconto:%.2f\n", preco);  
     printf("\nvalor total a pagar com desconto:%.2f\n", preco*0.95); 
    }
     if (tp_cbst == 2 && total_lt >= 20 && total_lt <= 30)
    {
     printf("\nTipo de combustivel: gasolina\n");
     printf("\nquantidade de litros abastecido:%.2f\n", total_lt);
     printf("\nvalor do litro sem desconto:%.2f\n", valor_lt);
     printf("\nvalor do litro com desconto:%.2f\n", valor_lt*0.93);
     printf("\nvalor do desconto por litro: 7 porcento\n");
      printf("\nvalor total sem desconto:%.2f\n", preco);  
     printf("\nvalor total a pagar com desconto:%.2f\n", preco*0.93);  
    }
    if (tp_cbst == 2 && total_lt >= 30)
    {
     printf("\nTipo de combustivel: gasolina\n");
     printf("\nquantidade de litros abastecido:%.2f\n", total_lt);
     printf("\nvalor do litro sem desconto:%.2f\n", valor_lt);
     printf("\nvalor do litro com desconto:%.2f\n", valor_lt*0.92);
     printf("\nvalor do desconto por litro: 8 porcento\n");
     printf("\nvalor total sem desconto:%.2f\n", preco);  
     printf("\nvalor total a pagar com desconto:%.2f\n", preco*0.92);  
    }
    if (tp_cbst <= 0 || total_lt <= 0 || tp_cbst  >=3)
    {
        printf("\ninformacaos inseridas incorretas\n");
    }

}