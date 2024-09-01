#include <stdio.h>

int main()
{
    int matriz[5][5] = {
        {1, 0, 0, 0, 0},
        {0, 1, 0, 0, 0},
        {0, 0, 1, 0, 0},
        {0, 0, 0, 1, 0},
        {0, 0, 0, 0, 1}};

    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < 5; j++)
    //     {
    //         printf("Digite um numero: ");
    //         scanf("%d", &matriz[i][j]);
    //     }
    // }

    printf("\n MATRIZ: \n");

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if ((i == j) && (matriz[i][j] != 1) || ((i != j) && (matriz[i][j] != 0)))
            {
                printf("A matriz nao e identidade.");
                return 0;
            }
        }
    }

    printf("A matriz e identidade");

    return 0;
}
