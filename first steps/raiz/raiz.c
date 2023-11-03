#include<stdio.h>
#include<math.h>
 main()
{
    float y;
    printf("qual o valor de y ?");
    scanf("%f",&y);
    float x = y/2;
    int corr  = 1;
     while ( corr == 1)
     {
        float x2= x- ((pow(x,2)-x)/(2*x));
        if (fabs(x2-x)<0.1)
        {
          corr = 0;
        }
        x = x2;
     }

     printf("\n%.2f valor aproximado\n", x);
     printf("\no valor esperado e %.2f\n", sqrt(y));
     
    return 0;
}
