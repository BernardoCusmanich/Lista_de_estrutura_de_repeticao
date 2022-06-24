#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, soma = 0;

    while (n != 0)
    {
        printf("Informe um numero(se for 0 o programa encerra): ");
        scanf("%d", &n);
        soma = soma + n;
    }

    printf("O resultado da soma dos numeros diferentes de 0 eh: %d", soma);
}
