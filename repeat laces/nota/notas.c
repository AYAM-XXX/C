#include<stdio.h>
int main()
{

int nota = 0;
int min_nota = 0;
int max_nota = 0;
int resposta = 0;
int i = 1;
do
{
   printf("digite as nota do %d aluno: ", i);
   scanf("%d", &nota);
   printf("vai querer continuar 0 para sim e 1 para nao: ");
   scanf("%d", &resposta);
   i++;
if (i == 1)
        {
            min_nota = nota;
            max_nota = nota;
        }
        else{
            if (nota < min_nota)
            {
                min_nota = nota;
            
            }
            if (nota > max_nota)
            {
                max_nota = nota;
            }
    
}
} while (resposta < 1);{
    printf("Menor nota %d || Maior nota %d", min_nota, max_nota);
}
 
}



