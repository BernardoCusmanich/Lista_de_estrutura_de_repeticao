#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, n2, qd;

    qd = 0;

    printf(" Insira um numero: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i)
    {

        if (n % i == 0)
        {
            printf(" %d ", i);
            qd++;
        }
    }

    printf("\nInsira outro numero: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i)
    {

        if (n % i == 0)
        {
            printf(" %d ", i);
            qd++;
        }
    }
}
