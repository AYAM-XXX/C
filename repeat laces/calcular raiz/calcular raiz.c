#include<stdio.h>
#include<math.h>
int main()
{
    float y = 0;
    float x2 = 0;
    float e = 0;
    
    
    if (y > 0)
    {

    // segunda aproximação
     do
     {
        printf("qual o valor de y?");
    scanf("%f", &y);
    // primeira aproximação
    float x1 = y/2;
    printf("A primeira aproximação e %.2f", x1);
    //aproximação do x2 por sqr
    float raiz = sqrt(y);
    printf("A  aproximacao por sqr %.2f", raiz);
       float x2 = (++x2-x2*x2)-y/2*y;
       float e= x2++ -x2;
     } while (e <0.1);{
        printf("A terceira aproximação", x2);
     }
    
    
    }
    
    

    
    
    
   
}
