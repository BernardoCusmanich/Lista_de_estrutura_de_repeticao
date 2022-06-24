#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, qm = 0;

    printf("Informe um numero inteiro: ");
    scanf("%d", &n);
    if (n % 3 == 0)
        qm = qm + 1;

    for (i = 1; i < 3; i++)
    {
        printf("Informe outro numero inteiro: ");
        scanf("%d", &n);
        if (n % 3 == 0)
            qm = qm + 1;
    }
    printf("A quantidade de multiplos de 3 eh: %d", qm);
    return 0;
}
