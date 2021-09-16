#include <stdio.h>

int main()
{  
    
    int i, x; 
    printf("Digite um número para a pesquisa:  ");
    
    
    
    
    scanf("%d", &x);
    printf("Pesquisa da Tabuada do %d:   ", x);
    
    for(i = 0; i <= 10; i++)
    {
      printf("\n%dx%d = %d", i, x, i*x);
      
    }
    
     return 0;
}
