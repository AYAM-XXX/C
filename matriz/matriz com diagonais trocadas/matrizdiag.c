#include <stdio.h>
#include <math.h>

int main()
{
    int tam = 3; // define o tamanho
    int matriz[tam][tam];
    int vetor[tam];
    int tamv = pow(tam, 2); // tamanho ao quadrado da matriz para pegar todos os valores
    int vetor_m40[tamv];    // vetor que contabiliza valores maiores que 40
    int cont = 0;
    // i: coluna j : linha
    for (int i = 0; i < tamv; i++) // reseta vetor para limpar sujeira de memoria
    {
        vetor_m40[i] = 0;
    }

    for (int i = 0; i < tam; i++) // recolhe os dados da matriz
    {
        for (int j = 0; j < tam; j++)
        {
            printf("\ndigite valores maiores que 10 e apenas pares");
            printf("\nqual o valor do vetor[%d][%d]", i, j);
            scanf("%d", &matriz[i][j]);
            while (matriz[i][j] < 10 || matriz[i][j] % 2 != 0)
            {
                printf("\ndigite valores maiores que 10 e apenas pares");
                printf("\nqual o valor do vetor[%d][%d]", i, j);
                scanf("%d", &matriz[i][j]);
            }
        }
    }
    printf("\n\nMATRIZ PRINCIPAL\n\n"); // printa a matriz principal
    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            cont++;
            printf("%d  ", matriz[i][j]);
            if (matriz[i][j] > 40)
            {
                vetor_m40[cont] = matriz[i][j];
            }
        }
        printf("\n\n");
    }
    printf("\n\nVALORES MAIORES QUE 40\n\n"); // ptrinta valores maiores que 40
    for (int i = 0; i < tamv; i++)
    {
        if (vetor_m40[i] > 40)
        {
            printf("[%d]", vetor_m40[i]);
        }
    }

    for (int i = 0; i < tam; i++) // transfere a diagonal principal para um vetor
    {
                vetor[i] = matriz[i][i];
    }
    for (int i = 0; i < tam; i++) // transfere a diagonal principal para secundaria
    {
                matriz[i][tam - i - 1] = vetor[i];
    }
    printf("\n\nMATRIZ COM DIAGONAIS TROCADAS\n\n"); // printa a matriz com as diagonais trocadas
    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            printf("%d  ", matriz[i][j]);
        }
        printf("\n\n");
    }
}
// Elabore um programa que manipule com uma matriz 5X5 de inteiros, a qual será preenchida
// com valores lidos pelo teclado. Os valores devem ser maiores que 10 e pares. Depois de
// toda preenchida a matriz imprima ela (como foi preenchida pelo teclado) e depois troque
// os valores que estão na diagonal principal pelos valores que estão na diagonal secundária,
// assim a diagonal principal ficará idêncida à diagonal secundária e, no final do processo,
//  imprima a matriz modificada.
// Manipulando com a matriz modificada crie um vetor com os valores armazenados na matriz
// que sejam maiores que 40. Após a vriação do vetor imprima ele de traz para frente.
// Observe: consista os valores lidos do teclado para que eles atendam as regras definidas.
// Use os tipos de dados adequados e os nomes das variáveis seguindo as normas informadas nas aulas.