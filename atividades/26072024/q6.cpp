#include <stdio.h>

int main()
{

    int matriz[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Digite um numero: ");
            scanf("%d", &matriz[i][j]);
        }
    }

    int soma;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            soma += matriz[i][j];
        }
    }

    printf("A soma e igual a: %d", soma);

    return 0;
}