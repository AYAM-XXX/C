// Um professor necessita saber qual o conceito está relacionado à
// nota informada. Os conceitos são A, B, C, D e F. Sabe-se que F
// são alunos reprovados por faltas. Então o professor deve
// informar a nota e a quantidade de faltas. Se o aluno tiver mais
// de 4 faltas está com conceito F. Para os demais alunos não
// reprovados por falta vale as regras: Conceito A (9.0 até 10),
// Conceito B (7.1 até 8.9), Conceito C (6.0 até 7.0) e D
// (notas inferiores a 6). Elabore um programa em C para auxiliar
// o professor na atribuição do conceito ao aluno. Faz parte da
// avaliação, além do programa a identificação do tipo e das
// variáveis de entrada necessárias, assim como a identificação
//  das variáveis de saída.
// entrada:nota --> float nota float faltas
// saida conceito --> flaot conceito

#include <stdio.h>
int main()
{
    float nota;
    int faltas;

    printf("\nqual a nota do aluno: ");
    scanf("%f", &nota);
    while (nota < 0)
    {
        printf("\nqual a nota do aluno: ");
        scanf("%f", &nota);
    }
    printf("\nquantidades de falta: ");
    scanf("%d", &faltas);
    while (faltas < 0)
    {
        printf("\nquantidades de falta: ");
        scanf("%d", &faltas);
    }

    if (faltas > 4)
    {
        printf("\nConceito: f");
        printf("\ntotal faltas: %d", faltas);
    }
    else
    {
        if (nota < 6)
        {
            printf("\nConceito: D");
            printf("\ntotal faltas: %d", faltas);
        }
        else
        {
            if (nota >= 6 && nota <= 7)
            {
                printf("\nConceito: C");
                printf("\ntotal faltas: %d", faltas);
            }
            else
            {
                if (nota >= 7.1 && nota <= 8.9)
                {
                    printf("\nConceito: B");
                    printf("\ntotal faltas: %d", faltas);
                }
                else
                {
                    printf("\nConceito: A");
                    printf("\ntotal faltas: %d", faltas);
                }
            }
        }
    }

    return 0;
}