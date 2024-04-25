#include <stdio.h>
int main()
{

	float preco; // preço da compra
	int tp_cl;	 // tipo de cliente
	printf("qual foi o valor da compra: ");
	scanf("%f", &preco);
	if (preco > 0)
	{
		printf("escreva um numero para o tipo de cliente para calcular o valor do desconto");
		printf("\n1- funcionario");
		printf("\n2- cliente vip");
		printf("\n3- cliente convencional");
		printf("\ninforme o tipo de cliente: ");
		scanf("%d", &tp_cl);

			switch (tp_cl)
			{
			case 1:
				printf("o preco com o desconto sera %.2f", preco * 0.90);
				break; // funcionario

			case 2:
				printf("o preco com o desconto sera %.2f", preco * 0.95);
				break; // vip

			case 3:
				printf("o preco com o desconto sera %.2f", preco);
				break; // convecional

			default:
				printf("\ntipo de cliente invalido");
			}
	}
	else
	{
		printf("\nvalor da compra invalido!!");
	}
}