#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Variaveis
    int n = 1000;

    // Entrada de dados
    do
    {
        if (n % 11 == 5)
        {
            printf("%d\n", n);
        }
        n++;
    } while (n < 2000);

    // Saida de dados

    return 0;
}
