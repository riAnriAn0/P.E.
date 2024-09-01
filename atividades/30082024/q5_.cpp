#include <stdio.h>

void ordenar(int *a, int *b, int *c)
{
    int temp;

    for (int i = 0; i < 3; i++)
    {
        if (*a > *b)
        {
            temp = *a;
            *a = *b;
            *b = temp;

            if (*b > *c)
            {
                temp = *b;
                *b = *c;
                *c = temp;
            }
        }
        else if (*b > *c)
        {
            temp = *b;
            *b = *c;
            *c = temp;
        }
    }
}

int main()
{
    int a, b, c;

    printf("Digite os valores de a b c: ");
    scanf("%d %d %d", &a, &b, &c);

    ordenar(&a, &b, &c);

    printf("\n\nNumeros ordenados\n");
    printf("a = %d \nb = %d \nc = %d\n", a,b,c);

    return 0;
}

/*
Faça um programa que leia três valores inteiros e chame uma função que receba estes 3
valores por meio de ponteiros e retorne eles ordenados, ou seja, o menor valor na primeira
variável, o segundo menor valor na variável do meio, e o maior valor na última. Exibir os valores
ordenados na tela. */