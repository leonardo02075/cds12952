#include <stdio.h>

int main()
{  
    
    /*int i; 
      printf("Exercício 2 tabuada fixada");
    int x;
    x = 1;
    
    for(x = 1; x  <= 5; x++)
    {
         printf("\nTabuada do numero %d:  ", x);
         for(i = 1; i <= 10; i++)
         {
             printf("\n%d x %d = %d", i, x, i*x);
         }
    */
    
    int i;
    int x;
    x = 1;
    
    for(i = 1; i <= 10; i++)
    {
        for(x = 1;  x <= 5; x++)
        {
            printf("%d x %d = %d\t", x, i, x*i);
        }
        printf("\n");
    }
    
     return 0;
    
}