#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Variaveis
    int n = 1;

    // Entrada de dados
    do
    {
        if (n % 4 != 0)
        {
            printf("%d\n", n);
        }
        n++;
    } while (n < 1000);

    // Saida de dados

    return 0;
}
