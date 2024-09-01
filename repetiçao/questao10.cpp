// 10. Leia um número inteiro positivo e imprima seu fatorial usando um laço for.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num = 0;
    int fatorial= 1;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for (int i = num; i >= 1 ; i--)
    {
        fatorial *= i;
    }
        printf("O fatorial de %d e igual a %d\n\n", num , fatorial);
    
    return 0;
}
