#include <stdio.h>
int main()
{
    float acr, temp;
    printf("qual a aceleração?:");
    scanf("%f", &acr);
    printf("\nqual o tempo?:");
    scanf("%f", &temp);
    printf("\no espaço percorrido e: %.2f", (acr * temp * temp) / 2);
}