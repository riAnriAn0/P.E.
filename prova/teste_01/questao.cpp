#include <stdio.h>

int main()
{
    int n, fib = 0, somador01 = 1, somador02;

    do
    {
        printf("Digite um numero inteiro positivo:");
        scanf("%d", &n);
    } while (n < 0);

    printf("Os %d primeiros termos da sequencia de fibonacci: ", n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ,", fib);
        somador02 = fib + somador01;
        somador01 = fib;
        fib = somador02;
    }

    return 0;
}
