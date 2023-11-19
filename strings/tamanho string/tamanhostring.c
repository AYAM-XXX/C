#include <stdio.h>
#include <string.h>

int main()
{
    char frase[25];
    int i, cont = 0;
    printf("\ndigite a frase corretamente, utilizando espaço ' ' e '.' para determinar o fim da frase'\n");
    printf("digite a frase: ");
    gets(frase);
    for (i = 0; i < 25; i++)
    {
        if (frase[i] != ' ' || frase[i] != '.')
        {
           
        }
        else
        {
             cont++;
        }
    }
    printf("\nA frase tem %d palavras", cont);
}
// 1 Faça um programa em C que receba uma letra qualquer fornecida pelo
// usuário, calcule e mostre quantas palavras a frase possui.