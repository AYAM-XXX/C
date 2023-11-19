#include <stdio.h>
#include <string.h>

int main()
{
    char frase[25];
    int i;

    printf("digite a frase: ");
    gets(frase);
    for (i = 0; i < strlen(frase); i++)
    {
        if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u')
        {

            frase[i] = '*';
        }
        else
        {
        }
    }
    puts(frase);
}
// Faça um programa em C que receba uma frase e troque as vogais existentes
// nesta frase por um asterisco (*). Por exemplo: Frase “EU ESTOU NA
// ESCOLA” resultado na tela “** *ST** N* *SC*L*”
