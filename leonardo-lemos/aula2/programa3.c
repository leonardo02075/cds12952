# include <stdio.h>

int main()
{
    int idade;
    char inicial;

    printf("Digite sua inicial: ");
    scanf("%c", &inicial);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("\nInicial: %c\tIdade: %d.\n", inicial, idade);

    return 0;
}