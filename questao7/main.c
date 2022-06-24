#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n, maior, menor, i;

    printf("Escreva um numero: ");
    scanf("%i", &n);

    maior = n;
    menor = n;

    for (i = 1; i < 100; i++)
    {
        printf("escreva outro numero: ", i + 1);
        scanf("%i", &n);

        if (n > maior)
            maior = n;
        else if (n < menor)
            menor = n;
    }

    printf("\nO menor numero entrado e: %d", menor);
    printf("\nO maior numero entrado e: %d", maior);
}
