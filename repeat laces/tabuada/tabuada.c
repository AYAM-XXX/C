#include<stdio.h>
 main()
{
    int a = 0;
    for (int i = 1; i <= 10 ; i++)
    {
       
       for ( a = 0; a <= 10; a++)
       {
        printf("\n%d X %d = %d", i, a, i*a);
       }
       printf("\n");

       
    }
    
    return 0;
}
