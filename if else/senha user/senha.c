#include <stdio.h>
int main()
{

    int senha = 1234;
    int user = 0;

    // pedir a senha para o usuario
    printf("\n qual a senha?");
    scanf("%d", &user);
    // faz validaçâo da senha
    if (user != senha)
    {
        printf("\n ACESSO NEGADO");
    }
    else
    {
        printf("\nACESSO PERMITIDO");
    }
}