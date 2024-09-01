#include <stdio.h>

int main()
{
    int n = 0;

    do
    {
        printf("\nDigite um numero inteiro positivo: ");
        scanf("%d", &n);
    } while (n <= 0);

    int seq_fib = 0, somador = 1;

    printf("Os %d primeiros numeros da sequenecia de Fibonacci: ", n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", seq_fib);
        somador += seq_fib;
        seq_fib += somador;

        i++;

        if (i < n)
        {
            printf("%d ", somador);
        }
    }

    return 0;
}
