# include <stdio.h>

// calcula média aritmética
int main()
{
    float n1, n2, n3, n4, media_aritmetica;

    printf("Nota 1: ");
    scanf("%f", &n1);
    printf("\nNota 2: ");
    scanf("%f", &n2);
    printf("\nNota 3: ");
    scanf("%f", &n3);
    printf("\nNota 4: ");
    scanf("%f", &n4);

    media_aritmetica = (n1 + n2 + n3 + n4) / 4;

    if(media_aritmetica >= 7)
    {
        printf("\nAluno aprovado.");
    }

    if(media_aritmetica < 7)
    {
        printf("\nAluno reprovado");
    }

    printf("\n\nMédia aritmética: %f.", media_aritmetica);

    return 0;
}