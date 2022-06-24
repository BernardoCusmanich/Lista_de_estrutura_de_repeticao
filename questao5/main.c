#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Variaveis
    int n1, n2;

    // Entrada de dados
    printf("Escolha um numero: ");
    scanf("%d", &n1);
    printf("Escolha outro numero: ");
    scanf("%d", &n2);

    // Processamento de dados
    while (n1 < (n2 - 1))
    {
        n1++;
        printf("%d\n", n1);
    }
}
