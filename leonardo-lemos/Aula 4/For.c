#include <stdio.h>
int main()
{
 
     /*
     *Laço for tem 3 partes:
     *inicialização 
     *condição
     *incremente
     *Cada parte separada por ponto e vírgula (;).
     */
    
     int caractere;
     printf("Caractere\tCódigo ASCII\n");
     for(caractere = 32; caractere <= 127; caractere++)
     {
          printf("      %c\t%d\n", caractere, caractere);
     }
     
     return 0;
}