#include <stdio.h>
#include <string.h>

int main()
{
    char original[50], copia[50];

    for (int i = 0; i < 50; i++)
    {
        original[i] = 0;
        copia[i] = 0;
    }//reseta o resto de memoria
    printf("\ndigite a frase: ");
    gets(original);//pega a frase

    strcpy(copia,original);
    strcat(copia," (copia)");//recebe a string original e coloca a frase "copiar"
    puts(copia);
}