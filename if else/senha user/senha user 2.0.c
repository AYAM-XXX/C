#include <stdio.h>
int main()
{
    int senha = 0;
    int user = 0;
    // pega o valor das varivel de entrada
    printf("digite a senha desejada: ");
    scanf("%d", &senha);
    // coleta a senha do usuario
    printf("\nqual a senha do usuario? ");
    scanf("%d", &user);
    // verifica se a senha informada está correta
    if (senha != user)
    {
        printf("\nACESSO NEGADO");
    }
    else
        
            printf("\nACESSO PERMITIDO");
}