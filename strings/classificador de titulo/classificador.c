#include <stdio.h>
#include <string.h>

int main()
{
    char nome[20];
    int sexo, titulo;
    // titulos
    char title[24];
    
    printf("\ninsira o nome do professor: "); // pega o nome
    scanf("%s", nome);
    printf("\n qual o sexo?\ndigite:\n1-feminino\n2-masculino\ndigite: "); // pega a var sexo
    scanf("%d", &sexo);
    while (sexo < 1 || sexo > 2) // concistencia
    {
        printf("\n qual o sexo?\ndigite:\n1-feminino\n2-masculino\ndigite: ");
        scanf("%d", &sexo);
    }

    printf("\n qual o titulo?\ndigite:\n1-mestrado\n2-doutorado\ndigite: "); // pega o titulo
    scanf("%d", &titulo);
    while (titulo < 1 || titulo > 2) // concistencia
    {
        printf("\n qual o titulo?\ndigite:\n1-mestrado\n2-doutorado\ndigite: ");
        scanf("%d", &titulo);
    }
    if (sexo == 1) // validação de sexo
    {
        if (titulo == 1)
        {
            strcpy(title, "Ma. ");
        }
        else
        {
            strcpy(title, "Dra. ");
        }
    }
    else
    {
        if (titulo == 1)
        {
            strcpy(title, "Me. ");
        }
        else
        {
            strcpy(title, "Dr. ");
            
        }
    }
            strcat(title, nome);
            printf("%s", title);
}

// Elabore um programa que leia o nome de um professor (a), o sexo (F ou M) e a titulação
// doutorado ou 2 mestrado). O nome pode ter até 20 caracteres. Depois de ler
// separadamente cada informação, escreva o nome  do professor(a) com a complementação da
// sua titulação da seguinte forma: Dr (para professores), Dra (para professoras),
// Me (para professores) e Ma (para professoras).