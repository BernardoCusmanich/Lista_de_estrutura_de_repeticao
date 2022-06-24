#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, qd;

    qd = 0;

    printf(" Insira um n: ");
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
