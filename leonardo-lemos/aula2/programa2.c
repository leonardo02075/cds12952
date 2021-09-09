# include <stdio.h>
# define PI 3.1415

/*
 Programa de exemplo de dois modos diferentes
 de declarar constantes.
 */
int main()
{
    const float pi = 3.1415;
    printf("PI = \t%f\n", PI); // \t para imprimir tab
    printf("PI = %f", pi);

    return 0;
}