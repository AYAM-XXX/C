#include <stdio.h>
#include <string.h>

int main(){
    char frase[25];
    int i;

    printf("digite a frase: ");
    gets(frase);
    for(i = 0; i < 25; i++ ){
        if(frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u'){

            frase[i] = '*';
        }
        else{

        }
        
    }
    puts(frase);
}