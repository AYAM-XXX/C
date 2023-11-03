#include<stdio.h>
int main()
{
    int somaimpares = 0;
    int numeros = 0;
    int max_num =0;
    int min_num;
   for (int i = 1; i <=10 ; i++)
   {
        printf("\ndigite 20 numeros: ", numeros);
        scanf("%d", &numeros);

        if (i == 1)
        {
            min_num = numeros;
            max_num = numeros;
        }
        else{
            if (numeros < min_num)
            {
                min_num = numeros;
            }
            if (numeros > max_num)
            {
                max_num = numeros;
            }
            
        }
 
//     if (numeros < 0){
//         printf("não pode numero negativo");
//         i--;
//     }
//     else{
    

// // soma de todos impares lidos

//      // if (numeros % 2 != 0 )
//     // {
//    //     somaimpares += numeros;
//   // }

// // soma de todos impares lidos maior que 100 a 200

//     // if (numeros % 2 != 0 && numeros >= 100 || numeros >= 200)
//    // {
//   //        somaimpares += numeros;
//  //}

//         if(numeros > max_num){
//             max_num = numeros;
//         }
//      }


   }
//    printf("\na soma e %d", somaimpares);
   printf("\nO maior numero e %d", max_num);
   printf("\nO menor numero e %d", min_num);
   
}
