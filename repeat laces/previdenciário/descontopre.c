// Implementar um programa que calcula o desconto previdenciário
//  de um funcionário. O programa deve imprimir o valor do desconto
//  proporcional ao salário informado na tela (que não poderá ser
//  menor ou igual a zero). O cálculo do desconto segue a regra: o
//  desconto deve ser de 11% do valor do salário, entretanto, o valor
//   máximo de desconto é de  R$318,20. Sendo assim, ou resultado do
//   valor do desconto previdenciário deverá ser 11% sobre o salário
//    ou 318,20.
// entrada: salario <-- float
// saida: desconto proporcinal <-- float
// concistencia: 11% se o valor de 11% for > que 318,20, desconto 318,20
//
#include <stdio.h>
int main()
{
    float salario;
    float desconto;

    printf("valor salario:");
    scanf("%f", &salario);
    while (salario <= 0)
    {
        printf("\nvalor salario (correto):");
        scanf("%f", &salario);
    }
    desconto = salario*0.11;
    if ( desconto > 318.20 )
    {
        desconto = 318.20;
        printf("\ndesconto: %.2f", desconto);
    }
    else
    {
        printf("\ndesconto:%.2f", desconto);
    }
    
    

}