#include <stdio.h>
int main()
{
    float valor, sb, desc; // sb == salario bruto
    int horas;
    printf("\nvalor da hora: "); //recebe o valor da  hora por aula
    scanf("%f", &valor);
    if (valor < 0) // caso a hora for menor que 0 apararece msg de erro
    {
        printf("\nvalor incorreto");
    }
    else // se o valor estiver correto pergunta as horas
    {
        printf("\ntotal de horas: ");
        scanf("%d", &horas);
        if (horas < 0)// se as horas for menor que zero envia msg de erro
        {
            printf("\nvalor incorreto");
        }
        else// caso as horas for maior que zero  perguna o desconto
        {
            
            printf("\ndesconto INSS: ");
            scanf("%f", &desc);
            if (desc < 0)// descomto incorreto msg de erro
            {
                printf("\nvalor incorreto");
            }
            else//informa os dados
            {
                sb = (float)horas * valor;//calcula salario bruto
                printf("\nsalario bruto: %.2f", sb);//informa salario bruto
                printf("\nsalario liquido: %.2f", sb-(sb*(desc/100)));// calcula salario liquido com base no desconto

            }
        }
    }
}