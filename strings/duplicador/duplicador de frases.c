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
        printf("%c", frase[i]);
        if (frase[i] == ' ' || frase[i] == '.')
        {
            for (j = j; j < i; j++)
            {
                while (frase[j] == ' ')
                {
                    j++;
                }
                printf("%c", frase[j]);
            }
        }
    }
}