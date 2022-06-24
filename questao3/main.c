#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Variaveis
    int n, soma = 0, i;
    float media;

    // Entrada de dados
    for (n = 0; n < 20; n++)
    {
        printf("Qual o %do i?\n ", n + 1);
        scanf("%d", &i);

        soma = soma + i;
    }

    // Processamento de dados
    media = soma / 5.;

    // Saida de dados
    printf("A media vale: %.2f", media);
}
