#include <stdio.h>

int main()
{
  int l;
  
  int d;
   printf("Digite um número inteiro:   ");
   scanf("\n%d", &d);
  int soma;
  soma = 0;
  
  int produto;
  produto = 1;
   
   for(l= 1; l <= d; l++)
   {
       soma += l;
       produto *= l;
   }
    printf("soma: %d ", soma);
    printf("\nproduto: %d ", produto);

    return 0;
}
