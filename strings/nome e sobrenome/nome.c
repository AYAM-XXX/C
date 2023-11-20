#include <string.h>
#include <stdio.h>

int main()
{
    char nome[50], sobrenome[50],completo[50];

    printf("\nqual e o seu nome?: ");
    gets(nome);
    printf("\nqual e o seu sobrenome?: ");
    gets(sobrenome);
    strcat(nome,' ');
    strcat(nome,completo);
  

    printf("\no seu nome tem %d letras ", strlen(nome));
    printf("\no seu nome tem %d letras ", strlen(sobrenome));
     completo[50]=strcat(nome,completo);
    printf("\n seu nome completo :%s ", puts(completo));
    printf("\no seu nome completo tem %d letras ", strlen(nome) + strlen(sobrenome));
}