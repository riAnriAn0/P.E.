#include <stdio.h>

int main(int argc, char const *argv[])
{
    int matriz_1[3][3];
    int matriz_2[3][3];
    int matriz_3[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Digite um numero para matriz 1: ");
            scanf("%d", &matriz_1[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Digite um numero para matriz 2: ");
            scanf("%d", &matriz_2[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matriz_3[i][j] = ((matriz_1[i][0] * matriz_2[0][j]) + (matriz_1[i][1] * matriz_2[1][j]) + (matriz_1[i][2] * matriz_2[2][j]));
        }
    }

    printf("\n MATRIZ: \n");

    printf("\nM1: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %d ", matriz_1[i][j]);
        }
        printf("\n");
    }

    printf("\nM2: \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %d ", matriz_2[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %d ", matriz_3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
