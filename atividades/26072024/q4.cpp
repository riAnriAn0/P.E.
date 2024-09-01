#include <stdio.h>

int main()
{
    int vetor[5];
    bool crescnete = true;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }

    for (int i = 1; i <= 4; i++)
    {
        if (vetor[i-1] > vetor[i])
        {
            crescnete = false;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ,", vetor[i]);
    }

    if (crescnete)
    {
        printf("\nOs numeros estao em ordem crescente");
    }
    else
    {
        printf("\nOs numeros estao em ordem decrescente");
    }

    return 0;
}
