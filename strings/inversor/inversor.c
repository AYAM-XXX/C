#include <stdio.h>
#include <string.h>

int main(){
    int i;
    char frase[40];
 for(i = 0; i < 40 ;i++){
       frase[i] = 0;
    }
    printf("qual a frase: ");
    gets(frase);
    for(i = 39; i >= 0 ;i--){
        printf("%c",frase[i]);
    }
}