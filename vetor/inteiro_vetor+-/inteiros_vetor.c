#include<stdio.h>
int main(){
    int vetor_int[10];
    int verificador=1;
    int i = 0;

    for(i = 0;i < 10;i++){
        printf("\ninsira um numero inteiro: ");
         scanf("%d",&vetor_int[i]);
    }
    for(i = 1;i < 10;i++){
      if(vetor_int[i] <= 20 && i % 2 != 0)
      {
      		verificador=0;	
	  }
    }
    if(verificador == 0){
        printf("\nnegativo");
	}
	else{
    printf("\npositivo");

	}
}
