#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Variaveis
    int n, produto = 1, i;

    // Entrada de dados
    for (n = 0; n < 20; n++)
    {
        printf("Qual o %do i?\n ", n + 1);
        scanf("%d", &i);

        produto = produto * i;
        printf("O produto eh: %d\n", produto);
    }
}
