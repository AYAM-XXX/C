#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char frase[50];

    for (i = 0; i < 50; i++)
    {
        frase[i] = 0;
    }

    printf("digite a frase:");
    gets(frase);
    for (i = 0; i < 50; i++)
    {
        printf("%c", frase[i]);
        if (frase[i] == ' ' || frase[i] == '.')
        {
            printf("\n");
        }
    }
}