#include <stdio.h>
#include <stdlib.h>

int main()
{
    int positivos = 0, negativos = 0, valor, limite = 1;

    while (limite <= 10)
    {
        printf("Digite um valor: ");
        scanf("%d", &valor);
        if (valor < 0)
            negativos = negativos + valor;
        else
            positivos = positivos + valor;
        limite++;
    }
    printf("A soma dos positivos eh: %d\n", positivos);
    printf("a soma dos negativos eh: %d\n", negativos);

    return 0;
}
