#include <stdio.h>
int main(){
    float raio;
    float pi = 3.141519;
    printf("\nvalor do raio:");
    scanf("%f", &raio);
    if ( raio < 0)
    {
        printf("\nvalor incorreto");
    }
    else{
        printf("\nvalor da area: %.2f",pi*raio*raio);
    }
    
    
}