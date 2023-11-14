#include <stdio.h>
#include <string.h>

int main()
{
    char frase[70];
    int i, j = 0;
    for (i = 0; i < 70; i++)
    {
        frase[i] = 0;
    }
    printf("digite a frase: ");
    gets(frase);

    for (i = 0; i < 70; i++)
    {
        printf("%c", frase[i]);//replica letra por letra
        if (frase[i] == ' ' || frase[i] == '.')
        {
            for (j = j; j < i; j++)
            {
                while (frase[j] == ' ')
                {
                    j++;
                }// caso identificar um espaço " " pula ele e passa para letra
                printf("%c", frase[j]);//repete a frase
            }
        }
    }
}