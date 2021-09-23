#include <stdio.h>
#include <string.h>
int main()
{
    char nome[100];
    char sobrenome[100];
    char resultado [100]; 
    printf("Nome: ");
    fgets(nome, 100, stdin);
    printf("sobrenome: ");
    fgets(sobrenome, 100, stdin);
    printf("resultado: ");
    
    
    
    
    
   strcpy(resultado, nome);
   strcat(resultado," ");
   strcat(resultado, sobrenome);
 
   puts(nome);
   puts(sobrenome);
   puts(resultado);
   

    

    return 0;
}
